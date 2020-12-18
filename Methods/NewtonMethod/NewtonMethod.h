//
// Created by cloud on 18.12.2020.
//

#ifndef VM_4_NEWTONMETHOD_H
#define VM_4_NEWTONMETHOD_H

#include "../IMethod.h"
#include "../../Functions/IFunction.h"
#include "stdexcept"

class NewtonMethod : public IMethod {
    double startX;
    double endX;
    double precision;
    IFunction* function;
    bool isThereRoot(double left, double right);

public:
    NewtonMethod(double startX, double endX, double precision, IFunction* function);
    double solve() override;
};


#endif //VM_4_NEWTONMETHOD_H
