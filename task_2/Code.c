#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_CTYPE, "RUS");
	int number;
	printf("Введите символы 1 or 2: ");
	scanf("%c", &number);
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