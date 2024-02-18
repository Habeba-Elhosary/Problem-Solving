#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string feeling = "I hate";
    cin >> n;
    for (int i=2 ; i<=n ; i++) {
        if (i % 2 == 0) {
            feeling += " that I love";
        } else {
            feeling += " that I hate";
        }
    }
    feeling+=" it";
    cout << feeling;
    return 0;
}