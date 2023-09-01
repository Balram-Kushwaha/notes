#include<stdio.h>

int main(){
float total=0.0,value;
int i;
float a[10];
printf("enter the element ");
for(i=0;i<10;i++){
    scanf("%d",value);
   a[i]=value;
}



for(i=0;i<10;i++){

    total=total+a[i]*a[i];

  
}

// for(i=0;i<10;i++){
//     printf(" the average is %d",sum[i]);
// }

 printf("total is %d",total);

return 0;
}