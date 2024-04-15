package com.example.MPR.repositories;

import com.example.MPR.entities.UserDTO;
import org.springframework.data.repository.CrudRepository;
import org.springframework.stereotype.Repository;
import org.springframework.transaction.annotation.Transactional;


@Repository
@Transactional
public interface UserRepository extends CrudRepository<UserDTO,Long> {
     UserDTO findByUsername(String username);


}
