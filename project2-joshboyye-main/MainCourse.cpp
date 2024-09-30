/**
 * @file MainCourse.cpp
 * @brief This file contains the implementation of the MainCourse class, which represents a main course dish in a virtual bistro simulation.
 * 
 * The MainCourse class includes attributes such as cooking method, side dishes, and gluten-free status.
 * 
 * @date 10/30/2024
 * @author Joshua Wang
 */

#include "MainCourse.hpp"

// Default constructor
MainCourse::MainCourse() 
    : Dish(), 
      cooking_method_(CookingMethod::GRILLED), 
      gluten_free_(false) {}

// Parameterized constructor
MainCourse::MainCourse(const std::string& name, 
                       const std::vector<std::string>& ingredients, 
                       int prep_time, 
                       double price, 
                       CuisineType cuisine_type, 
                       CookingMethod cooking_method, 
                       const std::vector<SideDish>& side_dishes, 
                       bool gluten_free)
    : Dish(name, ingredients, prep_time, price, cuisine_type), 
      cooking_method_(cooking_method), 
      side_dishes_(side_dishes), 
      gluten_free_(gluten_free) {}

// Accessor for cooking method
MainCourse::CookingMethod MainCourse::getCookingMethod() const { 
    return cooking_method_; 
}

// Mutator for cooking method
void MainCourse::setCookingMethod(CookingMethod cooking_method) { 
    cooking_method_ = cooking_method; 
}

// Accessor for side dishes
std::vector<MainCourse::SideDish> MainCourse::getSideDishes() const { 
    return side_dishes_; 
}

// Method to add a side dish
void MainCourse::addSideDish(const SideDish& side_dish) { 
    side_dishes_.push_back(side_dish); 
}

// Accessor for gluten-free status
bool MainCourse::isGlutenFree() const { 
    return gluten_free_; 
}

// Mutator for gluten-free status
void MainCourse::setGlutenFree(bool gluten_free) { 
    gluten_free_ = gluten_free; 
}