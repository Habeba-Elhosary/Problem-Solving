#include<bits/stdc++.h>
#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include<algorithm>
using namespace std;

int main()
{
    int n , count4 = 0 , count3 = 0 , count2 = 0 , count1 = 0 , tax = 0;
    cin >> n;
    int arr[n];
    for(int i = 0 ; i < n ; i++)
    {
        cin >> arr[i];
    }
    for(int i = 0 ; i < n ; i++)
    {
        if(arr[i]==4) count4++;
        else if (arr[i]==3) count3++;
        else if(arr[i]==2) count2++;
        else count1++;
    }
    
    // Handling group 4
    tax += count4;

    // Handling group 3 & 1
    while(count3 != 0 && count1 != 0)
    {
        tax++;
        count1--;
        count3--;
    }
    if(count3 != 0 && count1 == 0)
    {
        tax += count3;
        count3 = 0;
    }
    
    // Handling group 2 & 1
    tax += count2/2 ;
    if(count2%2 != 0)
    {
        if(count1 <= 2)
        {
            count1 = 0;
            count2 = 0;
        }
        else
        {
            count1 = count1 - 2 ;
            count2 = 0;
            
        }
        tax++;
    }
    
    // Handling group 1
    tax += count1/4 ;
    if(count1%4 != 0)
    {
        tax++;
    }
    
    cout << tax << endl; 
    return 0;
}
