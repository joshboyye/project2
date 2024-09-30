/**
 * @file Appetizer.cpp
 * @brief This file contains the implementation of the Appetizer class, which represents an appetizer dish in a virtual bistro simulation.
 * 
 * The Appetizer class includes attributes such as serving style, spiciness level, and vegetarian status.
 * 
 * @date 10/30/2024
 * @author Joshua Wang
 */

#include "Appetizer.hpp"

// Default constructor
Appetizer::Appetizer() 
    : Dish(), 
      serving_style_(ServingStyle::PLATED), 
      spiciness_level_(0), 
      vegetarian_(false) {}

// Parameterized constructor
Appetizer::Appetizer(const std::string& name, 
                     const std::vector<std::string>& ingredients, 
                     int prep_time, 
                     double price, 
                     CuisineType cuisine_type, 
                     ServingStyle serving_style, 
                     int spiciness_level, 
                     bool vegetarian)
    : Dish(name, ingredients, prep_time, price, cuisine_type), 
      serving_style_(serving_style), 
      spiciness_level_(spiciness_level), 
      vegetarian_(vegetarian) {}

// Accessor for serving style
Appetizer::ServingStyle Appetizer::getServingStyle() const { 
    return serving_style_; 
}

// Mutator for serving style
void Appetizer::setServingStyle(ServingStyle serving_style) { 
    serving_style_ = serving_style; 
}

// Accessor for spiciness level
int Appetizer::getSpicinessLevel() const { 
    return spiciness_level_; 
}

// Mutator for spiciness level
void Appetizer::setSpicinessLevel(int spiciness_level) { 
    spiciness_level_ = spiciness_level; 
}

// Accessor for vegetarian status
bool Appetizer::isVegetarian() const { 
    return vegetarian_; 
}

// Mutator for vegetarian status
void Appetizer::setVegetarian(bool vegetarian) { 
    vegetarian_ = vegetarian; 
}