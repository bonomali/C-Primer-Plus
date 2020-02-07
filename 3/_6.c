#include<stdio.h>
int main(void) {
	float hydrone = 3.0e-23;
	int n;
	scanf("%d", &n);
	printf("%e", n * 950 / hydrone);
}