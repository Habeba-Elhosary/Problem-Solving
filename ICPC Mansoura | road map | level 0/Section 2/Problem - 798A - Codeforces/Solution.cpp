#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int count = 0 ;
    string s ;
    cin >> s ;
    if(s.length()==1){
        count = 0 ;
    }else{
        for( int i=0 ; i<s.length()/2; i++){
            if(s[i]!=s[s.length()-i-1]){
                count++;
            }
        }
    }
    if (count == 1 || (count == 0 && s.length()%2!=0)) 
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}

