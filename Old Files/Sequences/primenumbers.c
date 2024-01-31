#include <stdio.h>
#include <stdio.h>

int isPrime(int num)
{
    if (num <= 1)
        return 0;

    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

void generatePrimes(int limit)
{
    int count = 0;
    printf("Prime numbers up to %d:\n", limit);

    for (int i = 2; i <= limit; i++)
    {
        if (isPrime(i))
        {
            printf("%d ", i);
            count++;
        }
    }
    printf("\nTotal prime numbers found: %d\n", count);
}

int main()
{
    int limit = 10; 
    generatePrimes(limit);
    return 0;
}
