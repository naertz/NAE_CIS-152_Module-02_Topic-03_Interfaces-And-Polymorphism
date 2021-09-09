// =========================
// Name    : Square
// Author  : Noah Allan Ertz
// Created : 09/08/2021
// =========================

#ifndef SQUARE_H
#define SQUARE_H

#include "measurements.h"

#include <string>

class Square : private Measurements {
    public:
        Square(double side);       // Main Constructor
        void setSide(double side); // Side Mutator
        double getSide() const;    // Side Accessor
        std::string str() const;   // Class String Representation
        double perimeter() const;  // Perimeter Calculator
        double area() const;       // Area Calculator
    private:
        double side;               // Side
};

#endif // SQUARE_H
