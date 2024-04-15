package com.example.MPR.services;

import com.example.MPR.entities.UserDTO;
import com.example.MPR.exception.UserNotFoundException;
import com.example.MPR.repositories.UserRepository;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;
import java.util.ArrayList;
import java.util.List;
import java.util.Optional;

@Service
public class MyRestService {
    @Autowired
    UserRepository repository;

    public MyRestService(UserRepository repository) {
        this.repository = repository;
    }
    public UserDTO findByUsername(String username) {
        UserDTO user = this.repository.findByUsername(username);
        if( user == null) {
            throw new UserNotFoundException("This user doesn't exist");
        }
        return user;
    }
    public void add(UserDTO user) {
        this.repository.save(user);
    }
    public Iterable<UserDTO> findAll(){
        return this.repository.findAll();
    }
    public Optional<UserDTO> findById(Long id) {
        Optional<UserDTO> repoUser = this.repository.findById(id);

        if (repoUser.isPresent()) {
            return repoUser;
        } else {
            throw new UserNotFoundException("There is no user with ID: " + id);
        }
    }

    public List<UserDTO> filterByUsername(String name) {
        List<UserDTO> allUsers = (List<UserDTO>) this.repository.findAll();
        List<UserDTO> filteredUsers = new ArrayList<>();

        for (UserDTO user : allUsers){
            if(user.getUsername().toLowerCase().contains(name.toLowerCase())){
                filteredUsers.add(user);
            }
        }
        return filteredUsers;
    }

    public UserDTO addUser(UserDTO body) {
    if (body.getAge() <= 0) {
        throw new IllegalArgumentException("Age can't be less than 0");
    }
    return this.repository.save(body);
    }

    public void deleteUser(Long id) {
        this.repository.deleteById(id);
    }
    public void updateUser(UserDTO body){this.repository.save(body);}
}
