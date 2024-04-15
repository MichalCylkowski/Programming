package com.example.MPR.exception;

public class UserNotFoundException extends RuntimeException {
    public UserNotFoundException(String z) {super("User not found");}
}
