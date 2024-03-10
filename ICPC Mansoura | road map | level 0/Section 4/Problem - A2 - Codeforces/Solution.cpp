#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include<algorithm>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s ;
    getline(cin, s); 
    vector <char> vec;
    int counter = 0;
    for(int i = 0 ; i < s.length() ; i++)
    {
        if (isalpha(s[i]))
        {
            vec.push_back(s[i]);
            counter = 0;
        }
        else if(s[i] == ' ')
        {
            counter++;
            if(counter<2)  vec.push_back(s[i]);
        }
        if (s[i] == ',' || s[i] == '.' || s[i] == '!' || s[i] == '?')
        {
            if(s[i-1] == ' ') vec.pop_back();
            vec.push_back(s[i]);
            vec.push_back(' ');
            counter++;
        }
    }
    
    for(int i = 0 ; i < vec.size() ; i++) cout << vec[i] ;
    
    return 0;
}
