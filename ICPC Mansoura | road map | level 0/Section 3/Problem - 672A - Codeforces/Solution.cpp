#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include<algorithm>
#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    cin >> n;
    int i = 1;
    while (n > 0) {
        string num = to_string(i);
        if (n <= num.size()) {
            cout << num[n - 1] << endl;
            break;
        }
        n -= num.size();
        i++;
    }
    return 0;
}
