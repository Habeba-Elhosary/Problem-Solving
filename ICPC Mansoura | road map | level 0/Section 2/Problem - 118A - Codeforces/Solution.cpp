#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include<algorithm>
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s , res = "" ;
    cin >> s ;
    for(int i=0 ; i<s.length() ; i++){
        char x = tolower(s[i]) ;
        if(x != 'a' && x != 'e' && x != 'i' && x != 'o' && x != 'u' && x != 'y') {
            res += '.' ;
            res += x ;
        }
    }
    cout << res << endl;
    return 0;
 }

