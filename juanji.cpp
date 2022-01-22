#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <map>
#include <set>
#include <queue>
#include <vector>
#include <stack>
#define n 6
#define m 7
using namespace std;
typedef long long ll;
int h[6][6] = { {0,0,0,0,0,0},{0,-1,1,-1,1,-1},{0,1,-2,2,-2,1},{0,-1,2,4,2,-1},{0,1,-2,2,-2,1},{0,-1,1,-1,1,-1} };
int g[505][505], now, ans[505][505];
char s[55];
int main()
{	
	scanf_s("%s", s);
	FILE* fin;
	fopen_s(&fin, s, "r");
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= m; j++)
			fscanf_s(fin, "%d", &g[i][j]);
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= m; j++)
			for (int x = 1; x <= 5; x++)
				for (int y = 1; y <= 5; y++)
					if (i + x - 3 > 0 && i + x - 3 <= n && j + y - 3 > 0 && j + y - 3 <= m) ans[i][j] += h[x][y] * g[i + x - 3][j + y - 3];
	for (int i = 1; i <= n; i++, printf("\n"))
		for (int j = 1; j <= m; j++) printf("%d ", ans[i][j]);
	system("pause");
	return 0;
}
