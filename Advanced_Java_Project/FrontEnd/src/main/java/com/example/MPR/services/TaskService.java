package com.example.MPR.services;

import com.example.MPR.entities.Task;
import com.example.MPR.exception.TaskNotFoundException;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;
import org.springframework.core.ParameterizedTypeReference;
import org.springframework.http.MediaType;
import org.springframework.http.ResponseEntity;
import org.springframework.web.client.RestClient;

import java.util.List;

@Service
public class TaskService {

    public static final String BASE_URL = "http://localhost:8080";
    RestClient restClient;

    @Autowired
    public TaskService() {
        restClient = RestClient.create();
    }

    public List<Task> findAllTasks() {
        return restClient
                .get()
                .uri(BASE_URL + "/tasks")
                .retrieve()
                .body(new ParameterizedTypeReference<>() {
                });
    }

    public Task findTaskById(Long id) {
        Task task = restClient
                .get()
                .uri(BASE_URL + "/tasks/{id}", id)
                .retrieve()
                .body(Task.class);

        if (task == null) {
            throw new TaskNotFoundException("Task not found with ID: " + id);
        }

        return task;
    }

    public void deleteTaskById(Long id) {
        restClient
                .delete()
                .uri(BASE_URL + "/tasks/delete/{id}", id)
                .retrieve()
                .toBodilessEntity();
    }

    public Void addTask(Task body) {
        ResponseEntity<Void> task = restClient
                .post()
                .uri(BASE_URL + "/tasks/addTask")
                .contentType(MediaType.APPLICATION_JSON)
                .body(body)
                .retrieve()
                .toBodilessEntity();
        return task.getBody();
    }

    public void updateTaskById(Task task, long id) {
        restClient
                .put()
                .uri(BASE_URL + "/tasks/editTask/" + id)
                .contentType(MediaType.APPLICATION_JSON)
                .body(task)
                .retrieve()
                .toBodilessEntity();
    }
}
