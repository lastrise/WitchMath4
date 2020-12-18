//
// Created by cloud on 18.12.2020.
//

#ifndef VM_4_ITERATIONMETHOD_H
#define VM_4_ITERATIONMETHOD_H

#include "../IMethod.h"
#include "../../Functions/IFunction.h"
#include "cmath"
#include "iostream"

class IterationMethod : public IMethod {
    double precision;
    double startX;
    IFunction* function;

public:
    double solve() override;

    IterationMethod(double startX, double precision, IFunction* function);
};


#endif //VM_4_ITERATIONMETHOD_H
