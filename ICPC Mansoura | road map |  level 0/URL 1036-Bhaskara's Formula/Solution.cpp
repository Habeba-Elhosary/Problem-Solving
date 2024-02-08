#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    double A , B , C ;
    cin >> A >> B >> C ;
    if (A==0 || (pow(B,2)-4*A*C) < 0 ) cout << "Impossivel calcular" <<endl;
    else {
        cout << "R1 = " << fixed << setprecision(5) << (-B + sqrt(pow(B,2)-4*A*C))/(2*A) << endl ;
        cout << "R2 = " << fixed << setprecision(5) << (-B - sqrt(pow(B,2)-4*A*C))/(2*A) << endl ;
    }
    return 0;
}