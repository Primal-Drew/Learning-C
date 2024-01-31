#include <stdio.h>

int main()
{
    int three[3][3][3];

    for(int a=0;a<3;a++){
        for(int b=0;b<3;b++){
            for(int c=0;c<3;c++){
                three[a][b][c] = a*b*c;
                printf("\n%d\n",three[a][b][c]);  
                printf("a:%d b:%d c:%d\n",a,b,c); 
            }
        }

    };

}