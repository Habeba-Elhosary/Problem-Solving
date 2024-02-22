#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include<algorithm>
#include <bits/stdc++.h>
using namespace std;

void printing_array(int* arr , int size){
    for(int i=0 ; i<size ; i++){
        cout << arr[i] << " ";
    }    
}

bool check_distinct(int* arr , int size){
    unordered_set<int> s;
    for (int i=0 ; i<size; i++) {
        s.insert(arr[i]);
    }
    return (s.size() == size);
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n],x=2,y=1,sum_even=0,sum_odd=0;
        if(n%2!=0 || n<=2){
            cout << "NO" << endl;
        }else{
            for(int i=0 ; i<n/2 ; i++){
                arr[i]=x;
                x+=2;
                sum_even+=arr[i];
            }
            for(int i=n/2 ; i<n ; i++){
                arr[i]=y;
                y+=2;
                sum_odd+=arr[i];
            }
            if(sum_even==sum_odd && check_distinct(arr,n)){
                cout << "YES" << endl;
                printing_array(arr,n);
            }
            else if(sum_even>sum_odd){
                int difference = sum_even - sum_odd;
                if((arr[n-1]+difference)%2==0) cout << "NO" << endl;
                else {
                    arr[n-1]=arr[n-1]+difference;
                    if(check_distinct(arr,n)==true){
                        cout << "YES" << endl;
                        printing_array(arr,n);
                        cout << endl;
                    }else cout<<"NO"<<endl;
                }
            }
            else cout << "NO" << endl;
        }
    }
    return 0;
}