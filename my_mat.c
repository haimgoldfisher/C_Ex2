# include <stdio.h>
# include <stdbool.h>
# include "my_mat.h"
// # define True 1
// # define False 0
# define SIZE 10



int floyd_warshall(int mat[SIZE][SIZE],int route_mat[SIZE][SIZE]);

int mat_maker(int toFill[],int mat[SIZE][SIZE],int route_mat[SIZE][SIZE]) // use pointer!!!!
{
    int i, k, l;
    for (k = 0; k < SIZE; k++)
    {
        for (l = 0; l < SIZE; l++)
        {
            mat[k][l] = toFill[i++];
        }
    }
    floyd_warshall(mat, route_mat);
    return 1;
}

int is_route_between(int route_mat[SIZE][SIZE],int i, int j)
{
    if (route_mat[i][j] != 0)
    {
        return true;
    }
    return false;
}

int shortest_route(int route_mat[SIZE][SIZE],int i, int j)
{
    int result = -1;
    if (is_route_between(route_mat,i ,j) == true)
    {
        result = route_mat[i][j];
        printf("%d",result);
        return 1;
    }
    printf("%d",result);
    return 1;
}


int floyd_warshall(int mat[SIZE][SIZE],int route_mat[SIZE][SIZE]){
    int i, j, k;
    for(i=0;i<SIZE;i++)
    {
        for(j=0;j<SIZE;j++)
        {
            route_mat[i][j] = mat[i][j];
        }
    }
    for(k=0;k<SIZE;k++)
    {
        for(i=0;i<SIZE;i++)
        {
            for(j=0;j<SIZE;j++)
            {
                int new_value = 0;
                if(route_mat[i][k]!=0 && route_mat[k][j]!=0)
                {
                    new_value = route_mat[i][k] + route_mat[k][j];
                }
                else
                {
                    continue;
                }
                if(route_mat[i][j] == 0 && new_value!=0)
                {
                    route_mat[i][j]=new_value;
                    continue;
                }
                if(new_value<route_mat[i][j])
                {
                    route_mat[i][j] =new_value;
                }
            }
        }        
    }
    return 1;
}