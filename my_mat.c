# include <stdio.h>
# define True 1
# define False 0

int mat_maker(int mat[][], int toFill[]) // use pointer!!!!
{
    int i, k, l;
    for (k = 0; k < 10; k++)
    {
        for (l = 0; l < 10; l++)
        {
            mat[k][l] = toFill[i++];
        }
    }
    return 1;
}

int is_routh_between(int mat[][], int i, int j)
{
    if (/* condition */)
    {
        return True;
    }
    return False;
}

int shortest_routh(int mat[][], int i, int j)
{
    if (is_routh_between(mat, i ,j) == True)
    {
        /* code */
    }
    printf("-1");
    return 1;
}