#include <stdio.h>

int prime(int num)
{
    /*1.Takes user input number
      2.Checks if number is either 1 or 0
      3.Divides number by to get dividend 1 is prime_number
      4.If any other number can divide   */ 
    
        if(num==0||num==1){
            return 0;}

     for (int i = 2;i<num;i++){
            
            if(num%i== 0){
                printf("%d not a prime",num);

            }
            else{
                printf("Prime number\r  ");
            }
                
            }
        }


int main()
{
    prime(10);

}

