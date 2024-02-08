#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main ()
{
    int distance  ;
    double fuel ;
    cin >> distance >> fuel ;
    cout << fixed << setprecision(3) << distance/fuel << " km/l" << endl ;
  return 0;
}
