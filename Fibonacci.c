#include <stdio.h>

long long int fibo()
{
    int n;
    printf("Enter:");
    scanf("%d", &n);
    long long int fibosqn[n+1];
    fibosqn[0] = 0;
    fibosqn[1] = 1;

    if (n == 0)
    {
        return fibosqn[0];
    }
    else if (n == 1)
    {
        return fibosqn[1];
    }
    else
    {
        for (int i = 2; i <= n; i++)
        {
            fibosqn[i] = fibosqn[i - 1] + fibosqn[i - 2];
        }
        return fibosqn[n];
    }
}
int main()
{
    int exit;
    long long int f = fibo();
    printf("FIBO=%lld\n", f);

    scanf("%d", &exit);
    
}