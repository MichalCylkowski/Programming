package com.example.MPR.services;

import com.example.MPR.entities.Category;
import com.example.MPR.exception.CategoryNotFoundException;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;
import org.springframework.core.ParameterizedTypeReference;
import org.springframework.http.MediaType;
import org.springframework.http.ResponseEntity;
import org.springframework.web.client.RestClient;

import java.util.List;

@Service
public class CategoryService {

    public static final String BASE_URL = "http://localhost:8080";
    RestClient restClient;

    @Autowired
    public CategoryService() {
        restClient = RestClient.create();
    }

    public List<Category> findAllCategories() {
        return restClient
                .get()
                .uri(BASE_URL + "/categories")
                .retrieve()
                .body(new ParameterizedTypeReference<>() {
                });
    }

    public Category findCategoryById(Long id) {
        Category category = restClient
                .get()
                .uri(BASE_URL + "/categories/{id}", id)
                .retrieve()
                .body(Category.class);

        if (category == null) {
            throw new CategoryNotFoundException("Category not found with ID: " + id);
        }

        return category;
    }

    public void deleteCategoryById(Long id) {
        restClient
                .delete()
                .uri(BASE_URL + "/categories/delete/{id}", id)
                .retrieve()
                .toBodilessEntity();
    }

    public Void addCategory(Category body) {
        ResponseEntity<Void> category = restClient
                .post()
                .uri(BASE_URL + "/categories/add")
                .contentType(MediaType.APPLICATION_JSON)
                .body(body)
                .retrieve()
                .toBodilessEntity();
        return category.getBody();
    }

    public void updateCategoryById(Category category, long id) {
        restClient
                .put()
                .uri(BASE_URL + "/categories/update/" + id)
                .contentType(MediaType.APPLICATION_JSON)
                .body(category)
                .retrieve()
                .toBodilessEntity();
    }
}

