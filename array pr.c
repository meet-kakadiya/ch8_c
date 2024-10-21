// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int size;
    
    printf(" enter number of elements");
    scanf("%d",&size);
    
    int a[size];
    int i;
    
    printf(" \n\n array input \n\n");
    
    for(i=0; i<size; i++)
    {
        
        printf(" enter element %d",i+1);
        scanf("%d",&a[i]);
        
    }
    
     printf(" negetive number elements ");
     
     for(i=0; i<size; i++)
     {
         if(a[i]<0)
         {
             printf("%d",a[i]);
         }
         
          printf("\n");
     }
       
    
    
    
}