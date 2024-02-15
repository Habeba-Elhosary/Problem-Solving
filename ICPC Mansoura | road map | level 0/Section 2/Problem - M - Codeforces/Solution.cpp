#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include<algorithm>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n ;
    cin >> n ;
    int arr [n] ;
    for(int i=0 ; i<n ; i++){
        cin >> arr[i] ;
    }
    int max = arr[0] , min = arr[0] , posMin,posMax;
    for(int i=0 ; i<n ; i++){
        if(arr[i]>max){
            max=arr[i];
            posMax=i;
        }
        if(arr[i]<min){
            min=arr[i];
            posMin=i;
        }
    }
    arr[posMin]=max ; arr[posMax] = min ;
    for(int i=0 ; i<n ; i++){
        cout << arr[i] << " " ;
    }
    return 0;
}
