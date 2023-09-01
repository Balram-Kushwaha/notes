#include<stdio.h>

int factorial(int n); 
int main(){
int a;
printf("enter the value a\n");

scanf("%d",&a);
printf("%d\n",factorial(a));
}


int factorial(int n){
    int fact;
    if(n==1){
        return(1);
    }
    else{
        fact = n*factorial(n-1);
    }
    return(fact);
}