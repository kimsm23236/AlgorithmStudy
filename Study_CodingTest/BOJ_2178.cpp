#include <iostream>
#include <vector>
#include <queue>
#include <string>
#include <algorithm>

using namespace std;

int row, col;
vector<vector<int>> Maze;
vector<vector<bool>> isVisited;
vector<int> dist;
int dx[4] = {0, 0, 1, -1};
int dy[4] = {1, -1, 0, 0};

// 1,1 시작
// 현재 위치에서 네 방향을 dfs로 탐색
// 1값을 찾아 들어가서 거리 +1
// 탐색 위치가 도착지점일때 거리를 벡터에 push
// 거리 벡터의 최소값을 출력

void CreateMap(int r, int c)
{
	for (int i = 0; i < r; i++)
	{
		string str;
		cin >> str;
		vector<int> vi;
		vector<bool> vb(c, false);
		Maze.push_back(vi);
		isVisited.push_back(vb);
		for (int j = 0; j < c; j++)
		{
			Maze[i].push_back(str[j] - '0');
		}
	}
}

void DFS(int sr, int sc, int d)
{
	if (isVisited[sr][sc] == true)
	{
		return;
	}

	isVisited[sr][sc] = true;
	d++;

	if (sr == row - 1 && sc == col - 1)
	{
		isVisited[sr][sc] = false;
		dist.push_back(d);
		return;
	}

	for (int i = 0; i < 4; i < i++)
	{
		int nx = std::clamp(sr + dx[i], 0, row - 1);
		int ny = std::clamp(sc + dy[i], 0, col - 1);
		if (Maze[nx][ny] == 1)
		{
			DFS(nx, ny, d);
		}
	}
	isVisited[sr][sc] = false;
}

void BFS(int sr, int sc)
{
	queue<pair<int, int>> qi;
	queue<int> qdist;
	
	qi.push(make_pair(sr, sc));
	qdist.push(1);

	while (!qi.empty())
	{	
		pair<int, int> pos = qi.front();
		int curDist = qdist.front();
		if (pos.first == row - 1 && pos.second == col - 1)
		{
			cout << curDist;
			break;
		}
		qi.pop();
		qdist.pop();

		for (int i = 0; i < 4; i++)
		{
			int nx = std::clamp(pos.first + dx[i], 0, row - 1);
			int ny = std::clamp(pos.second + dy[i], 0, col - 1);
			if (Maze[nx][ny] == 1 && isVisited[nx][ny] == false)
			{
				qi.push(make_pair(nx, ny));
				isVisited[nx][ny] = true;
				qdist.push(curDist+1);
			}
		}

	}
}


int main()
{
	cin >> row >> col;
	CreateMap(row, col);
	// DFS(0, 0, 0);
	BFS(0, 0);
	/*int min = dist.front();
	for (int i = 0; i < dist.size(); i++)
	{
		min = min > dist[i] ? dist[i] : min;
	}
	cout << min;*/
	return 0;
}