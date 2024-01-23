#include<stdio.h>
#define maximum 100
int printer()
{   int exit;
    int number;
    char word[maximum];
    printf("The Word:");
    fgets(word,sizeof(word),stdin);
    
    printf("\nNumber of reprints:");
    scanf("%d",&number);
    
    for(int z;number>0;number--){
        printf("\n %s \n",word);
    }
    printf("Press Enter...");
    scanf("%d",exit);

    return 0;
    


}
int main ()
{
    printer();
}