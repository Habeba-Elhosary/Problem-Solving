#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int start , end , duration;
    cin >> start >> end;
    if (start == end) {
        duration = 24;
    } else if (start < end) {
        duration = end - start;
    } else {
        duration = 24 - start + end;
    }
    cout << "O JOGO DUROU " << duration << " HORA(S)" << endl;
    return 0;
}