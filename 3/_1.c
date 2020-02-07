#include<stdio.h>
int main(void) {
	int i = 2147483647;
	float f = 3.14e38;
	printf("%d,%d\n", i, i + 1);
	printf("%e,%e, e%", f, f * 100.0f, f * -100.0f);
}