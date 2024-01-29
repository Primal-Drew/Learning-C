#include <stdio.h>

int main()
{
    // Program adds up to ten numbers
    int num = 0;
    for(int i=0;i<=10;i++){

        printf("Enter the %dth number:",i);
        scanf("%d",&num);

        if(num <0){
            break;
        };

        int sum = sum + num;
        
        printf("\n%d",sum);


        
    }

    return 0;
}