#include<stdio.h>
int addition(){
    printf("Enter value of num1:");
    int num1;
    int exit;
    scanf("%d",&num1);
    printf("Enter value of num2:");
    int num2;
    scanf("%d",&num2);
    int result;
    result = num1 + num2;
    printf("\nThe result is:%d",result);
    printf("\nNumber input to exit...");
    scanf("%d",&exit);
    return result;
}
int main()
{
    addition();
}