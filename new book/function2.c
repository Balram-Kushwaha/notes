#include<stdio.h>

void printline(char ch);
void value(float p,float r,int n);
int main(){

    float principal,inrate;
    int period;

    printf("enter princpal amount ,inrate");
    printf("rate,and period\n");

    scanf("%f %f %f",&principal, &inrate,&period);
    printline('b');
    value(principal,inrate,period);
    printline('b');

}


void printline(char ch){
    int i;
    for(i=0;i<=52;i++){
        printf("%c",ch);
    }
    printf("\n");
}


void value(float p,float r,int n){
    int year;
    float sum;
    sum=p;
    year = 1;
    while(year<=n){
        sum=sum*(1+r);
        year=year+1;
    }

    printf("%f\t%f\t%d\t%f\n",p,r,n,sum);
}