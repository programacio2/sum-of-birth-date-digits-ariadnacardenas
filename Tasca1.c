#include <stdio.h>

int main()
{
	int day, month, year;
	printf("Introduce el dia de tu cumpleaños: ");
	scanf_s("%d", &day);
	printf("Introduce el mes de tu cumpleaños: ");
	scanf_s("%d", &month);
	printf("Introduce tu año de nacimiento en 4 digitos: ");
	scanf_s("%d", &year);

	printf("%d + %d +%d = %d", day, month, year, day + month + year);
}