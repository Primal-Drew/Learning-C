#include <stdio.h>

int main()
{
    int storage;
    int no;

    printf("How many;");
    scanf("%d", &no);

    int mynumbers[no];

    for (int i = 0; i < no; i++)
    {
        printf("\nNumber%d  ", i);
        scanf("%d", &storage);

        mynumbers[i] = storage;

        static int sum = 0;

        sum += storage;

        printf("Sum:%d", sum);


        int ave = sum / no;


        printf("%d", ave);
    }
    return 0;
}
