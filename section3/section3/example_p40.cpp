#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

/****************蛇形填数****************
#define maxn 12
int arr[maxn][maxn];
int main() {
	int n, x, y, count;
	cin >> n;
	memset(arr, 0, sizeof(arr));
	count = arr[x = 0][y = n - 1] = 1;
	while (count<n*n) {
		while (x + 1 < n && !arr[x + 1][y]) arr[++x][y] = ++count;//填字向下移动
		while (y + 1 < n && !arr[x][y + 1]) arr[x][++y] = ++count;//填字向右移动
		while (x - 1 >= 0 && !arr[x - 1][y]) arr[--x][y] = ++count;//填字向上移动
		while (y - 1 >= 0 && !arr[x][y - 1]) arr[x][--y] = ++count;//填字向左移动
	}
	for (x = 0; x < n; x++) {
		for ( y = 0; y < n; y++) {
			cout << arr[x][y]<<"\t";
		}
		cout << endl;
	}
	cout << endl;
	system("pause");
	return 0;
}
/****************蛇形填数****************/