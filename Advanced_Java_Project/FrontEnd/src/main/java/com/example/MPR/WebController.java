package com.example.MPR;

import com.example.MPR.entities.Category;
import com.example.MPR.entities.Task;
import com.example.MPR.entities.UserDTO;
import com.example.MPR.services.CategoryService;
import com.example.MPR.services.MyRestService;
import com.example.MPR.services.TaskService;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Controller;
import org.springframework.ui.Model;
import org.springframework.web.bind.annotation.*;
import org.springframework.web.client.HttpClientErrorException;
import org.springframework.web.servlet.mvc.support.RedirectAttributes;


@Controller
public class WebController {
    @Autowired
    private final MyRestService service;
    private final TaskService taskService;

    private final CategoryService categoryService;

    public WebController(MyRestService myRestService, TaskService taskService, CategoryService categoryService)
    {
        this.service = myRestService;
        this.taskService = taskService;
        this.categoryService = categoryService;
    }

    @GetMapping(value = "/index")
    public String getIndexView(Model model) {
        model.addAttribute("users", service.findAll());
        model.addAttribute("tasks", taskService.findAllTasks());
        model.addAttribute("categories", categoryService.findAllCategories());
        return "index";
    }



    @GetMapping(value = "/addUser")
    public String getAddView(Model model) {
        model.addAttribute("user", new UserDTO("","",0));
        return "addUser";
    }

    @PostMapping (value = "/addUser")
    public String addUser(UserDTO user, Model model, RedirectAttributes redirectAttributes) {
        service.addUser(user);
        redirectAttributes.addFlashAttribute("successMessage","User successfully added");
        return "redirect:/index";
    }


    @GetMapping("/users/delete/{id}")
    public String getDeleteView(@PathVariable("id") Long id, Model model) {
        UserDTO user = service.findById(id);
        if (user !=null) {
            model.addAttribute("user", user);
            return "deleteUser";
        } else {
            model.addAttribute("error", "User is not present");
            return "error";
        }
    }

    @PostMapping("/users/delete/{id}")
    public String deleteUser(@PathVariable("id") Long id) {
        try {
            service.deleteById(id);
            return "redirect:/index";
        } catch (HttpClientErrorException.NotFound ex) {
            return "error";
        }
    }

    @GetMapping(value="/users/editUser/{id}")
    public String getEditView(@PathVariable("id") long id, Model model){
        UserDTO user = service.findById(id);
        if(user != null){
            model.addAttribute("user", user);
        }
        else{
            model.addAttribute("errorMessage", "User is not present");
        }
        return "editUser";
    }

    @PostMapping("/users/editUser/{id}")
    public String updateUser(@PathVariable long id, @ModelAttribute("user") UserDTO updatedUser) {
        service.updateUserById(updatedUser, id);
        return "redirect:/index";
    }



//    @GetMapping("/tasks/editTask/{id}")
//    public String getEditTaskView(@PathVariable Long id, Model model) {
//        Task task = taskService.findTaskById(id);
//        model.addAttribute("task", task);
//        return "editTask";
//    }
@GetMapping("/tasks/editTask/{id}")
public String getEditTaskView(@PathVariable Long id, Model model) {
    Task task = taskService.findTaskById(id);
    if (task != null) {
        model.addAttribute("task", task);
        return "editTask";
    } else {
        model.addAttribute("error", "Task is not present");
        return "error";
    }
}
@PostMapping(value = "/tasks/editTask/{id}")
    public String updateTask(@PathVariable long id, @ModelAttribute("task") Task updatedTask,
                             RedirectAttributes redirectAttributes) {
        try {
            taskService.updateTaskById(updatedTask,id);
            redirectAttributes.addFlashAttribute("successMessage", "Task successfully updated");
            return "redirect:/index";
        } catch (HttpClientErrorException.NotFound ex) {
            return "error";
        }
    }
    @GetMapping(value = "/tasks/addTask")
    public String getAddTaskView(Model model) {
        model.addAttribute("task", new Task());
        return "addTask";
    }

    @PostMapping(value = "/tasks/addTask")
    public String addTask(@ModelAttribute("task") Task task, Model model, RedirectAttributes redirectAttributes) {
        taskService.addTask(task);
        redirectAttributes.addFlashAttribute("successMessage", "Task successfully added");
        return "redirect:/index";
    }


    @GetMapping(value = "/addCategory")
    public String getAddCategoryView(Model model) {
        model.addAttribute("category", new Category());
        return "addCategory";
    }

    @PostMapping(value = "/addCategory")
    public String addCategory(@ModelAttribute("category") Category category, Model model, RedirectAttributes redirectAttributes) {
        categoryService.addCategory(category);
        redirectAttributes.addFlashAttribute("successMessage", "Category successfully added");
        return "redirect:/index";
    }

    @GetMapping(value = "/categories/editCategory/{id}")
    public String getEditCategoryView(@PathVariable("id") long id, Model model) {
        Category category = categoryService.findCategoryById(id);
        if (category != null) {
            model.addAttribute("category", category);
            return "editCategory";
        } else {
            model.addAttribute("error", "Category is not present");
            return "error";
        }

    }

    @PostMapping(value = "/categories/editCategory/{id}")
    public String updateCategory(@PathVariable long id, @ModelAttribute("category") Category updatedCategory,
                                 RedirectAttributes redirectAttributes) {
        try {
            categoryService.updateCategoryById(updatedCategory, id);
            redirectAttributes.addFlashAttribute("successMessage", "Category successfully updated");
            return "redirect:/index";
        } catch (HttpClientErrorException.NotFound ex) {
            return "error";
        }
    }





}
