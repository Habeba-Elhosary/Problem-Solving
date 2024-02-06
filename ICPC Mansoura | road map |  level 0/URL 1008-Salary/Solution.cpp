#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
    int employee_number , worked_hours ;
    double amount_per_hour ;
    cin >> employee_number >> worked_hours >> amount_per_hour ;
    cout << "NUMBER = " << employee_number << endl ;
    cout << "SALARY = U$ " << fixed << setprecision(2) << worked_hours*amount_per_hour << endl ;
  return 0 ;
}