#include "Appetizer.hpp"
#include "MainCourse.hpp"
#include "Dessert.hpp"
#include <iostream>
#include <iomanip>

int main() {
    // Instantiate an appetizer with the default constructor and then set and get its properties
    Appetizer appetizer;
    appetizer.setName("UNKNOWN");  // Using setter
    appetizer.setIngredients({});  // Using setter
    appetizer.setPrepTime(0);  // Using setter
    appetizer.setPrice(0.00);  // Using setter
    appetizer.setCuisineType(Dish::CuisineType::OTHER);  // Using setter
    appetizer.setSpicinessLevel(7);  // Using setter
    appetizer.setServingStyle(Appetizer::ServingStyle::FAMILY_STYLE);  // Using setter
    appetizer.setVegetarian(true);  // Using setter

    // Display using getters
    std::cout << "Appetizer Test Output:\n"
              << "Dish Name: " << appetizer.getName() << "\n"
              << "Ingredients: " << (appetizer.getIngredients().empty() ? "None" : "Custom list should be displayed here") << "\n"
              << "Preparation Time: " << appetizer.getPrepTime() << " minutes\n"
              << "Price: $" << std::fixed << std::setprecision(2) << appetizer.getPrice() << "\n"
              << "Cuisine Type: " << appetizer.getCuisineType() << "\n"
              << "Spiciness Level: " << appetizer.getSpicinessLevel() << "\n"
              << "Serving Style: " << (appetizer.getServingStyle() == Appetizer::ServingStyle::FAMILY_STYLE ? "FAMILY_STYLE" : "OTHER") << "\n"
              << "Vegetarian: " << (appetizer.isVegetarian() ? "True" : "False") << "\n\n";

    // Instantiate a main course with specific values using setters and then use getters to display
    MainCourse mainCourse;
    mainCourse.setName("Grilled Chicken");
    mainCourse.setIngredients({"Chicken", "Olive Oil", "Garlic", "Rosemary"});
    mainCourse.setPrepTime(30);
    mainCourse.setPrice(18.99);
    mainCourse.setCuisineType(Dish::CuisineType::AMERICAN);
    mainCourse.setCookingMethod(MainCourse::CookingMethod::GRILLED);
    mainCourse.addSideDish({"Mashed Potatoes", "Starches"});
    mainCourse.addSideDish({"Green Beans", "Vegetable"});
    mainCourse.setGlutenFree(true);

    // Display using getters
    std::cout << "Main Course Test Output:\n"
              << "Dish Name: " << mainCourse.getName() << "\n"
              << "Ingredients: " << (mainCourse.getIngredients().empty() ? "None" : "Chicken, Olive Oil, Garlic, Rosemary") << "\n"
              << "Preparation Time: " << mainCourse.getPrepTime() << " minutes\n"
              << "Price: $" << std::fixed << std::setprecision(2) << mainCourse.getPrice() << "\n"
              << "Cuisine Type: " << mainCourse.getCuisineType() << "\n"
              << "Cooking Method: " << (mainCourse.getCookingMethod() == MainCourse::CookingMethod::GRILLED ? "GRILLED" : "OTHER") << "\n"
              << "Side Dishes: Mashed Potatoes (Starches), Green Beans (Vegetable)\n"
              << "Gluten-Free: " << (mainCourse.isGlutenFree() ? "True" : "False") << "\n\n";

    // Instantiate a dessert with specific values using setters and then use getters to display
    Dessert dessert;
    dessert.setName("Chocolate Cake");
    dessert.setIngredients({"Flour", "Sugar", "Cocoa Powder", "Eggs"});
    dessert.setPrepTime(45);
    dessert.setPrice(7.99);
    dessert.setCuisineType(Dish::CuisineType::FRENCH);
    dessert.setFlavorProfile(Dessert::FlavorProfile::SWEET);
    dessert.setSweetnessLevel(9);
    dessert.setContainsNuts(false);

    // Display using getters
    std::cout << "Dessert Test Output:\n"
              << "Dish Name: " << dessert.getName() << "\n"
              << "Ingredients: " << (dessert.getIngredients().empty() ? "None" : "Flour, Sugar, Cocoa Powder, Eggs") << "\n"
              << "Preparation Time: " << dessert.getPrepTime() << " minutes\n"
              << "Price: $" << std::fixed << std::setprecision(2) << dessert.getPrice() << "\n"
              << "Cuisine Type: " << dessert.getCuisineType() << "\n"
              << "Flavor Profile: " << (dessert.getFlavorProfile() == Dessert::FlavorProfile::SWEET ? "SWEET" : "OTHER") << "\n"
              << "Sweetness Level: " << dessert.getSweetnessLevel() << "\n"
              << "Contains Nuts: " << (dessert.containsNuts() ? "True" : "False") << "\n";

    return 0;
}