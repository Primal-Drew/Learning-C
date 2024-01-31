#include <stdio.h>

float ave(int n){
    int numbers[n+1];
    int sum=0;

    for(int i=0;i<n;i++){
        printf("Enter:");
        scanf("%d",&numbers[i]);

        sum += numbers[i]; }
        float aver =sum/n;
        return aver;
    
}

int main(){

    float average =ave(5);
    printf("\n\n%f\n",average);
    return 0;

    }

 
