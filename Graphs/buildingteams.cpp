#include <bits/stdc++.h>
#define pb push_back
using namespace std;
const int maxn = 1e5 + 1;
const int maxm = 2e5 + 1;
 
int times[maxn]{};
vector<int>adj[maxm];
int n, m;
 
void bfs(int x)
{
	bool t1 = false, t2 = false;
	times[x] = 1;
	queue<int> q;
	q.push(x);
 
	while(!q.empty())
	{
		int u = q.front(); q.pop();
 
		for(int r : adj[u])
		{
			if(!times[r])
			{
				q.push(r);
			}
			else
			{
				if(times[r] == 1) t1 = true;
				else t2 = true;
 
			}
 
		}
	
				
		if(t1 && t2) {
			cout << "IMPOSSIBLE";
			return;
		}
		if(t1) {
			times[u] = 2;
		} else {
			times[u] = 1;
		}
		t1 = false;
		t2 = false;
	
	}
 
	for(int p = 1; p <= n; p++)
	{
		if(!times[p]) { 
			bfs(p);	
			return;
		}
	}
 
	for(int p = 1; p <= n; p++)
		cout << times[p] << ' ';
}
 
int main(void)
{
	cin >> n >> m;
 
	for(int p = 0; p < m; p++)
	{
		int a, b;
		cin >> a >> b;
 
		adj[a].pb(b);
		adj[b].pb(a);
 
	}
 
	bfs(1);
 
	return 0;
}
