#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include<algorithm>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int remove_stone = 0;
    for (int i=1; i<n ; i++) {
        if (s[i] == s[i-1]) {
            remove_stone++;
        }
    }
    cout << remove_stone << endl;
    return 0;
}
