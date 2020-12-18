//
// Created by cloud on 18.12.2020.
//

#ifndef VM_4_BRINGFUNCTION_H
#define VM_4_BRINGFUNCTION_H

#include "../IFunction.h"

class BringFunction : public IFunction {
    double a;
public:
    explicit BringFunction(double a);
    double calculate(double x) override;
    double calculatePhi(double x) override;
    double df(double x) override;
    double d2f(double x) override;
};


#endif //VM_4_BRINGFUNCTION_H
