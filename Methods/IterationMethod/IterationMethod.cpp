//
// Created by cloud on 18.12.2020.
//

#include "IterationMethod.h"

IterationMethod::IterationMethod(double startX, double precision, IFunction* function)
    : startX(startX), precision(precision), function(function) {}

double IterationMethod::solve() {
    double currentX = startX;
    double first = function->calculatePhi(currentX);
    double second = function->calculatePhi(first);
    while (abs(first - second) >= precision) {
        first = second;
        second = function->calculatePhi(first);
    }

    return second;
}
