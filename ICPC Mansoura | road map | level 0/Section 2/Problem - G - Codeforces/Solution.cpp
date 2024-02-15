#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include<algorithm>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n , count = 0;
    cin >> n ;
    int arr[n] ;
    for(int i=0 ; i<n ; i++){
        cin >> arr[i] ;
    }
    for(int i=0 ; i<n/2 ; i++){
        if(arr[i]!=arr[n-i-1]) count++;
    }
    if(count==0) cout << "YES" << endl;
    else cout << "NO" << endl ;
    return 0;
}
