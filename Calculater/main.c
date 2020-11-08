#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	double num1;
	double num2;
	char c;
	double result;
	printf("Enter a number:\n");
	scanf("%lf", &num1);
	printf("Enter a number:\n");
	scanf("%lf", &num2);
	printf("Enter a operator\n");

	scanf(" %c", &c);
	if (c == '+') {
		printf("%f", result = num1 + num2);
	}

	else if (c == '-') {
		printf("%f", result = num1 - num2);
	}
	else if (c == '/') {
		printf("%f", result = num1 / num2);
	}
	else if (c == '*') {
		printf("%f", result = num1 / num2);
	}
	else {
		printf("error");
	}

	return 0;


}

