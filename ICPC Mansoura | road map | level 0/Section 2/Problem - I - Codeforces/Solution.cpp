#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include<algorithm>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t ;
    cin >> t ;
    while(t--){
        int n , sum = 1000000000;
        cin >> n ;
        int arr[n] ;
        for(int i=0 ; i<n ; i++){
            cin >> arr[i];
        }
        for(int i=0 ; i<n ; i++){
            for(int j=i+1 ; j<n ; j++){
                if(arr[i] + arr[j] + j - i < sum)
                sum = arr[i] + arr[j] + j - i ;
            }
        }
        cout << sum << endl ;
    }
}
