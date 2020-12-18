//
// Created by cloud on 18.12.2020.
//

#include "BringFunction.h"

BringFunction::BringFunction(double a) : a(a) {}

double BringFunction::calculate(double x) {
    return x * x * x * x * x + x + a;
}
