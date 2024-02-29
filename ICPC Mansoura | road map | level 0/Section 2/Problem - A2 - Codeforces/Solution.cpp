#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include<algorithm>
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n ,sug_index;
    cin >> n ;
    int arr[n] ;
    for(int i=0 ; i<n ; i++){
        cin >> arr[i] ;
    }
    sort(arr,arr+n);
    if(arr[0]>1) sug_index=1;
    else{
        for(int i=0 ; i<n ; i++){
            if(arr[i+1]==arr[i]+1){
                continue;
            }else{
                sug_index=arr[i]+1;
                break;
            }
        }
    }
    cout<<sug_index;
    return 0;
}