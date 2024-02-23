#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    for (int i=s.size()-2 ; i>= 0; i=i-2) cout << s[i]; 
    if (s.size() % 2 !=0 ) {
        for (int i=0 ; i<s.size() ; i=i+2)
            cout << s[i]; 
    } else {
        for (int i=1 ; i<s.size() ; i=i+2)
            cout << s[i]; 
    }
    return 0;
}
