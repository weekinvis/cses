#include <bits/stdc++.h>
#define pb push_back
 
using namespace std;
 
const int maxn = 1e5+1;
const int maxm = 2e5+1;
 
vector<int> adj[maxm];
vector<int> caminho;
bool visitado[maxn];
int pai[maxn];
int n, m;
 
bool bfs(int x)
{
	queue<int> q;
	q.push(x);
 
	visitado[x] = true;
	pai[x] = -1;
 
	while(!q.empty())
	{
		int u = q.front(); q.pop();
		
		if(u == n)
		{
			int current = u;
			caminho.pb(current);
 
			current = pai[u];
 
			while(pai[current] != -1)
			{
				caminho.pb(current);
				current = pai[current];
			}
				
			caminho.pb(x);
 
			return true;
		}
		
		vector<int> viz = adj[u];
		reverse(viz.begin(), viz.end());
 
		for(int at : viz)
		{
			if(!visitado[at])
			{
				visitado[at] = true;
				q.push(at);
				pai[at] = u;
			}
		}
 
	}
 
 
	return false;
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
 
	if(bfs(1))
	{
		reverse(caminho.begin(), caminho.end());
		cout << caminho.size() << endl;
		for(int rs : caminho)
		{
			cout << rs << ' ';
		}
	} else {
		cout << "IMPOSSIBLE";
	}
 
	return 0;
}
