//
// Created by cloud on 18.12.2020.
//

#include "BringFunction.h"

BringFunction::BringFunction(double a) : a(a) {}

double BringFunction::calculate(double x) {
    return x * x * x * x * x + x + a;
}

double BringFunction::calculatePhi(double x) {
    return -(x * x * x * x * x + a);
}

double BringFunction::df(double x) {
    return 5 * x * x * x * x + 1;
}

double BringFunction::d2f(double x) {
    return 20 * x * x * x;
}
