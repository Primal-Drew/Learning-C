#include <stdio.h>

int main(){

    int my_array[5]={2,3,4,5,3};
    
    my_array[0] = 7;

    my_array[4]=23;

    //Displaying output

    printf("index[0]=%d",my_array[0]);
    printf("index[1]=%d",my_array[1]);
    printf("index[2]=%d",my_array[2]);
    printf("index[3]=%d",my_array[3]);
    printf("index[4]=%d",my_array[4]);

    //Taking user input into an array
    printf("Enter new:");
    scanf("%d",my_array[0]);
    




}