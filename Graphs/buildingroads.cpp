#include <bits/stdc++.h>
using namespace std;
 
const int maxn = 2e5 + 1;
 
vector<int> adj[maxn];
bool visitado[maxn]{};
 
int n, m;
 
void dfs(int x)
{
	visitado[x] = true;
 
	for(int vizinho : adj[x])
	{
		if(!visitado[vizinho])
		{
			dfs(vizinho);
		}
	}
 
}
 
int main(void)
{
	cin >> n >> m;
 
	for(int p = 0; p < m; p++)
	{
		int a, b;
		cin >> a >> b;
		adj[a].push_back(b);
		adj[b].push_back(a);
	}
 
	vector<int> rep;
 
	for(int p = 1; p <= n; p++)
	{
		if(!visitado[p])
		{
			rep.push_back(p);
			dfs(p);
		}
	}
 
	int res = rep.size() - 1;
 
	cout << res << endl;
 
	for(int p = 1; p < rep.size(); p++)
	{
		cout << rep[p] << ' ' << rep[p - 1] << endl;
	}
 
	return 0;
}

