#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
  int N;
  cin >> N;
  for (int i = 0; i < N; i++)
	{
	  int x;
	  cin >> x;
	  if (x == 0) cout << "NULL" << endl;
	  else
		{
		  if (x % 2 == 0) cout << "EVEN ";
		  else cout << "ODD ";
		  
		  if (x > 0) cout << "POSITIVE" << endl;
		  else cout << "NEGATIVE" << endl;
		}
	}
  return 0;
}
