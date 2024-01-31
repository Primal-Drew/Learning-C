#include <stdio.h>
#include <string.h>


struct car
{

    int modelno;
    char modelname[50];
};


char* my_strncpy(char* dst, const char* src, size_t n){

    size_t i = 0;

    //copy until null byte
    while(i < n && src[i] != '\0'){
        dst[i] = src[i];
        i++;
    }

    while(i < n){
        dst[i] = '\0';
        i++;
    }

    //null terminate

    return dst;
}

int main()
{

    struct car Mercedes;
    Mercedes.modelno = 245;

    my_strncpy(Mercedes.modelname, "Sportcar", 50);

    printf("%d\n", Mercedes.modelno);

    printf("%s\n", Mercedes.modelname);
}