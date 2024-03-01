#include <iostream>
#include <string>
#include <stack>
#include <unordered_map>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        
    unordered_map<char, char> parentheses = {
        {'(' , ')'},
        {'{' , '}'},
        {'[' , ']'}
    };
    
    stack<char> x;
    
    for(char c : s)
    {
        // If the current character is an opening parenthesis
        if(parentheses.find(c) != parentheses.end())
        {
            x.push(c);
        }
        // If the current character is a closing parenthesis
        else if(!x.empty() && parentheses[x.top()] == c)
        {
            x.pop();
        }
        else
        {
            return false;
        }
    }
    
    // If the stack is empty, then all parentheses are matched
    return (x.empty() ? true : false);
    }
};