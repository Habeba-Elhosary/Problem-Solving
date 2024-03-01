#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include<algorithm>
#include <stack>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack <char> inputs;
    int counter = 0;
    string s;
    cin >> s;
    for(int i = 0 ; i < s.length() ; i++)
    {
        if(!inputs.empty() && inputs.top() == s[i])
        {
            inputs.pop();
            counter++;
        }
        else inputs.push(s[i]);
    }
    if(counter > 0 && counter%2 != 0) cout << "Yes" << endl; 
    else cout << "No" << endl ;
    return 0;
}
