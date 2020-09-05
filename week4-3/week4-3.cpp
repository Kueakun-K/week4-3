#include<stdio.h>

int max(int x, int y,int z) {
	if (x >= y and x >= z)
		return x;
	else if (y >= x and y >= z)
		return y;
	else
		return z;
}

int main() {
	int x[5][4];
	int sum[5];
	for (int i = 0; i <= 4; i++) {
		scanf_s("%d %d %d %d", &x[i][0], &x[i][1], &x[i][2], &x[i][3]);
		sum[i] = x[i][0] + x[i][1] + x[i][2] + x[i][3] ;
	}
	printf("%d",max(max(sum[0],sum[1],sum[2]),sum[3],sum[4]));
	return 0;
}



