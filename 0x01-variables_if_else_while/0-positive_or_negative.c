#include <stdio.h> // Include the standard I/O header
#include <stdlib.h> // Include the standard library header
#include <time.h> // Include the time header

int main(void)
{
    int n;
    srand(time(0));
    n = rand() - RAND_MAX / 2;

    if (n > 0)
    {
        printf("%d is positive\n", n);
    }
    else if (n == 0)
    {
        printf("%d is zero\n", n);
    }
    else
    {
        printf("%d is negative\n", n);
    }

    return (0);
}
