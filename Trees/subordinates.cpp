#include <bits/stdc++.h>
#define pb push_back
using namespace std;

const int maxn = 2e5 + 20;

int n;
vector<int> vec[maxn];
int ans[maxn];

int main(void)
{
	if(ans[maxn/2] != 0) {
		memset(ans, 0, maxn);
	}

	cin >> n;

	for(int p = 2; p <= n; p++) {
		int a;
		cin >> a;

		vec[a].pb(p);
	}

	stack<int> s1;
	stack<int> s2;

	s1.push(1);

	while(!s1.empty())
	{
		int u = s1.top(); s1.pop();

		s2.push(u);

		for(int chi : vec[u])
		{
			s1.push(chi);
		}

	}

	while(!s2.empty())
	{
		int u = s2.top(); s2.pop();
		
		for(int chi : vec[u])
		{
			ans[u] += ans[chi] + 1;			
		}

	}

	for(int p = 1; p<= n; p++)
		cout << ans[p] << ' ';

	return 0;
}
