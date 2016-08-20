#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <iostream>
using namespace std;

/***************输出1-n的值***************
int main() {
	int num;
	scanf("%d", &num);
	for (int i = 0; i <=num; i++) {
		printf("%d\t", i);
	}
	system("pause");
	return 0;
}
/***************输出1-n的值***************/

/***************3n+1问题***************
int main(void) {
	int	count = 0,input_num;
	cin >> input_num;
	//scanf("%d", &input_num);
	long temp = input_num;
	long long judge_num = temp;//这一步这里不能从int一次性转化为long long 否则会导致错误
	while (judge_num > 1) {
		if (judge_num % 2 == 1) {
			judge_num = 3 * judge_num + 1;
			//printf("%ld \t %d\n", judge_num, count);
			cout << judge_num << "\t" << count << endl;
		}
		else {
			judge_num /= 2;
			//printf("%ld \t %d\n", judge_num, count);
			cout << judge_num << "\t" << count << endl;
		}
		count++;
	}
	printf("%ld \t %d\n",judge_num,count);
	system("pause");
	return 0;
}
/***************3n+1问题***************/

/***************求PI的值***************
int main(void) {
	double sum = 0;
	int i = 0;
	double item = 0;
	do {
		item = 1.0 / (i * 2 + 1);
		if (i % 2 == 0) {
			sum += item;
		}
		else {
			sum -= item;
		}
		i++;
	} while (item > 1e-6);
	cout << sum*4 << endl;
	system("pause");
	return 0;
}
/***************求PI的值***************/

/***************求阶乘后六位的值***************
int main(void) {
	const int MOD = 1000000;
	int num, S = 0;
	cin >> num;
	if (num == 25) {
		num = 25;
	}
	for (int i = 1; i < num; i++) {
		int product = 1;
		for (int j = 1; j < i; j++) {
			product = product*j%MOD;
		}
		S = (S + product) % MOD;
	}
	cout << S << endl;
	cout << (double)clock() / CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}
/***************求阶乘后六位的值***************/

/***************求一堆数据中最大和最小的书及他们的平均数(重定向版本)***************
#define LOCAL
#define INF 1000000000
int main(void) {
#ifdef LOCAL
	freopen("data.in", "r", stdin);
	freopen("data.out", "w", stdout);
#endif // LOCAL
	int x, n = 0, min = INF, max = -INF,s=0;
	while (scanf("%d",&x)==1){
		s += x;
		if (x < min)min = x;
		if (x > max)max = x;
		n++;
	}
	cout << min << "\t" << max << "\t" << s / n << endl;
	system("pause");
	return 0;
}
/***************求一堆数据中最大和最小的书及他们的平均数(重定向版本)***************/

/***************求一堆数据中最大和最小的书及他们的平均数(文件版本)***************/
#define INF 1000000000
int main(void) {
	FILE *fin, *fout;
	fin = fopen("data.in", "rb");
	fout = fopen("data.out", "wb");
	int x, n = 0, min = INF, max = -INF, s = 0;
	while (fscanf(fin,"%d", &x)==1) {
		s += x;
		if (x < min)min = x;
		if (x > max)max = x;
		n++;
	}
	fprintf(fout, "%d %d %.3f\n", min, max, (double)s / n);
	fclose(fin);
	fclose(fout);
	//system("pause");
	return 0;
}
/***************求一堆数据中最大和最小的书及他们的平均数(文件版本)***************/

