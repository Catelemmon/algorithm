#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>
#include <iostream>
using namespace std;

/***************求水仙花数***************
int main(void) {
	for (int i = 100; i < 999; i++) {
		int a = i / 100, b = i % 100 / 10, c = i % 10;
		if (i==(a*a*a+b*b*b+c*c*c)) {
			cout << i << endl;
		}
	}
	system("pause");
	return 0;
}
/***************求水仙花数***************/

/***************求水仙花数(文件版)***************
int main(void) {
	FILE  *fout;
	fout = fopen("data.out", "wb");
	for (int i = 100; i < 999; i++) {
		int a = i / 100, b = i % 100 / 10, c = i % 10;
		if (i == (a*a*a + b*b*b + c*c*c)) {
			cout << i << endl;
			fprintf(fout, "%d\n", i);
		}
	}
	fclose(fout);
	system("pause");
	return 0;
}
/***************求水仙花数(文件版)***************/

/***************韩信点兵（文件读入版）***************
int main(void) {
	FILE *fin;
	fin = fopen("data.in", "rb");
	int num,i=0,case_count=0;
	int a = 0, b = 0, c = 0;
	for (; fscanf(fin, "%d", &num) == 1;i++) {
		switch (i) {
		case 0: a = num;
			break;
		case 1: b = num;
			break;
		case 2: c = num;
			break;
		default:
			break;
		}
		if (i == 2) {
			case_count++;
			for (int j = 10; j <= 100; j++) {
				if ((j % 3 == a) && (j % 5 == b) && (j % 7 == c) ) {
					cout << "Case " << case_count << ":	" << j << endl;
					break;
				}
				else if (j >= 100) {
					cout << "Case " << case_count << ":	" << "No answer" << endl;
				}
			}
			i = -1;
		}
	}
	system("pause");
	return 0;
}
/***************韩信点兵（文件读入版）***************/

/***************输出倒三角形***************
int main(void) {
	int floor;
	cin >> floor;
	int floor_cp = floor;
	if (floor <= 20) {
		for (int i = 0; i < floor; i++) {
			for (int space_num = 0; space_num < i; space_num++) {
				cout << " ";
			}
			for (int out_count = 0; out_count < floor_cp*2-1; out_count++) {
				cout << "#";
			}
			floor_cp--;
			cout << endl;
		}
	}
	system("pause");
	return 0;
}
/***************输出倒三角形***************/

/***************子序列的和（这个程序有bug！！！去你妈的C++）***************
//#define LOCAL
int main() {
#ifdef LOCAL
	freopen("data.out", "w", stdout);
#endif // LOCAL
	long  n, m;
	int count=0;
	while (scanf("%d %d", &n, &m)&&(n!=0||m!=0)) {

		for (long i = n; i <= m; i++) {
			ans += (double)1 / (i*i);
		}
		count++;
		printf("Case %d: %.5lf\n",count,ans);
	}
	system("pause");
	return 0;
}

/***************子序列的和***************/

/***************分数化成小数（还是有bug艹）***************
//#define LOCAL
int main(void) {
#ifdef LOCAL
	freopen("data.out", "w", stdout);
#endif // LOCAL
	double a=1, b=1, c=1;
	int input_num,count=0,case_num=0;
	while (scanf("%d", &input_num)) {
		switch (count) {
		case 0:a = input_num;
			break;
		case 1:b = input_num;
			break;
		case 2:c = input_num;
			break;
		default:
			break;
		}
		if (a == 0&&b == 0&&c==0) {
			return 0;
		}
		else if (count == 2) {
			case_num++;
			long mod = 1;
			for (int i = 0; i < c; i++) {
				mod *= 10;
			}
			long temp = mod*(a / b);
			double result = (double)temp / mod;
			printf("Case %d: %.1f \n", case_num, result);
			cout << result << endl;
			count = -1;
		}
		count++;
	}
	system("pause");
	return 0;
}
/***************分数化成小数（还是有bug 艹）***************/

/***************1-9产生数字排列为1:2:3(v1.0)***************
int main(void) {
	for (int num1 = 123; num1 <= 329; num1++) {
		int num2 = num1 * 2;
		int x = num1 / 100, y = num1 % 100 / 10, z = num1 % 10;
		int a = num2 / 100, b = num2 % 100 / 10, c = num2 % 10;
		if (x == 0 || y == 0 || z == 0 || a == 0 || b == 0|| c == 0||x==y||x==z||y==z||a==b||a==c||b==c ) {
			continue;
		}
		if (x == a || x == b || x == c || y == a || y == b || y == c || z == a || z == b || z == c) {
			continue;
		}
		int num3 = num1 * 3;
		int i = num3 / 100, j = num3 % 100 / 10, k = num3 % 10;
		if (i == 0 || j == 0 || k == 0|| i == j || a == k || j == k) {
			continue;
		}
		if (x == i || x == j || x == k || y == i || y == j || y == k || z == i || z == j || z == k) {
			continue;
		}
		if (a == i || a == j || a == k || b == i || b == j || b == k || c == i || c == j || c == k) {
			continue;
		}
		cout << num1 << " " << num2 << " " << num3 << endl;
	}
	cout << (double)clock() / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}
/***************1-9产生数字排列为1:2:3(v1.0)***************/

/***************1-9产生数字排列为1:2:3(v2.0)***************
void judge(int num, int &result_add, int &result_mul) {
	int i, j, k;
	i = num / 100;
	j = num / 10 % 10;
	k = num % 10;
	result_add += i + k + j;
	result_mul *= i*j*k;
}
int main(void) {
	int i, j, k;
	int result_add, result_mul;
	for (i = 123; i <= 329; i++) {
		j = i * 2;
		k = i * 3;
		result_add = 0;
		result_mul = 1;
		
		judge(i, result_add, result_mul);
		judge(j, result_add, result_mul);
		judge(k, result_add, result_mul);
		if (result_add == 45 && result_mul == 362880) {
			cout << i << " " << j << " " << k << endl;
		}
	}
	cout << (double)clock() / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}
/***************1-9产生数字排列为1:2:3(v2.0)***************/

/***************1-9产生数字排列为1:2:3(v3.0)(存在bug)***************
int main() {
	int n, i, j;
	char array[10];
	for (n = 123; n < 329; i++) {
		sprintf(array, "%d", n * 1000000 + n * 2 * 1000 + n * 3);
		for (j = 0, i = '1'; i <= '9 '; memchr(array, i++, 9) && j++);
		if (j == 9) {
			cout << n << " " << n * 2 << " " << n * 3 << endl;
		}
	}
	system("pause");
	return 0;
}
/***************1-9产生数字排列为1:2:3(v3.0)(存在bug)***************/

