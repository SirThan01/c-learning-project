//2d_arrays.c
/*
A two-dimensional array
in C is an array in which
each element is itself an array
Think of it as a table with rows and columns.
*/
/*
type and[number of rows][number of columns];
int matrix[3][5]; 3 rows, 5 columns
*/
/*
Complete
int matrix[2][3] = {{1, 2, 3}, {4, 5, 6}};

Incomplete — missing columns will be filled with zeros
int matrix[2][3] = {{1, 2}, {4}}; // Result: {{1,2,0},{4,0,0}}

You can do without the inner parentheses (but the compiler
will fill them in row by row)
int matrix[2][3] = {1, 2, 3, 4, 5, 6};

Specifying only the column sizes
int matrix[][3] = {{1, 2, 3}, {4, 5, 6}};  The compiler will calculate
the rows automatically
matrix[0][1] = 10;  Second element of the first row
int value = matrix[1][2]; Element of the third column of the second row
*/
#include <stdio.h>

#define COLS 4
#define ROWS 3

int main() {
    int arr[ROWS][COLS];
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            arr[i][j] = i * j;
        }
        return 0;
    }
}
