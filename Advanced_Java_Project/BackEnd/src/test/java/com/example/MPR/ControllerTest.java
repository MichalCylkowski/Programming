package com.example.MPR;

import com.example.MPR.controllers.MyController;
import com.example.MPR.entities.UserDTO;
import com.example.MPR.exception.UserExceptionHandler;
import com.example.MPR.exception.UserNotFoundException;
import com.example.MPR.services.MyRestService;
import org.junit.jupiter.api.BeforeEach;
import org.junit.jupiter.api.Test;
import org.junit.jupiter.api.extension.ExtendWith;
import org.mockito.InjectMocks;
import org.mockito.Mock;
import org.mockito.junit.jupiter.MockitoExtension;
import org.springframework.test.web.servlet.MockMvc;
import org.springframework.test.web.servlet.request.MockMvcRequestBuilders;
import org.springframework.test.web.servlet.setup.MockMvcBuilders;

import java.util.Optional;

//import static org.graalvm.nativeimage.RuntimeOptions.get;
import static org.mockito.Mockito.when;
import static org.springframework.test.web.servlet.result.MockMvcResultMatchers.jsonPath;
import static org.springframework.test.web.servlet.result.MockMvcResultMatchers.status;

@ExtendWith(MockitoExtension.class)
public class ControllerTest {
    private MockMvc mocMvc;
    @Mock
    private MyRestService service;
    @InjectMocks
    private MyController controller;
    @BeforeEach
    public void setup(){
        this.mocMvc = MockMvcBuilders.standaloneSetup(
                new UserExceptionHandler(), controller).build();
    }
    @Test
    public void getByIdReturns200WhenUserIsPresent() throws Exception{
        UserDTO user = new UserDTO("Igor", "igor@gmail.com",32);
        when(service.findById(3L)).thenReturn(Optional.of(user));

        mocMvc.perform(MockMvcRequestBuilders.get("/users/get/3"))
                .andExpect(jsonPath("$.email").value("igor@gmail.com"))
                .andExpect(jsonPath("$.username").value("Igor"))
                .andExpect(status().isOk());
    }
    @Test
    public void getByIdReturns404WhenUserIsNotPresent() throws Exception{
        when(service.findById(3L)).thenThrow(new UserNotFoundException("Not found"));

        //mocMvc.perform(get("/users/get/3"))
               // .andExpect(status().isNotFound());
    }
    @Test
    public void check400IsReturnedWhenUserIsAlreadyThere() throws Exception {

    }


}
