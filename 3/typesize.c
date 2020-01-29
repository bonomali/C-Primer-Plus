#include<stdio.h>
int main(void) {
	printf("Type int has a size of %zd btyes.\n", sizeof(int));
	printf("Type char has a size of %zd btyes. \n", sizeof(char));
	printf("Type long has a size of %zd btyes. \n", sizeof(long));
	printf("Type long long has a size of %zd bytes. \n", sizeof(long long));
	printf("Type dobule has a size of %zd bytes. \n", sizeof(double));
	printf("Types long double has a size of %zd bytes. \n", sizeof(long double));

	return 0;
}