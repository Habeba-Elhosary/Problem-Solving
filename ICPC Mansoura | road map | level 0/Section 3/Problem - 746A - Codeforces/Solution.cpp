#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include<algorithm>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int min_fruit = min({a, b/2, c/4});
    int total_fruits = min_fruit + (min_fruit*2) + (min_fruit*4);
    cout << total_fruits << endl;
    return 0;
}