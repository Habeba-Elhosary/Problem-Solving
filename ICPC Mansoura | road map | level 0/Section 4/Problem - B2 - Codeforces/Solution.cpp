#include <iostream>
#include <stack>
#include <string>
#include <iomanip>
#include <cmath>
#include<algorithm>
#include <bits/stdc++.h>
using namespace std;

int maxLengthOfRegularBracketSequence(const string& brackets) 
{
    stack <char> st;
    int maxLength = 0;
    int currentLength = 0;

    for (char c : brackets)
    {
        if (c == '(') 
        {
            st.push(c);
        }
        else if (c == ')' && !st.empty()) 
        {
            st.pop();
            currentLength += 2;
            maxLength =max(maxLength, currentLength);
        }
    }
    return maxLength;
}

int main() 
{
    string brackets;
    cin >> brackets;
    
    int maxLength = maxLengthOfRegularBracketSequence(brackets);
    
    cout << maxLength << endl;

    return 0;
}