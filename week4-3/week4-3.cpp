#include<stdio.h>

int max(int x, int y) {
	if (x > y)
		return x;
	else
		return y;
}

int main() {
	int x[5][5];
	int sum[5];
	for (int i = 0; i <= 4; i++) {
		scanf_s("%d %d %d %d %d", &x[i][0], &x[i][1], &x[i][2], &x[i][3], &x[i][4]);
		sum[i] = x[i][0] + x[i][1] + x[i][2] + x[i][3] + x[i][4];
	}
	printf("%d",max(max(max(sum[0],sum[1]),max(sum[2],sum[3])),sum[4]));
	return 0;
}



