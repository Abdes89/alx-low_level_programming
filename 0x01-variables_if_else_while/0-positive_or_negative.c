#include <stdlib.h>
#include <time.h>
/* if else while */

/* Positive anything is better than negative nothing */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	scanf("%d",&n);
	if(n>0)
	{
		printf("%d is positive",n);
	}
	if(n=0)
        {
                printf("%d is zero",n);
        }
	if(n<0)
        {
                printf("%d is negative",n);
        }
	return (0);
}
