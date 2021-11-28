# include <stdio.h>
# include <stdbool.h>
# include "my_mat.h"
// # define True 1
// # define False 0
# define SIZE 10

int main()
{
    char functionName;
    int mat[SIZE][SIZE]={0};
    int route_mat[SIZE][SIZE] ={0};
    printf("enter A/B/C/D\n");
    scanf("%c", &functionName); // the menu: A, B, C - functions. D - exit, anything else - do nothing
    while (functionName != 'D') // D - exit
    {
        int i, j;
        if (functionName == 'A') // A function - creation of the mat
        {
            printf("enter 100 numbers\n");
            int toFill[SIZE*SIZE]; // until 100?
            for(int i=0;i<SIZE*SIZE;i++)
            {
                printf("%d",scanf("%d", &toFill[i]));
            }
            printf("fail here");
            mat_maker(toFill,mat,route_mat);
        }
        if (functionName == 'B') // B function - boolean func for neighbors vertics
        {
            printf("enter 2 numbers\n");
            scanf("%d %d", &i, &j);
            if (is_route_between(route_mat,i, j) == true)
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
            printf("enter 2 numbers\n");
            scanf("%d %d", &i, &j);
            shortest_route(route_mat,i, j);
            printf("\n");
        }
        scanf("%c", &functionName); // the menu after we made our first function choose
    }
    printf("thats it\n");
    return 1;
}