#include <iostream>

#include "Functions/BringFunction/BringFunction.h"
#include "Methods/BisectionMethod/BisectionMethod.h"
#include "Methods/NewtonMethod/NewtonMethod.h"
#include "iomanip"


int main() {
    auto bring = new BringFunction(5);
    auto bisection = new BisectionMethod(-10, 10, 1e-15, bring);
    auto newton = new NewtonMethod(-10, 10, 1e-15, bring);
    std::cout << "Метод бисекций: " << std::setprecision(25) << bisection->solve() << std::endl;
    std::cout << "Метод Ньютона: " << std::setprecision(25) << newton->solve() << std::endl;
    std::cout << "Образ результата метода бисекций: " << std::setprecision(25) << bring->calculate(bisection->solve()) << std::endl;
    std::cout << "Образ результата метода Ньютона: " << std::setprecision(25) << bring->calculate(newton->solve()) << std::endl;
    return 0;
}
