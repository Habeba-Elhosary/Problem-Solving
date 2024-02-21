#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include<algorithm>
#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n , increasing = 1 , max_increasing = 1;
    cin >> n;
    long long a[n];
    for(long long i=0 ; i<n ; i++){
        cin >> a[i];
    }
    for(long long i=0 ; i<n-1 ; i++){
        if(a[i+1] > a[i]) increasing++;
        else increasing = 1;
        if(increasing>max_increasing) max_increasing=increasing;
    }
    cout << max_increasing << endl;
    return 0;
}
