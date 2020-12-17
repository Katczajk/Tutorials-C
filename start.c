#include <stdio.h>
#include <string.h>

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

	return 0;

}

