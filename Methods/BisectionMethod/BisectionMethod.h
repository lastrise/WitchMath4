//
// Created by cloud on 18.12.2020.
//

#ifndef VM_4_BISECTIONMETHOD_H
#define VM_4_BISECTIONMETHOD_H

#include "../../Functions/IFunction.h"
#include "../IMethod.h"
#include "stdexcept"

class BisectionMethod : public IMethod {
    double startX;
    double endX;
    double precision;
    IFunction* function;
    bool isThereRoot(double left, double right);

public:
    BisectionMethod(double startX, double endX, double precision, IFunction* function);
    double solve() override;
};


#endif //VM_4_BISECTIONMETHOD_H
