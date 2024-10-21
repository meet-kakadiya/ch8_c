#include<stdio.h>



 main() 
 {
    int row, col;
    int a[row][col];
    int largest;

    
    printf("Enter the number of row: ");
    scanf("%d", &row);
    printf("Enter the number of column: ");
    scanf("%d", &col);

    
    
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
        
          printf("\n");
    }
    
    printf(" output in  matrix form: ");
    
      for(i=0; i<row; i++)
     	{
	  for(j=0; j<column; j++)
	{
		printf("%d ",a[i][j]);
				
    } 
    
    
    
    
    
    

    
   
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (a[i][j] > largest) {
                largest = a[i][j];
            }
        }
    }

    printf(" the array is: %d\n", largest);

    
}