#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

/****************��������****************
#define maxn 12
int arr[maxn][maxn];
int main() {
	int n, x, y, count;
	cin >> n;
	memset(arr, 0, sizeof(arr));
	count = arr[x = 0][y = n - 1] = 1;
	while (count<n*n) {
		while (x + 1 < n && !arr[x + 1][y]) arr[++x][y] = ++count;//���������ƶ�
		while (y + 1 < n && !arr[x][y + 1]) arr[x][++y] = ++count;//���������ƶ�
		while (x - 1 >= 0 && !arr[x - 1][y]) arr[--x][y] = ++count;//���������ƶ�
		while (y - 1 >= 0 && !arr[x][y - 1]) arr[x][--y] = ++count;//���������ƶ�
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
/****************��������****************/