#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "start.h"
#include "funct.h"

	struct Videos
	{
		int laenge;
		char autor[50];
	} video;

int main(int argc, char *argv[]) {

	char autor[13] = "John Connery";

	struct Videos Video1;  
	Video1.laenge = 10;
	strcpy(Video1.autor, autor);
	
	printf("Der Film hat eine Laenge von %imin vom Autor %s \n", Video1.laenge, Video1.autor);
	
	const char myString[] = { 'H','i','\0' };
	const char myString2[] = "Hi";
	char ergebnis[sizeof(myString2)];
	
	strcpy(ergebnis, myString2);

	int len = sizeof(myString);

	printf("String Len is %i\n", len);

	printf("String mit Array	 	-> %s\n", myString);
	printf("String mit \"\" geschrieben 	-> %s\n", myString2);
	printf("String Ergebnis mit Strcpy 	-> %s\n", ergebnis);
	
	char input[] = "Test";  /* create some char unknown lengs calc with input */
	char String[strlen(input)]; /* setup length from input */
	strcpy(String,input); /* copy string input to String */
	printf("Ausgabe %s plain String\n",String); /* output content to console */

	system("pause");

	return 0;

}

