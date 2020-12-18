#include <iostream>

#include "Functions/BringFunction/BringFunction.h"
#include "Methods/BisectionMethod/BisectionMethod.h"


int main() {
    auto bring = new BringFunction(2);
    auto method = new BisectionMethod(-5, 5, 1e-15, bring);
    std::cout << method->solve() << std::endl;
    std::cout << bring->calculate(method->solve()) << std::endl;
    return 0;
}
