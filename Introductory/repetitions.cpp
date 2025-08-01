#include <bits/stdc++.h>
 
using namespace std;
 
const int maxn = 1e6;
 
int main(void)
{
	int maxr = 1;
	int max = 1;
	int n;
	string seq;
	cin >> seq;
	
	n = seq.size();
 
	for(int p = 0; p < n - 1; p++)
	{
		if(seq[p] == seq[p + 1]) {
		       	maxr++;
			if(maxr > max) max = maxr;
		}
		else maxr = 1;
	}
 
	cout << max;
 
	return 0;

