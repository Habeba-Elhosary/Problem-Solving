#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include<algorithm>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0 ; i < n ; i++) {
        cin >> vec[i];
    }

    int pos;
    cin >> pos;
    vec.erase(vec.begin() + pos - 1);

    int start, end;
    cin >> start >> end;
    vec.erase(vec.begin() + start - 1 , vec.begin() + end - 1);

    cout << vec.size() << endl;
    for (int i = 0 ; i < vec.size() ; i++) {
        cout << vec[i] << " ";
    }

    return 0;
}