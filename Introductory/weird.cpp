#include <bits/stdc++.h>
 
using namespace std;
 
int main(void)
{
	uint64_t n; cin >> n;
 
	while(n != 1)
	{
		cout << n << endl;
		if(n%2)
		{
			n *= 3;
			n += 1;
		} else
		{
			n /= 2;
		}
 
	}
 
	cout << n;
 
	return 0;
}
