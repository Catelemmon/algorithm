#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

/****************�������****************
#define maxn 105
int arr[maxn];
int main(void) {
	int x, n = 0;
	while(scanf("%d", &x) == 1) {
		arr[n++]=x;
	}
	for (int i = n-1; i >= 1; i--) {
		cout << arr[i] << "\t";
	}
	cout << arr[0] << endl;
	system("pause");
	return 0;
}
/****************�������****************/

