#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
 
void the_winner(string s) {
    int a_counter = 0, d_counter = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'A')
            a_counter++;
        else if (s[i] == 'D')
            d_counter++;
    }
    if (a_counter > d_counter)
        cout << "Anton";
    else if (d_counter > a_counter)
        cout << "Danik";
    else
        cout << "Friendship";
}
 
int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    the_winner(s);
    return 0;
}