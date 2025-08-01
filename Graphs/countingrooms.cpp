#include <bits/stdc++.h>
 
using namespace std;
 
const int maxn = 1e4;
 
typedef pair<int, int> pii;
 
int dx[] = {0, 0, -1, 1};
int dy[] = {-1, 1, 0, 0};
 
bool visitados[maxn][maxn]{};
char arr[maxn][maxn];
int n, m;
 
void bfs(int x, int y)
{
	visitados[x][y] = true; // marco que ja visitei eu memso
 
	queue<pii> que;
	que.push({x, y}); // marco que ainda devo visitar eu mesmo.
			     
	while(!que.empty()) // enquanto houverem lugares para visitar...
	{
		auto [cx, cy] = que.front(); que.pop();
 
		for(int d = 0; d < 4; d++)
		{
			int nx = cx + dx[d]; // direita esquerda
			int ny = cy + dy[d]; // cima baixo
 
			if(nx >= 0 && nx < n && ny >= 0 && ny < m)
			{
				if(arr[nx][ny] == '.' && !visitados[nx][ny]) {
					que.push({nx, ny});
					visitados[nx][ny] = true;
				}
 
			}
 
		}
 
	}
 
}
 
int main(void)
{
	cin >> n >> m;
 
	for(int p = 0; p < n; p++)
		for(int q = 0; q < m; q++)
			cin >> arr[p][q];
	int r = 0;
	for(int p = 0; p < n; p++)
		for(int q = 0; q < m; q++)
			if(arr[p][q] == '.' && visitados[p][q] == false) {
				r++;
				bfs(p, q);
			}
 
	cout << r << endl;
 
	return 0;
}
