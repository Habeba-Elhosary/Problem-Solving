#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include<algorithm>
#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--){
        int n , count = 0;
        cin >> n;
        int arr[n];
        for(int i=0 ; i<n ; i++){
            cin >> arr[i];
        }
        sort(arr, arr + n);
        for(int i=0 ; i<n-1 ; i++){
            if(arr[i+1]>arr[i])
            count++;
        }
        cout<< count+1 << endl;
    }
    return 0;
}