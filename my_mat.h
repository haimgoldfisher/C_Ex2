# ifndef MY_MAT_H
# define MY_MAT_H

/* will create a 10x10 matrix with a 100 given integers array */
int mat_maker(int[][], int[]);

/* will return if there is a routh between two vertices in a graph */
int is_routh_between(int[][], int, int);

/* will return the shortest routh between two vertices in a graph.
if the routh doesn't exsist - it will return -1 */
int shortest_routh(int[][], int, int);

# endif