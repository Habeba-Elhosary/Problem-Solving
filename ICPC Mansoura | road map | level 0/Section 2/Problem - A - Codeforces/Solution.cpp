#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int res , x ;
    for(int i=1 ; i<=5 ; i++){
        for(int j=1 ; j<=5 ;j++){
            cin >> x ;
              if(x==1){
                res = abs(j-3)+abs(i-3);
            }
        }
    }
    cout << res << endl ;
    return 0;
}
