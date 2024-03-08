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
    vector<int> even_vec;
    vector<int> odd_vec;
    
    for (int i = 0 ; i < n ; i++) 
    {
        int num;
        cin >> num;
        if(num % 2 == 0) even_vec.push_back(num);
        else odd_vec.push_back(num);
    }
    
    sort(even_vec.begin() , even_vec.end());
    sort(odd_vec.begin() , odd_vec.end());
    reverse(odd_vec.begin() , odd_vec.end());

    for (int i = 0 ; i < even_vec.size() ; i++) {
        cout << even_vec[i] << endl;
    }
    for (int i = 0 ; i < odd_vec.size() ; i++) {
        cout << odd_vec[i] << endl;
    }
    return 0;
}