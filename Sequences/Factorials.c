#include<stdio.h>

// Double is floating-point number 64-bit

// long double doesn't work

double factorials(int n){

// Creating a condtion and the terminator for the otherwise infinite recursion 

    if(n<=1)
    {
        return 1;
    }
    else{

        return n*factorials(n-1);
    }

}

int main()

{
    // Calling the function

    // .Olf to print without any decimals

    printf("%.0lf\n",factorials(20));

    return 0;
}