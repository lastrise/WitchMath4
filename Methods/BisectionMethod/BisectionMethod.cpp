//
// Created by cloud on 18.12.2020.
//

#include "BisectionMethod.h"

bool BisectionMethod::isThereRoot(double left, double right) {
    return function->calculate(left) * function->calculate(right) <= 0;
}

BisectionMethod::BisectionMethod(double startX, double endX, double precision, IFunction *function) {
    this->startX = startX;
    this->endX = endX;
    this->precision = precision;
    this->function = function;

    if (!isThereRoot(startX, endX))
        throw std::invalid_argument("В данном промежутке не существует корня");
}

double BisectionMethod::solve() {
    double left = startX;
    double right = endX;
    double middle = left + (right - left) / 2;

    while (right - left > precision) {
        if (isThereRoot(left, middle)) right = middle;
        else left = middle;
        middle = left + (right - left) / 2;
    }
    return middle;
}
