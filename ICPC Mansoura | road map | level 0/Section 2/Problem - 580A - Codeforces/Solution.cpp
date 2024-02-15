#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include<algorithm>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n , maxLength = 1 , currentLength = 1 ; 
    cin >> n ;
    int a[n] ;
    for (int i = 0; i < n; i++) {
        cin >> a[i] ;
    }
    for (int i = 1 ; i < n; ++i) {
        if (a[i] >= a[i-1]) {
            currentLength++ ;
        } else {
            currentLength = 1 ; 
        }
        maxLength = max(maxLength, currentLength);
    }
    cout << maxLength << endl;
    return 0;
}
