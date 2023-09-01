#include<stdio.h>
int ROW =5;
int COLUMN=5;
int main(){
int row,column,product[ROW][COLUMN];
int i,j;
printf("multiplivation table");
printf(" ");
for(j=1;j<=COLUMN;j++){
    printf("%4d",j);
    printf("\n");
    printf("________________");
    for(i=0;i<ROW;i++){
        row=i+1;
        printf("%2d |",row);
        for(j=1;j<=COLUMN;j++){
            column=j;
            product[i][j]=row*column;
            printf("%4d",product[i][j]);
        }
        printf("\n");

    }

}
}