#include<stdio.h>
 void printline(void);
    void value(void);
int main(){
   
printline();
value();
printline();
    
}
// function1 printline()

void printline(void){
    int i;

    for(i=1;i<35;i++){
        printf("%c",'-');
        
    }
    printf("\n");
}

// function2 value()

void value(void){
    int year,period;
    float inrate,sum,principle;
    printf("principle amount  ");
    scanf("%f",&principle);
    printf("interest rate  ");
    scanf("%f",&inrate);
    printf("period  ");
    scanf("%d",&period);
    sum=principle;
    year=1;
    while(year<=period){
        sum=sum*(1+inrate);
        year=year+1;
    }
    printf("\n%8.2f %5.2f %5d %12.2f\n",principle,inrate,period,sum);
}