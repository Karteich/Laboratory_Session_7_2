#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <locale.h>
#include <math.h>

int task_1() {
	setlocale(LC_CTYPE, "RUS");
	char simvol;
	printf("Введите символы 'a' или 'b': ");
	scanf("%c", &simvol);
	switch (simvol)

	{
	case 'a':
		printf("Введено 'a'.\n");
		break;
	case 'b':
		printf("Введено 'b'.\n");
		break;
	default:
		printf("Неизвестный символ\n");

	}
	return 0;
}

int task_2() {
	setlocale(LC_CTYPE, "RUS");
	int number;
	printf("Введите символы 1 or 2: ");
	scanf("%d", &number);
	switch (number)

	{
	case 1:
		printf("Введено 1.\n");
		break;
	case 2:
		printf("Введено 2.\n");
		break;
	default:
		printf("Неизвестный символ\n");

	}
	return 0;
}

int task_3() {
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

int main() {
	task_3();
}