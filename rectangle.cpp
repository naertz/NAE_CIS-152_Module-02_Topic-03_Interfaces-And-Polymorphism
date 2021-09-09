// =========================
// Name    : Rectangle
// Author  : Noah Allan Ertz
// Created : 09/08/2021
// =========================

#include "rectangle.h"

#include <sstream>

// Constructor(s) =================================
// Main
Rectangle::Rectangle(double length, double width) {
    this->length = length;
    this->width = width;
}
// ================================================

// Mutator(s) ============================
// Length
void Rectangle::setLength(double length) {
    this->length = length;
}

// Width
void Rectangle::setWidth(double width) {
    this->width = width;
}
// =======================================

// Accessor(s) ======================
// Length
double Rectangle::getLength() const {
    return length;
}

// Width
double Rectangle::getWidth() const {
    return width;
}
// ==================================

// Function(s) ===================================================================================
// Class String Representation
std::string Rectangle::str() const {
    std::ostringstream oSS;

    oSS << "Rectangle [length=" << this->length << ", width=" << this->width << "]" << std::flush;

    std::string objectStringRepresentation = oSS.str();

    return objectStringRepresentation;
}

// Perimeter Calculator
double Rectangle::perimeter() const {
    return (2 * this->length) + (2 * this->width);
}

// Area Calculator
double Rectangle::area() const {
    return this->length * this->width;
}
// ===============================================================================================
