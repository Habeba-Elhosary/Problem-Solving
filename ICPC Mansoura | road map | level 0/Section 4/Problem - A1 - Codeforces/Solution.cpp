#include <iostream>
#include <string>
#include <stack>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int main() 
{
    string s;
    cin >> s;
    stack <char> stk;

    stk.push(s[0]);

    for (int i = 1 ; i < s.length() ; i++)
    {
        if (!stk.empty() && s[i] == stk.top()) stk.pop();
        else stk.push(s[i]);
    }
    
    vector <char> v;
    while (!stk.empty()) 
    {
        v.push_back(stk.top());
        stk.pop();
    }

    reverse(v.begin(), v.end());
    
    for (int i = 0 ; i < v.size() ; i++)
    {
        cout << v[i];
    }
    
    return 0;
}
