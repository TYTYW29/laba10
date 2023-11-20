#include <iostream>
#include <cmath>

int main() {
    system("chcp 65001");

//    std::cout << "Введіть значення кута a в градусах: ";
    double a;
//    std::cin >> a ;
    double z1;
    double z2;
    double answ_1;
    double answ;
    double s = 0;
    double sin= s;
    double c;
    double cos = c;


//    double result1 = 1 - 1/4 * std::pow(std::sin(2 * a), 2) + 3 * std::cos(a);
//    double result2 = std::pow(std::sin(a), 2) + std::pow(std::sin(4 * a), 2);
    answ = 1 - 1/4 * pow(s , 2) * 2 * a + 3 * c * a;
    answ_1 = pow(c , 2) * a + pow(c , 4) * a;
    std::cout << "Значення виразу z1: " << answ << std::endl;
    std::cout << "Значення виразу z2: " << answ_1 << std::endl;
    return 0;
}
// #include <iostream>
// #include <cmath>
// #include <math.h>
//
//int main() {
//
//    double test_cases [] = {0,  M_PI/2,  M_PI / 4, M_PI};
//    int num_test_cases = sizeof(test_cases) / sizeof(test_cases[0]);
//
//    for (int i = 0; i < num_test_cases; ++i) {
//        double alpha = test_cases[i];
//
//        double result1 = 1 - 1/4 * std::pow(std::sin(2 * alpha), 2) + 3 * std::cos(alpha);
//        double result2 = std::pow(std::sin(alpha), 2) + std::pow(std::sin(4 * alpha), 2);
//
//        std::cout << "alpha = " << alpha << std::endl;
//        std::cout << "Formula 1 result: " << result1 << std::endl;
//        std::cout << "Formula 2 result: " << result2 << std::endl;
//        std::cout << "---" << std::endl;
//    }
//
//    return 0;
//}

