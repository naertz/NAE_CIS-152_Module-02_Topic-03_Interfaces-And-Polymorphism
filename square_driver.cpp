// =================================================================================================
// Name             : Square Driver
// Author           : Noah Allan Ertz
// Created          : 09/08/2021
// Course           : CIS 152 - Data Structures
// Version          : 1.0
// OS               : Windows 10
// IDE              : Qt 5.12.5
// Copyright        : This is my own original work based on specifications issued by our instructor.
// Description      : Prints Square objects, their manipulations, and their functions.
//                    Output: Square objects' information, manipulations, and functions.
// Academic Honesty : I attest that this is my original work. I have not used unauthorized source
//                    code, either modified or unmodified. I have not given other fellow students
//                    access to my program.
// =================================================================================================

#include "square_driver.h"

#include "square.h"

#include <iostream>
#include <sstream>
#include <string>

static std::string formatDouble(double doubleToFormat);                // O(1)

static void createObject(double side);                                 // O(1)
static void printCreateMainObject(double side);                        // O(1)

static void mutateObjectSide(double initialSide, double newSide);      // O(1)
static void printMutateObjectSide(double initialSide, double newSide); // O(1)

static void accessObjectPerimeter(double initialSide);                 // O(1)
static void printAccessObjectPerimeter(double initialSide);            // O(1)

static void accessObjectArea(double initialSide);                      // O(1)
static void printAccessObjectArea(double initialSide);                 // O(1)

void squareDriver() {
    printCreateMainObject(5.0);                       // O(1)
    std::cout << std::endl << std::endl << std::endl; // O(1)

    printMutateObjectSide(5.0, 4.0);                  // O(1)
    std::cout << std::endl << std::endl;              // O(1)

    printAccessObjectPerimeter(5.0);                  // O(1)
    std::cout << std::endl << std::endl;              // O(1)

    printAccessObjectArea(5.0);                       // O(1)
} // O(1) * 7 = O(1)

static std::string formatDouble(double doubleToFormat) {
    std::ostringstream oSS;                 // O(1)
    oSS.precision(2);                       // O(1)
    oSS.setf(std::ios::fixed);              // O(1)

    oSS << doubleToFormat << std::flush;    // O(1)

    std::string doubleToString = oSS.str(); // O(1)

    return doubleToString;                  // O(1)
} // O(1) * 6 = O(1)

static void createObject(double side) {
    // Create object with main constructor.
    Square mainSquare = Square(side);                                                                    // O(1)

    // Print object string representation.
    std::cout << "Main Square str(): " << mainSquare.str() << std::endl;                                 // O(1)

    // Print object accessors.
    std::cout << "Main Square getSide(): " << mainSquare.getSide() << std::endl;                         // O(1)

    // Print object formatted accessors.
    std::cout << "Main Square formatted getSide(): " << formatDouble(mainSquare.getSide()) << std::endl; // O(1)
} // O(1) * 4 = O(1)

static void printCreateMainObject(double side) {
    // Heading
    std::cout << "Main Constructor:" << std::endl; // O(1)
    // Event
    createObject(side);                            // O(1)
    // Newline
    std::cout << std::endl;                        // O(1)
} // O(1) * 3 = O(1)

static void mutateObjectSide(double initialSide, double newSide) {
    // Create object with main constructor.
    Square newSquare = Square(initialSide);                                                         // O(1)

    // Print object string representation.
    std::cout << "New Square str(): " << newSquare.str() << std::endl;                              // O(1)

    // Print mutator message for setting side length to newSide.
    std::cout << "Setting New Square side length to " << formatDouble(newSide) << "." << std::endl; // O(1)

    // Set side length to newSide.
    newSquare.setSide(newSide);                                                                     // O(1)

    // Print object string representation.
    std::cout << "New Square str(): " << newSquare.str() << std::endl;                              // O(1)
} // O(1) * 5 = O(1)

static void printMutateObjectSide(double initialSide, double newSide) {
    // Heading
    std::cout << "Square(" << formatDouble(initialSide) << " side length) set to " << formatDouble(newSide) << " side length:" << std::endl; // O(1)
    // Event
    mutateObjectSide(initialSide, newSide);                                                                                                  // O(1)
    // Newline
    std::cout << std::endl;                                                                                                                  // O(1)
} // O(1) * 3 = O(1)

static void accessObjectPerimeter(double initialSide) {
    // Create object with main constructor.
    Square newSquare = Square(initialSide);                                                                // O(1)

    // Print function message for calculating perimeter.
    std::cout << "New Square perimeter(): " << newSquare.perimeter() << std::endl;                         // O(1)

    // Print function message for formatted calculated perimeter.
    std::cout << "New Square formatted perimeter(): " << formatDouble(newSquare.perimeter()) << std::endl; // O(1)
} // O(1) * 3 = O(1)

static void printAccessObjectPerimeter(double initialSide) {
    // Heading
    std::cout << "Square(" << formatDouble(initialSide) << " side length) called to calculate perimeter:" << std::endl; // O(1)
    // Event
    accessObjectPerimeter(initialSide);                                                                                 // O(1)
    // Newline
    std::cout << std::endl;                                                                                             // O(1)
} // O(1) * 3 = O(1)

static void accessObjectArea(double initialSide) {
    // Create object with main constructor.
    Square newSquare = Square(initialSide);                                                      // O(1)

    // Print function message for calculating area.
    std::cout << "New Square area(): " << newSquare.area() << std::endl;                         // O(1)

    // Print function message for formatted calculated area.
    std::cout << "New Square formatted area(): " << formatDouble(newSquare.area()) << std::endl; // O(1)
} // O(1) * 3 = O(1)

static void printAccessObjectArea(double initialSide) {
    // Heading
    std::cout << "Square(" << formatDouble(initialSide) << " side length) called to calculate area:" << std::endl; // O(1)
    // Event
    accessObjectArea(initialSide);                                                                                 // O(1)
    // Newline
    std::cout << std::endl;                                                                                        // O(1)
} // O(1) * 3 = O(1)
