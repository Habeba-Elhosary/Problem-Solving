#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include<algorithm>
#include <bits/stdc++.h>
using namespace std;


long long cumulative_sum(long long n) {
    if (n % 2 == 0) {
        return n/2;
    } else {
        return -(n/2+1);
    }
}

int main(){
    long long t ;
    cin>> t;
    while(t--){
        long long l,r,sum = 0;
        cin >> l >> r;
        sum = cumulative_sum(r) - cumulative_sum(l-1);
        cout << sum << endl;
    }
 
    return 0;
}
