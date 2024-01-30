#include <stdio.h>
int main()
{
    int array[5];

    for (int i = 0; i < 5; i++)
    {
        array[i] = i;
        printf("Value:%d\n", array[i]);
    }
    printf("Adress:%p\n", array);
    printf("Adress of array[0]:%p\n\n\n", &array[0]);

    int *p = &array[1];
    printf("Value is;%d , %d\n\n", *p, array[1]);

    *array+1 = 10;

    for (int i = 0; i < 5; i++)
    {
        printf("Value:%d\n", array[i]);
    }
}