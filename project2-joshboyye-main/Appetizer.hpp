/**
 * @file Appetizer.hpp
 * @brief This file contains the declaration of the Appetizer class, which represents an appetizer dish in a virtual bistro simulation.
 * 
 * The Appetizer class includes attributes such as serving style, spiciness level, and vegetarian status.
 * 
 * @date 10/30/2024
 * @author Joshua Wang
 */


#ifndef APPETIZER_HPP
#define APPETIZER_HPP

#include "Dish.hpp"

class Appetizer : public Dish {
public:
    // Enum for different serving styles of appetizers
    enum class ServingStyle { PLATED, FAMILY_STYLE, BUFFET };

    // Default constructor
    Appetizer();

    // Parameterized constructor
    Appetizer(const std::string& name, 
              const std::vector<std::string>& ingredients, 
              int prep_time, 
              double price, 
              CuisineType cuisine_type, 
              ServingStyle serving_style, 
              int spiciness_level, 
              bool vegetarian);

    // Accessor for serving style
    /**
     * @brief Gets the serving style of the appetizer.
     * @return The serving style as a ServingStyle enum.
     */
    ServingStyle getServingStyle() const;

    // Mutator for serving style
    /**
     * @brief Sets the serving style of the appetizer.
     * @param serving_style The new serving style as a ServingStyle enum.
     */
    void setServingStyle(ServingStyle serving_style);

    // Accessor for spiciness level
    /**
     * @brief Gets the spiciness level of the appetizer.
     * @return The spiciness level.
     */
    int getSpicinessLevel() const;

    // Mutator for spiciness level
    /**
     * @brief Sets the spiciness level of the appetizer.
     * @param spiciness_level The new spiciness level.
     */
    void setSpicinessLevel(int spiciness_level);

    // Accessor for vegetarian status
    /**
     * @brief Checks if the appetizer is vegetarian.
     * @return True if the appetizer is vegetarian, false otherwise.
     */
    bool isVegetarian() const;

    // Mutator for vegetarian status
    /**
     * @brief Sets the vegetarian status of the appetizer.
     * @param vegetarian The new vegetarian status.
     */
    void setVegetarian(bool vegetarian);

private:
    ServingStyle serving_style_; ///< The serving style of the appetizer.
    int spiciness_level_; ///< The spiciness level of the appetizer.
    bool vegetarian_; ///< The vegetarian status of the appetizer.
};

#endif // APPETIZER_HPP