#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int k , n , w , count = 0;
    cin >> k >> n >> w ;
    for(int i=1 ; i<=w ; i++){
        count+=i*k;
    }
    count-n<0 ? cout<<"0" : cout<< count-n;
    return 0;
}