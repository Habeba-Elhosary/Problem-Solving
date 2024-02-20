#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include<algorithm>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n , m , flat = 0;
    cin >> n >> m;
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<m ; j++){
            int win1 , win2 ;
            cin >> win1 >> win2 ;
            if((win1==1&&win2==1)||(win1==1&&win2==0)||(win1==0&&win2==1)) flat++ ;
        }
    }
   cout << flat << endl ;
    return 0;
}