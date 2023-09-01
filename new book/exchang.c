#include<stdio.h>
void exchange(int *a,int *b);
int main(){
    int x,y;
    x=100;
    y=200;
    printf("before exchanging x=%d  y=%d\n\n",x,y);
    exchange(&x,&y);
    printf("after exchanging x=%d  y=%d\n\n",x,y);
}

void exchange(int *a,int*b){
    int t;
    t=*a;
    *a=*b;
    *b=t;
}