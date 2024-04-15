package com.example.MPR.exception;
public class CategoryNotFoundException extends RuntimeException {
        public CategoryNotFoundException(String s) {super("Category not found");
        }
    }


