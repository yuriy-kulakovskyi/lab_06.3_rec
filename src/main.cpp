#include <iostream>
#include <iomanip>
#include "../include/main.h"

using namespace std;

int main() {
    const int n = 5;
    int a[n] = { 1, 2, 3, 4, 5 };

    for (int i = 0; i < n; i++) {
        cout << setw(3) << a[i];
    }

    cout << endl << "Sum of odd numbers is: " << Sum(a, n, 0) << endl;

    return 0;
}