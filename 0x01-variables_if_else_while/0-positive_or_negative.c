#include <stdlib.h>

#include <time.h>

/**
*   main - Entry point
*   Return:0
*/

int main(void)

{

		int n;



		srand(time(0));

		n = rand() - RAND_MAX / 2;

		/* here if else statements are presented */

		if n > 0
			printf("%f", &n, "is positive\n");

		if n == 0
			printf("%f", &n, "is zero\n");

		else
			printf("%f", &n. "is negative\n");

		return (0);

}
