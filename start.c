#include <stdio.h>
#include <strings.h>

#include "start.h"
#include "funct.h"

int main(int argc, char *argv[]) {

	int a[3] = {42,1337,50}; /* array int 3 vars */
	int *ptr = a; /* Pointer to var a */

	int anzahl = 50;
	output(&anzahl);

	int zahl1 = FUENF;
	int zahl2 = FUENF;
	int ergebnis = 0;
	ergebnis = berechnen(&zahl1,&zahl2,&ergebnis);
	ausgabe(&zahl1,&zahl2,&ergebnis);
	
	printf("%d %d %d \n", *ptr, *(ptr+1),*(ptr+2));

	return 0;

}

