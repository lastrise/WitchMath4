#include <iostream>

#include "Functions/BringFunction/BringFunction.h"
#include "Methods/BisectionMethod/BisectionMethod.h"
#include "Methods/NewtonMethod/NewtonMethod.h"
#include "UserHelper/UserHelper.h"
#include "iomanip"


int main() {
    double leftBorder = UserHelper::askLeftBorder();
    double rightBorder = UserHelper::askRightBorder();
    double constant = UserHelper::askBringConstant();
    double precision = UserHelper::askPrecision();

    std::cout << std::endl;

    auto bring = new BringFunction(constant);
    auto bisection = new BisectionMethod(leftBorder, rightBorder, precision, bring);
    auto newton = new NewtonMethod(leftBorder, rightBorder, precision, bring);
    std::cout << "Метод бисекций: " << std::setprecision(25) << bisection->solve() << std::endl;
    std::cout << "Метод Ньютона: " << std::setprecision(25) << newton->solve() << std::endl;
    std::cout << "Образ результата метода бисекций: " << std::setprecision(25) << bring->calculate(bisection->solve()) << std::endl;
    std::cout << "Образ результата метода Ньютона: " << std::setprecision(25) << bring->calculate(newton->solve()) << std::endl;
    return 0;
}
