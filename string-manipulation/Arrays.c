#include<stdio.h>
int main()
{
    int my_array[5]={21,35,4,56,67};

    printf("Numbering this %d",my_array[3]);

    for(int i=0;i<5;i++){
        printf("\nThis is index %d",my_array[i],"\n");
    }
}