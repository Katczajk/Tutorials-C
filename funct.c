#include "funct.h"

int output(const int *anzahl)
{
	int a = 1;
	while (a > 0, a < *anzahl+1)
	{
		printf("Works, run Count: %i \n", a);
		a++;
	}
	return 0;

}

void ausgabe(const int *zahl1, const int *zahl2, int *ergebnis)
{
	printf("Die Multiplikation von Zahl1: %i und Zahl2: %i ist %i \n", *zahl1, *zahl2, *ergebnis);
}

int berechnen(const int *zahl1, const int *zahl2, int *ergebnis)
{	
	*ergebnis = *zahl1 * *zahl2;

	return *ergebnis;
}
