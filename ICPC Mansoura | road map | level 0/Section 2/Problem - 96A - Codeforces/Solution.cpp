#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int count = 1 ;
    string situation ;
    cin >> situation ;
    for(int i=0 ; i< situation.length() ; i++){
        if(situation[i]==situation[i+1]){
            count++ ;
            if(count>=7) break;
        }else{
            count = 1 ;
        }
    }
    if(count>=7) cout << "YES" << endl ;
    else cout << "NO" << endl ;
    return 0;
}
