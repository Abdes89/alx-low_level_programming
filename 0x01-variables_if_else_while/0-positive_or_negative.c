#include <stdlib.h>
#include <time.h>
#include <stdio.h>
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
		printf("%d is positive\n",n);
	}
	else if(n==0)
        {
                printf("%d is zero\n",n);
        }
	else
        {
                printf("%d is negative\n",n);
        }
	return (0);
}
