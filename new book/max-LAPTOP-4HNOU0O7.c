#include <stdio.h>
int main()
{
    int i,j;
    int transpose[3][3];
    int a[3][3]={{1,2,3},{5,7,9},{8,6,4}};
    int b[3][3];
   printf("enter the first matrics\n");
  //  for(i=0;i<3;i++){
  //   for(j=0;j<3;j++){
  //    scanf("%d ",a[i][j]);
     
  //   }
  //  }

  for(i=0;i<3;i++){
    for(j=0;j<3;j++){
     printf("%d ",a[i][j]);
     
    }
    printf("\n");
  }
// printf("trance of the matrice matrice");
 for(i=0;i<3;i++){
    for(j=0;j<3;j++){
     b[i][j]=a[j][i];
    }
  }
  printf("transpose of the matrics\n");
  for(i=0;i<3;i++){
    for(j=0;j<3;j++){
     printf("%d ",b[i][j]);
    }
    printf("\n");
      
}
}
  
   
    
            
         

           
            
    
    