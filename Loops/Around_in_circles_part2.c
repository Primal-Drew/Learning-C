#include<stdio.h>
int main()
{   //Declaration of count variable
    int count =0;
    /* For and while have diffenrent syntax
            For(int a,condtion,a++){Statement}

            //While however you must initialize the value of a 
                int a
            //Then introduce the While
                while(condtion){Statement}
            //Then a++
                a++
    
    */
    while(count<5)
    {
        printf("It took a while but I am finally impressed\n");
        count++;
    }
}