#include <bits/stdc++.h>
 
using namespace std;
 
set<int> st;
 
int n;
 
int main(void)
{
	cin >> n;
 
	int va;
	int r = 0;
	
	for(int p = 0; p < n; p++)
	{
		cin >> va;
		if(st.find(va) == st.end()) {
		       	r++;
			st.insert(va);
		} else continue;
 
	}
 
	cout << r;
 
	return 0;

