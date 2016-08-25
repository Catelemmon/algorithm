#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

/****************开灯问题****************
#define maxn 1010
int arr[maxn];
int main() {
	int n, k, first = 1;
	memset(arr,0,sizeof(arr));
	cin >> n >> k;
	for (int i = 1; i <= k; i++) {
		for (int j = 1; j <= n; j++) {
			if (j%i == 0) {
				arr[j] = !arr[j];
			}
		}
	}
	for (int i = 1; i <= n; i++) {
		if (arr[i]) {
			if (first) {
				first = 0;
			}
			else {
				cout << " ";
			}
			cout << i;
		}
	}
	cout << endl;
	system("pause");
	return 0;
}
/****************开灯问题****************/