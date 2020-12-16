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
