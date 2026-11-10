#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_CTYPE, "RUS");
	char simvol;
	printf("Введите символы 'a' or 'b': ");
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