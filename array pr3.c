#include <stdio.h>

int main() {
    int row , column;

    
    printf("Enter the number of row size: ");
    scanf("%d", &row);
    printf("Enter the number of column  size: ");
    scanf("%d", &column);

    int matrix[row][column],a[column][row];

    
    printf("Enter the elements of the matrix size :\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }


    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
                a[j][i] = matrix[i][j];
        }
    }

    
    printf("enter num of the  size :\n");
    for (int i = 0; i < column; i++) {
        for (int j = 0; j < row; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    
}