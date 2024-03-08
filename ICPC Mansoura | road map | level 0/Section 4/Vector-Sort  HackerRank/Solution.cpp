#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include<algorithm>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector <int> v;
    for (int i = 0 ; i < n ; i++)
    {
        int num;
        cin >> num;
        v.push_back(num);
    }
    sort(v.begin(), v.end());
    for (int i = 0 ; i < n ; i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}
