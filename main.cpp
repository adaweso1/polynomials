#include <iostream>
#include "polynomials.hpp"

int main() {
    double values1[3] = {1.0, 2.0, 3.0};
    double values2[4] = {4.0, 7.0, 0.0, 5};
    polynomial pol1, pol2;
    pol1.level = 3;
    pol2.level = 4;
    pol1.values = values1;
    pol2.values = values2;
    polynomial pol3 = add(pol1, pol2);
    std::cout << get_level(pol3) << std::endl;
    for(int i = 0; i < get_level(pol3); i++) {
        if (i == 0) {
            cout << get_value(pol3, i);
        } else {
            cout << " + " << get_value(pol3, i) << "x^" << i;
        }
    }
    return 0;
}
