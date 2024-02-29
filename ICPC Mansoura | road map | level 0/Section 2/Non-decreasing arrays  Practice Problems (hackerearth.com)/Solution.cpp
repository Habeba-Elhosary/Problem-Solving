#include<bits/stdc++.h>
#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin >> n;
        long long int a[n];
        long long int b[n];
        for(int i = 0 ; i < n ; i++) cin >> a[i];
        b[0] = a[0];
        for(int i = 1 ; i < n ; i++)
        {   
            if(a[i] >= b[i-1]) b[i] = a[i];
            else
            {
                b[i] = b[i-1];
                if(b[i] % a[i] != 0) b[i]+=(a[i]-(b[i]%a[i]));
            }
        }
        for(int j = 0 ; j < n ; j++) cout << b[j] << " ";
        cout << endl;
    }
    return 0;
}
