#include<stdio.h>
int counter(){
    int number;
    int exit;

    printf("Enter the number:");
    scanf("%d",&number);

    while(number>0){
        number--;
        printf("Countdown: %d\r",number);
    }

    scanf("%d",exit);

    return 0;
}

int main()
{
    counter();
}