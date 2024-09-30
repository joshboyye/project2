/**
 * @file Dessert.hpp
 * @brief This file contains the declaration of the Dessert class, which represents a dessert dish in a virtual bistro simulation.
 * 
 * The Dessert class includes attributes such as flavor profile, sweetness level, and nut content.
 * 
 * @date 10/30/2024
 * @author Joshua Wang
 */

#ifndef DESSERT_HPP
#define DESSERT_HPP

#include "Dish.hpp"

class Dessert : public Dish {
public:
    // Enum for different flavor profiles of desserts
    enum class FlavorProfile { SWEET, BITTER, SOUR, SALTY, UMAMI };

    // Default constructor
    Dessert();

    // Parameterized constructor
    Dessert(const std::string& name, 
            const std::vector<std::string>& ingredients, 
            int prep_time, 
            double price, 
            CuisineType cuisine_type, 
            FlavorProfile flavor_profile, 
            int sweetness_level, 
            bool contains_nuts);

    // Accessor for flavor profile
    /**
     * @brief Gets the flavor profile of the dessert.
     * @return The flavor profile as a FlavorProfile enum.
     */
    FlavorProfile getFlavorProfile() const;

    // Mutator for flavor profile
    /**
     * @brief Sets the flavor profile of the dessert.
     * @param flavor_profile The new flavor profile as a FlavorProfile enum.
     */
    void setFlavorProfile(FlavorProfile flavor_profile);

    // Accessor for sweetness level
    /**
     * @brief Gets the sweetness level of the dessert.
     * @return The sweetness level.
     */
    int getSweetnessLevel() const;

    // Mutator for sweetness level
    /**
     * @brief Sets the sweetness level of the dessert.
     * @param sweetness_level The new sweetness level.
     */
    void setSweetnessLevel(int sweetness_level);

    // Accessor for nut content
    /**
     * @brief Checks if the dessert contains nuts.
     * @return True if the dessert contains nuts, false otherwise.
     */
    bool containsNuts() const;

    // Mutator for nut content
    /**
     * @brief Sets the nut content of the dessert.
     * @param contains_nuts The new nut content status.
     */
    void setContainsNuts(bool contains_nuts);

private:
    FlavorProfile flavor_profile_; ///< The flavor profile of the dessert.
    int sweetness_level_; ///< The sweetness level of the dessert.
    bool contains_nuts_; ///< The nut content status of the dessert.
};

#endif // DESSERT_HPP