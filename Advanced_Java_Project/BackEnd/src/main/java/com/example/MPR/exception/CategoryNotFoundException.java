package com.example.MPR.exception;

public class CategoryNotFoundException extends RuntimeException {
    public CategoryNotFoundException(String z) {super("Category not found");
    }
}