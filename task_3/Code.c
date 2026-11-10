#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
	setlocale(LC_CTYPE, "RUS");
	float x, y;
	char c;
	printf("Введите: 'число' 'арифметический знак' 'число'\n");
	scanf("%f %c %f", &x, &c, &y);
	switch (c)

	{
	case '+':
		printf("=%f\n", x + y);
		break;
	case '-':
		printf("= %.1f\n", x - y);
		break;
	case '/':
		printf("= %.1f\n", x / y);
		break;
	case '^':
		printf("= %.1f\n", pow(x, y));
		break;
	default:
		printf("Неизвестный символ\n");

	}
	return 0;
}

