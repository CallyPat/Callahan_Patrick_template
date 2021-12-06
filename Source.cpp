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


int main() {
    double a = 7.0;

    float b = 5.0f;

    int c = 3;

    cout << "Half values of : \n";

    cout << endl;

    cout << "\t" << a << " : " << half(a) << "\n";

    cout << "\t" << b << " : " << half(b) << "\n";

    cout << "\t" << c << " : " << half(c) << "\n";

    system("pause");
    return 0;

}

