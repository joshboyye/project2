/**
 * @file Dessert.cpp
 * @brief This file contains the implementation of the Dessert class, which represents a dessert dish in a virtual bistro simulation.
 * 
 * The Dessert class includes attributes such as flavor profile, sweetness level, and nut content.
 * 
 * @date 10/30/2024
 * @author Joshua Wang
 */

#include "Dessert.hpp"

// Default constructor
Dessert::Dessert() 
    : Dish(), 
      flavor_profile_(FlavorProfile::SWEET), 
      sweetness_level_(0), 
      contains_nuts_(false) {}

// Parameterized constructor
Dessert::Dessert(const std::string& name, 
                 const std::vector<std::string>& ingredients, 
                 int prep_time, 
                 double price, 
                 CuisineType cuisine_type, 
                 FlavorProfile flavor_profile, 
                 int sweetness_level, 
                 bool contains_nuts)
    : Dish(name, ingredients, prep_time, price, cuisine_type), 
      flavor_profile_(flavor_profile), 
      sweetness_level_(sweetness_level), 
      contains_nuts_(contains_nuts) {}

// Accessor for flavor profile
Dessert::FlavorProfile Dessert::getFlavorProfile() const { 
    return flavor_profile_; 
}

// Mutator for flavor profile
void Dessert::setFlavorProfile(FlavorProfile flavor_profile) { 
    flavor_profile_ = flavor_profile; 
}

// Accessor for sweetness level
int Dessert::getSweetnessLevel() const { 
    return sweetness_level_; 
}

// Mutator for sweetness level
void Dessert::setSweetnessLevel(int sweetness_level) { 
    sweetness_level_ = sweetness_level; 
}

// Accessor for nut content
bool Dessert::containsNuts() const { 
    return contains_nuts_; 
}

// Mutator for nut content
void Dessert::setContainsNuts(bool contains_nuts) { 
    contains_nuts_ = contains_nuts; 
}