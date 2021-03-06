// =========================
// Name    : Measurements
// Author  : Noah Allan Ertz
// Created : 09/08/2021
// =========================

#ifndef MEASUREMENTS_H
#define MEASUREMENTS_H

class Measurements {
    public:
        virtual double perimeter() const = 0; // Pure Virtual Perimeter Calculator
        virtual double area() const = 0;      // Pure Virtual Area Calculator
};

#endif // MEASUREMENTS_H
