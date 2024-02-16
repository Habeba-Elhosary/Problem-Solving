#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include<algorithm>
#include <bits/stdc++.h>
using namespace std;

int main() {
   string s;
   cin >> s;
   for(int i=0 ; i<s.length() ; i++){
       if(s[i]=='+') s. erase(i,1);
   }
   for(int i=0 ; i<s.length() ; i++){
       if(s[i]=='+') s. erase(i,1);
   }
   sort(s.begin(), s.end()); 
   for(int i=0 ; i<s.length() ; i++){
       cout<<s[i];
       if(i != s.length()-1) cout<<"+";
   }

    return 0;
 }
