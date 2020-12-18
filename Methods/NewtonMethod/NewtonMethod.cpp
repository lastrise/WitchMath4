//
// Created by cloud on 18.12.2020.
//

#include "NewtonMethod.h"

NewtonMethod::NewtonMethod(double startX, double endX, double precision, IFunction *function) {
    this->startX = startX;
    this->endX = endX;
    this->precision = precision;
    this->function = function;
    if (!isThereRoot(startX, endX))
        throw std::invalid_argument("На данном промежутке не существует корня!");
}

bool NewtonMethod::isThereRoot(double left, double right) {
    return function->calculate(left) * function->calculate(right) <= 0;
}

double NewtonMethod::solve() {
    double start;
    double approximation;

    if (function->calculate(startX) * function->d2f(startX) > 0) start = startX;
    else start = endX;
    approximation = start - function->calculate(start) / function->df(start);

    while (fabs(start - approximation) > precision) {
        start = approximation;
        approximation = start - function->calculate(start) / function->df(start);
    }

    return approximation;

}
