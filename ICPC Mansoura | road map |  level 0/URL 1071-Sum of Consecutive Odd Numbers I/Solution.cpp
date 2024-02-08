#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num[2];
    for (int i = 0; i < 2; i++)  cin >> num[i];
    sort(num , num+2);
    int x = num[0];
    int y = num[1];
    int sum = 0;
    for ( int i=x+1 ; i<y ; i++ ){
        if(i%2 != 0){
            sum+=i ;
        }
    }
    cout << sum << endl ;
    return 0;
}