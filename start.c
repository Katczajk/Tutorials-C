#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "start.h"
#include "funct.h"

	struct Videos
	{
		int laenge;
		char *autor[13];
	} video;

int main(int argc, char *argv[]) {

	char autor[13] = "John Connery";

	video.laenge = 90;
	video.*autor = &autor;

	printf("Der Film hat eine Laenge von %i vom Autor %s", video.laenge, video.autor);

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

