#include <stdio.h>
#include <stdlib.h>

int *int_array(int n)
{
    int *num;
    num = (int *)malloc(100);
    if (num == NULL)
    {
        return NULL;
    }

    for (int i = 0; i < n; i++)
    {

        printf("%d Enter:", i);
        scanf("%d", num + i);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d", *(num + i));
    }

    return num;
}

int main()
{
    int *list = int_array(6);

    if (list == NULL)
    {
        exit(0);
    }

    free(list);
}