#include <bits/stdc++.h>
 
using namespace std;
 
const int maxn = 2e5 + 1;
 
int m[maxn]{};
 
int main(void)
{
	int n; cin >> n;
	int idx;
 
	for(int p = 0; p < n - 1; p++)
	{
		cin >> idx;
		m[idx] = idx;
	}
 
	for(int p = 1; p <= n; p++)
	{
		
		if(m[p] == 0) { 
			cout << p;
		       	break;
		}
	}
 
	return 0;

