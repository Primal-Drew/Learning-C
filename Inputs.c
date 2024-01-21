#include<stdio.h>
#define Maxi 100
int main()
{   
   //Initialize all variable in inputs 
    int a;
    int c;
    int b;
    int h;
    char z[Maxi];

    printf("Enter your name:");
    fgets(z,sizeof(z),stdin);

    printf("\nThank you %s",z);

    printf("\n Enter the value of a\n");
    scanf("%d",&a);

    printf("Enter the value of b\n");
    scanf("%d",&b);

    c = a+b;
    printf("\nThe answer is %d ",c);

    printf("\nENTER ANY NUMBER TO EXIT...");
    scanf("%d",&h);

    return 0;
}