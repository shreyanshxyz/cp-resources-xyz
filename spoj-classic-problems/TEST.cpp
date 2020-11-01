#include <iostream>
using namespace std;
int main() {
	int n;
	int i;
	for (i=0; i>=0; i++)
	{
		cin >> n;
		if(n == 42)
		{
			break;
		}
				
		if(n > 99)
		{
			break;
		}
		cout << n << endl;
	}

	return 0;
}
