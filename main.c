#include <stdio.h>
#include "my_mat.h"
# define True 1
# define False 0

int main()
{
    char functionName;
    int mat[10][10] = {0};
    scanf("%c", &functionName); // the menu: A, B, C - functions. D - exit, anything else - do nothing
    while (functionName != 'D') // D - exit
    {
        int i, j;
        if (functionName == 'A') // A function - creation of the mat
        {
            scanf();
            mat_maker(mat, );
        }
        if (functionName == 'B') // B function - boolean func for neighbors vertics
        {
            scanf("%d %d", &i, &j);
            if (is_routh_between(mat, i, j) == True)
            {
                printf("True\n");
            }
            else
            {
                printf("False\n");
            }
        }
        if (functionName == 'C') // C function - creation of the mat
        {
            scanf("%d %d", &i, &j);
            shortest_routh(mat, i, j);
            printf("\n");
        }
        scanf("%c", &functionName); // the menu after we made our first function choose
    }
    return 1;
}