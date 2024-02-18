#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, m, a;
    cin >> n >> m >> a;
    long long length_flagstones = n / a;
    if (n % a != 0) {
        length_flagstones += 1;
    }
    long long width_flagstones = m / a;
    if (m % a != 0) {
        width_flagstones += 1;
    }
    long long total_flagstones = length_flagstones * width_flagstones;
    cout << total_flagstones << endl;
    return 0;
}