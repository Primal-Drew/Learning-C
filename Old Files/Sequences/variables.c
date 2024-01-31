#include <stdio.h>

int main()
{
    for (int i =0;i<10;i++){
        static int m = 0;
        m +=5;
        printf("%d\n",m);
    }
}