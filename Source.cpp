// Patrick Callahan
// Cis 1202
// 12/05/2021


#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

using namespace std;

template <typename T>



T half(T x) {

    T half;

    half = x / 2;

    if (*typeid(x).name() == 'i') {

        if (half * 2 != x) {
            half++;
        }

    }

    return half;

};

