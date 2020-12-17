#include <stdio.h>
<<<<<<< HEAD
#include <string.h>
=======
#include <strings.h>
#include <stdlib.h>
>>>>>>> 150ad5e7801431733ee0525cd25d533256df0cfb

#include "start.h"
#include "funct.h"

int main(int argc, char *argv[]) {

	const char myString[] = { 'H','i','\0' };
	const char myString2[] = "Hi";
	char ergebnis[sizeof(myString2)];
	
	strcpy(ergebnis, myString2);

	int len = sizeof(myString);

	printf("String Len is %i\n", len);

	printf("String mit Array	 	-> %s\n", myString);
	printf("String mit \"\" geschrieben 	-> %s\n", myString2);
	printf("String Ergebnis mit Strcpy 	-> %s\n", ergebnis);

    system("pause");
	return 0;

}

