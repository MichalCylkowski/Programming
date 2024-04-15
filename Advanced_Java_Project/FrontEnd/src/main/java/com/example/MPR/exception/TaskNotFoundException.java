package com.example.MPR.exception;

public class TaskNotFoundException extends RuntimeException {
    public TaskNotFoundException(String s) {super("Task not found");
    }
}

