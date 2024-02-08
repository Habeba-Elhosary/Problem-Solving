#include <iostream>
#include <iomanip>
#include <algorithm>
#include <math.h>
using namespace std;

int main() {
    double sides[3];
    for (int i = 0; i < 3; i++)  cin >> sides[i];

    sort(sides, sides + 3, greater<double>());

    double A = sides[0];
    double B = sides[1];
    double C = sides[2];

    if (A >= B + C) {
        cout << "NAO FORMA TRIANGULO" << endl;
    } else {
        if (pow(A, 2) == pow(B, 2) + pow(C, 2)) {
            cout << "TRIANGULO RETANGULO" << endl;
        }
        if (pow(A, 2) > pow(B, 2) + pow(C, 2)) {
            cout << "TRIANGULO OBTUSANGULO" << endl;
        }
        if (pow(A, 2) < pow(B, 2) + pow(C, 2)) {
            cout << "TRIANGULO ACUTANGULO" << endl;
        }
        if (A == B && B == C) {
            cout << "TRIANGULO EQUILATERO" << endl;
        } else if (A == B || B == C || A == C) {
            cout << "TRIANGULO ISOSCELES" << endl;
        }
    }
    return 0;
}