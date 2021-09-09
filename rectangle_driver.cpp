// =================================================================================================
// Name             : Rectangle Driver
// Author           : Noah Allan Ertz
// Created          : 09/08/2021
// Course           : CIS 152 - Data Structures
// Version          : 1.0
// OS               : Windows 10
// IDE              : Qt 5.12.5
// Copyright        : This is my own original work based on specifications issued by our instructor.
// Description      : Prints Rectangle objects, their manipulations, and their functions.
//                    Output: Rectangle objects' information, manipulations, and functions.
// Academic Honesty : I attest that this is my original work. I have not used unauthorized source
//                    code, either modified or unmodified. I have not given other fellow students
//                    access to my program.
// =================================================================================================

#include "rectangle_driver.h"

#include "rectangle.h"

#include <iostream>
#include <sstream>
#include <string>

static std::string formatDouble(double doubleToFormat);                                           // O(1)

static void createObject(double length, double width);                                            // O(1)
static void printCreateMainObject(double length, double width);                                   // O(1)

static void mutateObjectLength(double initialLength, double initialWidth, double newLength);      // O(1)
static void printMutateObjectLength(double initialLength, double initialWidth, double newLength); // O(1)

static void mutateObjectWidth(double initialLength, double initialWidth, double newWidth);        // O(1)
static void printMutateObjectWidth(double initialLength, double initialWidth, double newWidth);   // O(1)

static void accessObjectPerimeter(double initialLength, double initialWidth);                     // O(1)
static void printAccessObjectPerimeter(double initialLength, double initialWidth);                // O(1)

static void accessObjectArea(double initialLength, double initialWidth);                          // O(1)
static void printAccessObjectArea(double initialLength, double initialWidth);                     // O(1)

void rectangleDriver() {
    printCreateMainObject(5.0, 4.0);                  // O(1)
    std::cout << std::endl << std::endl << std::endl; // O(1)

    printMutateObjectLength(5.0, 4.0, 3.0);           // O(1)
    std::cout << std::endl << std::endl;              // O(1)

    printMutateObjectWidth(5.0, 4.0, 3.0);            // O(1)
    std::cout << std::endl << std::endl << std::endl; // O(1)

    printAccessObjectPerimeter(5.0, 4.0);             // O(1)
    std::cout << std::endl << std::endl;              // O(1)

    printAccessObjectArea(5.0, 4.0);                  // O(1)
} // O(1) * 9 = O(1)

static std::string formatDouble(double doubleToFormat) {
    std::ostringstream oSS;                 // O(1)
    oSS.precision(2);                       // O(1)
    oSS.setf(std::ios::fixed);              // O(1)

    oSS << doubleToFormat << std::flush;    // O(1)

    std::string doubleToString = oSS.str(); // O(1)

    return doubleToString;                  // O(1)
} // O(1) * 6 = O(1)

static void createObject(double length, double width) {
    // Create object with main constructor.
    Rectangle mainRectangle = Rectangle(length, width);                                                            // O(1)

    // Print object string representation.
    std::cout << "Main Rectangle str(): " << mainRectangle.str() << std::endl;                                     // O(1)

    // Print object accessors.
    std::cout << "Main Rectangle getLength(): " << mainRectangle.getLength() << std::endl;                         // O(1)
    std::cout << "Main Rectangle getWidth(): " << mainRectangle.getWidth() << std::endl;                           // O(1)

    // Print object formatted accessors.
    std::cout << "Main Rectangle formatted getLength(): " << formatDouble(mainRectangle.getLength()) << std::endl; // O(1)
    std::cout << "Main Rectangle formatted getWidth(): " << formatDouble(mainRectangle.getWidth()) << std::endl;   // O(1)
} // O(1) * 6 = O(1)

static void printCreateMainObject(double length, double width) {
    // Heading
    std::cout << "Main Constructor:" << std::endl; // O(1)
    // Event
    createObject(length, width);                   // O(1)
    // Newline
    std::cout << std::endl;                        // O(1)
} // O(1) * 3 = O(1)

static void mutateObjectLength(double initialLength, double initialWidth, double newLength) {
    // Create object with main constructor.
    Rectangle newRectangle = Rectangle(initialLength, initialWidth);                                // O(1)

    // Print object string representation.
    std::cout << "New Rectangle str(): " << newRectangle.str() << std::endl;                        // O(1)

    // Print mutator message for setting length to newLength.
    std::cout << "Setting New Rectangle length to " << formatDouble(newLength) << "." << std::endl; // O(1)

    // Set length to newLength.
    newRectangle.setLength(newLength);                                                              // O(1)

    // Print object string representation.
    std::cout << "New Rectangle str(): " << newRectangle.str() << std::endl;                        // O(1)
} // O(1) * 5 = O(1)

static void printMutateObjectLength(double initialLength, double initialWidth, double newLength) {
    // Heading
    std::cout << "Rectangle(" << formatDouble(initialLength) << " length, " << formatDouble(initialWidth) << " width) set to " << formatDouble(newLength) << " length:" << std::endl; // O(1)
    // Event
    mutateObjectLength(initialLength, initialWidth, newLength);                                                                                                                       // O(1)
    // Newline
    std::cout << std::endl;                                                                                                                                                           // O(1)
} // O(1) * 3 = O(1)

static void mutateObjectWidth(double initialLength, double initialWidth, double newWidth) {
    // Create object with main constructor.
    Rectangle newRectangle = Rectangle(initialLength, initialWidth);                              // O(1)

    // Print object string representation.
    std::cout << "New Rectangle str(): " << newRectangle.str() << std::endl;                      // O(1)

    // Print mutator message for setting width to newWidth.
    std::cout << "Setting New Rectangle width to " << formatDouble(newWidth) << "." << std::endl; // O(1)

    // Set length to newLength.
    newRectangle.setWidth(newWidth);                                                              // O(1)

    // Print object string representation.
    std::cout << "New Rectangle str(): " << newRectangle.str() << std::endl;                      // O(1)
} // O(1) * 5 = O(1)

static void printMutateObjectWidth(double initialLength, double initialWidth, double newWidth) {
    // Heading
    std::cout << "Rectangle(" << formatDouble(initialLength) << " length, " << formatDouble(initialWidth) << " width) set to " << formatDouble(newWidth) << " width:" << std::endl; // O(1)
    // Event
    mutateObjectWidth(initialLength, initialWidth, newWidth);                                                                                                                       // O(1)
    // Newline
    std::cout << std::endl;                                                                                                                                                         // O(1)
} // O(1) * 3 = O(1)

static void accessObjectPerimeter(double initialLength, double initialWidth) {
    // Create object with main constructor.
    Rectangle newRectangle = Rectangle(initialLength, initialWidth);                                             // O(1)

    // Print function message for calculating perimeter.
    std::cout << "New Rectangle perimeter(): " << newRectangle.perimeter() << std::endl;                         // O(1)

    // Print function message for formatted calculated perimeter.
    std::cout << "New Rectangle formatted perimeter(): " << formatDouble(newRectangle.perimeter()) << std::endl; // O(1)
} // O(1) * 3 = O(1)

static void printAccessObjectPerimeter(double initialLength, double initialWidth) {
    // Heading
    std::cout << "Rectangle(" << formatDouble(initialLength) << " length, " << formatDouble(initialWidth) << " width) called to calculate perimeter:" << std::endl; // O(1)
    // Event
    accessObjectPerimeter(initialLength, initialWidth);                                                                                                             // O(1)
    // Newline
    std::cout << std::endl;                                                                                                                                         // O(1)
} // O(1) * 3 = O(1)

static void accessObjectArea(double initialLength, double initialWidth) {
    // Create object with main constructor.
    Rectangle newRectangle = Rectangle(initialLength, initialWidth);                                   // O(1)

    // Print function message for calculating area.
    std::cout << "New Rectangle area(): " << newRectangle.area() << std::endl;                         // O(1)

    // Print function message for formatted calculated area.
    std::cout << "New Rectangle formatted area(): " << formatDouble(newRectangle.area()) << std::endl; // O(1)
} // O(1) * 3 = O(1)

static void printAccessObjectArea(double initialLength, double initialWidth) {
    // Heading
    std::cout << "Rectangle(" << formatDouble(initialLength) << " length, " << formatDouble(initialWidth) << " width) called to calculate area:" << std::endl; // O(1)
    // Event
    accessObjectArea(initialLength, initialWidth);                                                                                                             // O(1)
    // Newline
    std::cout << std::endl;                                                                                                                                    // O(1)
} // O(1) * 3 = O(1)
