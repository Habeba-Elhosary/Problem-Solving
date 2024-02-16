#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include<algorithm>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n  ,count = 0 ;
    cin >> n ;
    for(int i=0 ; i<n ; i++){
        string s;
        cin >> s;
        if( s.length()%2 != 0 ){
            cout << "NO" << endl ;
        }else{
            for(int j=0 ; j<s.length()/2 ; j++){
                if(s[j] != s[(s.length()/2)+j])
                count++ ;
            }
            if(count!=0) cout << "No" << endl ;
            else cout << "YES" << endl ;
        }
        count = 0 ;
    }
    return 0;
 }
