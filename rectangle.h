// =========================
// Name    : Rectangle
// Author  : Noah Allan Ertz
// Created : 09/08/2021
// =========================

#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "measurements.h"

#include <string>

class Rectangle : private Measurements {
    public:
        Rectangle(double length, double width); // Main Constructor
        void setLength(double length);          // Length Mutator
        void setWidth(double width);            // Width Mutator
        double getLength() const;               // Length Accessor
        double getWidth() const;                // Width Accessor
        std::string str() const;                // Class String Representation
        double perimeter() const;               // Perimeter Calculator
        double area() const;                    // Area Calculator
    private:
        double length;                          // Length
        double width;                           // Width
};

#endif // RECTANGLE_H
