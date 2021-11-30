# ifndef MY_MAT_H
# define MY_MAT_H
# define SIZE 10

/* will create a 10x10 matrix with a 100 given integers array */
int mat_maker(int [SIZE][SIZE],int [SIZE][SIZE]);

/* will return if there is a routh between two vertices in a graph */
int is_route_between(int[SIZE][SIZE],int, int);

/* will return the shortest routh between two vertices in a graph.
if the routh doesn't exsist - it will return -1 */
int shortest_route(int[SIZE][SIZE],int, int);


# endif