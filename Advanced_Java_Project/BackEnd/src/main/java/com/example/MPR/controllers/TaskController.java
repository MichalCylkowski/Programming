package com.example.MPR.controllers;

import com.example.MPR.entities.Task;
import com.example.MPR.services.TaskService;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.web.bind.annotation.*;

import java.util.List;
import java.util.logging.Logger;

@RestController
@RequestMapping("/tasks")
public class TaskController {

    private final TaskService taskService;
    private final Logger logger = Logger.getLogger("TaskController");

    @Autowired
    public TaskController(TaskService taskService) {
        this.taskService = taskService;
        taskService.addTask(new Task("Task 1 description"));
        taskService.addTask(new Task("Task 2 description"));
        taskService.addTask(new Task("Task 3 description"));
    }

    @GetMapping("/{id}")
    public Task getTaskById(@PathVariable Long id) {
        logger.info("Endpoint: getTaskById");
        return taskService.getTaskById(id);
    }

    @GetMapping
    public List<Task> getAllTasks() {
        logger.info("Endpoint: getAllTasks");
        return taskService.getAllTasks();
    }

    @PostMapping("/addTask")
    public Task addTask(@RequestBody Task task) {
        logger.info("Endpoint: addTask");
        return taskService.addTask(task);
    }


    @PutMapping("/editTask/{id}")
    public Task updateTask(@PathVariable Long id, @RequestBody Task task) {
        logger.info("Endpoint: updateTask");
        return taskService.updateTask(id, task);
    }


    @DeleteMapping("/{id}")
    public void deleteTask(@PathVariable Long id) {
        logger.info("Endpoint: deleteTask");
        taskService.deleteTask(id);
    }
}