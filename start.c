#include <stdio.h>
#include <strings.h>

#include "funct.h"
#include "start.h"


int main(int argc, char *argv[]) {

	int anzahl = 50;
	output(&anzahl);

	int zahl1 = FUENF;
	int zahl2 = FUENF;
	int ergebnis = 0;
	ergebnis = berechnen(&zahl1,&zahl2,&ergebnis);
	ausgabe(&zahl1,&zahl2,&ergebnis);
	
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
