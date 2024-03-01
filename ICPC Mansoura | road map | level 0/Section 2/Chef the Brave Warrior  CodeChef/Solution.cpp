#include<iostream>
#include <boost/multiprecision/cpp_int.hpp>

using namespace boost::multiprecision;
using namespace std;


int main() {
    int128_t number_of_soldiers , opponent_army;
    cin >> number_of_soldiers >> opponent_army;
    cout << (number_of_soldiers - opponent_army) << endl ;
    if (opponent_army%2 != 0) cout <<"odd";
    else cout <<"even";
}
