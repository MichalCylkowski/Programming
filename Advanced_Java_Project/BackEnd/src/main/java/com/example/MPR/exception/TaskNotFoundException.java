package com.example.MPR.exception;

public class TaskNotFoundException extends RuntimeException {
    public TaskNotFoundException(String z) {super("Task not found");
    }
}