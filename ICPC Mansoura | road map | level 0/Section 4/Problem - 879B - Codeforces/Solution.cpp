#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include <algorithm>
#include <vector>
#include <deque>
#include <stack>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n , k , counter = 0;
    cin >> n >> k;
    deque <long long> v (n);
    long long p = 0; 
    
    for(long long int i = 0 ; i < n ; i++)
    {
        cin >> v[i];
        p = max( p , v[i] );
    }
    
    if(k > n )
    {
        cout << p;
        return 0;
    }
    
    while(1)
    {
        if(v[0] == p)
        {
            cout << p;
            return 0;
        }
        
        if( counter == k ) break ;
        
        if(v[0] >= v[1])
        {
            v.push_back(v[1]);
            v.erase(v.begin()+1);
            counter ++ ;
        }
        else 
        {
            v.push_back(v[0]);
            v.erase(v.begin());
            counter = 1 ;
        }
    }
    cout << v[0] << endl;
    return 0;
}
