#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num[5];
    for (int i = 0; i < 5; i++)  cin >> num[i];
    int sum_even = 0 , sum_odd = 0 , sum_positive = 0 , sum_negative = 0;
    for ( int i=0 ; i<5 ; i++ ){
        if(num[i]%2==0) sum_even++;
        else sum_odd++;
        if(num[i]>0) sum_positive++;
        else if(num[i]< 0) sum_negative++ ;
    }
    cout << sum_even << " valor(es) par(es)" << endl ;
    cout << sum_odd << " valor(es) impar(es)" << endl ;
    cout << sum_positive << " valor(es) positivo(s)" << endl ;
    cout << sum_negative << " valor(es) negativo(s)" << endl ;
    return 0;
}