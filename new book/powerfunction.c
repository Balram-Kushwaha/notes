#include<stdio.h>

int main(){

    int x,y;
    double power(int x,int y); /*prototype declaration*/
    printf("enter x,y");
    scanf("%d %d",&x,&y);
    printf("%d to the power %d is %f\n",x,y,power(x,y));

}

double power(int x,int y){
    double p;
    p=1.0;
    if(y>=0){
        while(y--){
            p *=x;
        }
    }
        else{
            while(y++){
                p /=x;
            
        
    }
        }
    return(p);
}