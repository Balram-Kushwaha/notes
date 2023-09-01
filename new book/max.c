#include <stdio.h>
int main()
{
    int i,j,e,f,k,z;
    int mul[2][2] = {0};
    int arr[2][2] = {{1,2},{23,5}};
    int array[2][2] = {{24,34},{2,5}};

  printf("enter the matrics 1\n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            
             printf("%d ",arr[i][j]);
         }
         printf("\n");
    }
     printf("enter the matrics \n");
       for(e=0;e<2;e++){
    for(f=0;f<2;f++){
      
            
             printf("%d ",array[e][f]);
      }
    printf("\n");
    }
  printf("multiplication of two matrics\n");

  for(i=0;i<2;i++){
    for(k=2;k>=1;k--){
    for(j=0;j<2;j++){
      mul[i][j]=arr[i][j]*array[i][j]+arr[i][k]*array[k][j]+mul[i][j];

      printf("%d ",mul[i][j]);
    }
    }
    printf("\n");
  }
    
      
}
   
    
            
         

           
            
    
    