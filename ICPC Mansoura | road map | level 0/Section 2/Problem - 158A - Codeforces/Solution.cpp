#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n , k , advancers = 0;
    cin >> n >> k;
    int scores[n];
    for (int i = 0; i < n; ++i) {
        cin >> scores[i];
    }
    int k_score = scores[k - 1];
    for (int i = 0; i < n; ++i) {
        if (scores[i] >= k_score && scores[i]>0) {
            advancers++;
        }
    }
    cout << advancers << endl;
    return 0;
}
