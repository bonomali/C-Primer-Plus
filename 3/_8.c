#include<stdio.h>
int main(void) {
	float cup;
	float pint;
	float ounce;
	float spoon;
	float teaspoon;
	scanf("%f", &cup);
	pint = cup / 2;
	ounce = cup * 8;
	spoon = ounce * 2;
	teaspoon = spoon * 3;
	printf("pint: %f, ounce: %f, spoon: %f, teaspoon: %f", pint, ounce, spoon, teaspoon);
}