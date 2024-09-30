/**
 * @file MainCourse.hpp
 * @brief This file contains the declaration of the MainCourse class, which represents a main course dish in a virtual bistro simulation.
 * 
 * The MainCourse class includes attributes such as cooking method, side dishes, and gluten-free status.
 * @date 10/30/2024
 * @author Joshua Wang
 */

#ifndef MAINCOURSE_HPP
#define MAINCOURSE_HPP

#include "Dish.hpp"
#include <vector>

class MainCourse : public Dish {
public:
    // Enum for different cooking methods of main courses
    enum class CookingMethod { GRILLED, BAKED, FRIED, STEAMED, RAW };

    // Struct for side dishes
    struct SideDish {
        std::string name; ///< The name of the side dish.
        std::string category; ///< The category of the side dish.
    };

    // Default constructor
    MainCourse();

    // Parameterized constructor
    MainCourse(const std::string& name, 
               const std::vector<std::string>& ingredients, 
               int prep_time, 
               double price, 
               CuisineType cuisine_type, 
               CookingMethod cooking_method, 
               const std::vector<SideDish>& side_dishes, 
               bool gluten_free);

    // Accessor for cooking method
    /**
     * @brief Gets the cooking method of the main course.
     * @return The cooking method as a CookingMethod enum.
     */
    CookingMethod getCookingMethod() const;

    // Mutator for cooking method
    /**
     * @brief Sets the cooking method of the main course.
     * @param cooking_method The new cooking method as a CookingMethod enum.
     */
    void setCookingMethod(CookingMethod cooking_method);

    // Accessor for side dishes
    /**
     * @brief Gets the list of side dishes.
     * @return A vector of SideDish structs.
     */
    std::vector<SideDish> getSideDishes() const;

    // Method to add a side dish
    /**
     * @brief Adds a side dish to the list of side dishes.
     * @param side_dish The side dish to add.
     */
    void addSideDish(const SideDish& side_dish);

    // Accessor for gluten-free status
    /**
     * @brief Checks if the main course is gluten-free.
     * @return True if the main course is gluten-free, false otherwise.
     */
    bool isGlutenFree() const;

    // Mutator for gluten-free status
    /**
     * @brief Sets the gluten-free status of the main course.
     * @param gluten_free The new gluten-free status.
     */
    void setGlutenFree(bool gluten_free);

private:
    CookingMethod cooking_method_; ///< The cooking method of the main course.
    std::vector<SideDish> side_dishes_; ///< The list of side dishes.
    bool gluten_free_; ///< The gluten-free status of the main course.
};

#endif // MAINCOURSE_HPP