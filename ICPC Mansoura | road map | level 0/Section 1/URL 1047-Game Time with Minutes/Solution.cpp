#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int start_hour , start_min , final_hour , final_min ;
    cin >> start_hour >> start_min >> final_hour >> final_min ;
    start_min = start_hour*60 + start_min ;
    final_min = final_hour*60 + final_min ;
    int duration = final_min - start_min ;
    if (duration == 0)
    cout << "O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)" << endl ;
    else if ( duration > 0 )
    cout << "O JOGO DUROU " << (int)(duration/60) << " HORA(S) E " << (int)(duration%60) << " MINUTO(S)" << endl;
    else if ( duration < 0 ){
        duration = duration + 24*60 ;
        cout << "O JOGO DUROU " << (int)(duration/60) << " HORA(S) E " << (int)(duration%60) << " MINUTO(S)" << endl;
    }
    return 0;
}