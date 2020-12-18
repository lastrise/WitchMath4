//
// Created by cloud on 18.12.2020.
//

#include "UserHelper.h"

double UserHelper::askLeftBorder() {
    double border;
    std::cout << "Введите левую границу: ";
    std::cin >> border;
    return border;
}

double UserHelper::askRightBorder() {
    double border;
    std::cout << "Введите правую границу: ";
    std::cin >> border;
    return border;
}

double UserHelper::askBringConstant() {
    double constant;
    std::cout << "Введите константу a [x^5 + x + a]: ";
    std::cin >> constant;
    return constant;
}

double UserHelper::askPrecision() {
    double precision;
    std::cout << "Введите точность: ";
    std::cin >> precision;
    return precision;
}
