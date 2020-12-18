//
// Created by cloud on 18.12.2020.
//

#ifndef VM_4_IFUNCTION_H
#define VM_4_IFUNCTION_H

class IFunction {
public:
    virtual double calculate(double x) = 0;
    virtual double calculatePhi(double x) = 0;
    virtual double df(double x) = 0;
    virtual double d2f(double x) = 0;
};

#endif //VM_4_IFUNCTION_H
