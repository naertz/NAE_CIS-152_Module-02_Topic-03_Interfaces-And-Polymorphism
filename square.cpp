// =========================
// Name    : Square
// Author  : Noah Allan Ertz
// Created : 09/08/2021
// =========================

#include "square.h"

#include <cmath>
#include <sstream>

// Constructor(s) ===========
// Main
Square::Square(double side) {
    this->side = side;
}
// ==========================

// Mutator(s) =====================
// Side
void Square::setSide(double side) {
    this->side = side;
}
// ================================

// Accessor(s) =================
// Side
double Square::getSide() const {
    return side;
}
// =============================

// Function(s) ===============================================
// Class String Representation
std::string Square::str() const {
    std::ostringstream oSS;

    oSS << "Square [side=" << this->side << "]" << std::flush;

    std::string objectStringRepresentation = oSS.str();

    return objectStringRepresentation;
}

// Perimeter Calculator
double Square::perimeter() const {
    return 4 * this->side;
}

// Area Calculator
double Square::area() const {
    return std::pow(this->side, 2);
}
// ===========================================================
