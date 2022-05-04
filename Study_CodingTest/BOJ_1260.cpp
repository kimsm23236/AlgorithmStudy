#include <iostream>
#include <vector>
#include <queue>

using namespace std;

vector<bool> visited;
vector<vector<int>> grp;
int n;

void DFS(int v)
{
	if(visited[v] == true)
		return;

	visited[v] = true;
	cout << v + 1 << " ";
	for (int i = 0; i < n; i++)
	{
		if(grp[v][i] == 1)
			DFS(i);
	}
}

void BFS(int v)
{
	queue<int> q;
	visited[v] = true;
	q.push(v);
	while (!q.empty())
	{
		int num = q.front();
		cout << num + 1 << " ";
		q.pop();
		for (int i = 0; i < n; i++)
		{
			if (grp[num][i] == 1 && visited[i] == false)
			{
				q.push(i);
				visited[i] = true;
			}
		}
		
	}
}

int main()
{
	int M, V;
	cin >> n >> M >> V;

	for (int i = 0; i < n; i++)
	{
		vector<int> v(n, 0);
		grp.push_back(v);
	}

	for (int i = 0; i < n; i++)
	{
		visited.push_back(false);
	}

	for (int i = 0; i < M; i++)
	{
		int n1, n2;
		cin >> n1 >> n2;
		n1 -= 1;
		n2 -= 1;
		grp[n1][n2] = 1;
		grp[n2][n1] = 1;
	}

	/*for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << grp[i][j] << " ";
		}
		cout << "\n";
	}*/

	DFS(V-1);

	cout << "\n";
	for (int i = 0; i < n; i++)
	{
		visited[i] = false;
	}

	BFS(V-1);


	return 0;
}