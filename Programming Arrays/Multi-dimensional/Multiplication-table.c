#include <stdio.h>



int** getCordinates(int rows, int cols){


    //int cordinates[rows][cols]

    int** cordinates = (int**)malloc(rows * sizeof(int));

    for(int i=0; i < rows; i++){
        cordinates[i] = (int*)malloc(cols * sizeof(int));
    }


    for(int i=0; i < rows; i++){
        for(int j=0; j< cols; j++){
            cordinates[i][j] = 0;
        }
    }

    return cordinates;

}

int** m_table(int numb)
{   

    int table[numb][numb];

    table = malloc(sizeof());



    for (int a = 0; a < numb; a++)
    {
        table[0][a] = a;
        static int b = 0;
        table[b][0] = b;
        b++;
    }
    int x = 1;
    for (int y = numb; x != numb; y--)
    {
        table[x][y] = x * y;
        if (y = 1)
        {
            x++;
            y = numb;
        }
    }

    return table;
}

int main()
{
    int* d=m_table(4);

    int** cordinates = getCordinates(2, 3);

    cordinates[0][0] = 1;
    cordinates[0][1] = 2;

    for(int i = 0; i < 2; i++){
        free(cordinates[i]);
    }

    free(cordinates);
}

//INCOMPLETE
