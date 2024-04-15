package com.example.MPR.controllers;

import com.example.MPR.entities.Category;
import com.example.MPR.services.CategoryService;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.web.bind.annotation.*;

import java.util.List;
import java.util.logging.Logger;

@RestController
@RequestMapping("/categories")
public class CategoryController {

    private final CategoryService categoryService;
    private final Logger logger = Logger.getLogger("CategoryController");

    @Autowired
    public CategoryController(CategoryService categoryService) {
        this.categoryService = categoryService;
        categoryService.createCategory(new Category("Category 1 name"));
        categoryService.createCategory(new Category("Category 2 name"));
        categoryService.createCategory(new Category("Category 3 name"));
    }

    @GetMapping("/{id}")
    public Category getCategoryById(@PathVariable Long id) {
        logger.info("Endpoint: getCategoryById");
        return categoryService.getCategoryById(id);
    }

    @GetMapping
    public List<Category> getAllCategories() {
        logger.info("Endpoint: getAllCategories");
        return categoryService.getAllCategories();
    }

    @PostMapping
    public Category createCategory(@RequestBody Category category) {
        logger.info("Endpoint: createCategory");
        return categoryService.createCategory(category);
    }

    @PutMapping("/{id}")
    public Category updateCategory(@PathVariable Long id, @RequestBody Category category) {
        logger.info("Endpoint: updateCategory");
        return categoryService.updateCategory(id, category);
    }

    @DeleteMapping("/{id}")
    public void deleteCategory(@PathVariable Long id) {
        logger.info("Endpoint: deleteCategory");
        categoryService.deleteCategory(id);
    }
}
