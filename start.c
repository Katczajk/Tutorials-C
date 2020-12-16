#include <stdio.h>
#include <strings.h>

#include "start.h"
#include "funct.h"

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

