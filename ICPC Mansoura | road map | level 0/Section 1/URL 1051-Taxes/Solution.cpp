#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    double salary , taxes = 0;
    cin >> salary ;
    if ( salary <= 2000.00)
    cout << "Isento" << endl ;
    else {
         if (salary <= 3000.00) {
            taxes = (salary - 2000.00) * 0.08;
        } else if (salary <= 4500.00) {
            taxes = 1000.00 * 0.08 + (salary - 3000.00) * 0.18;
        } else {
            taxes = 1000.00 * 0.08 + 1500.00 * 0.18 + (salary - 4500.00) * 0.28;
        }
        cout << "R$ " << fixed << setprecision(2) << taxes << endl;
    }
    return 0;
}