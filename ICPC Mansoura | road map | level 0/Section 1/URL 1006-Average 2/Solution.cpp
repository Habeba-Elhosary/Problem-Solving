#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
  double A, B, C ;
  cin >> A >> B >> C ;
  cout << "MEDIA = " << fixed << setprecision (1) << (A * 2 / 10) + (B * 3 / 10) + (C * 5 / 10) << endl;
  return 0 ;
}
