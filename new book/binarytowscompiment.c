#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
    char a[16];
    int i,j,k,len;
    clrscr();
    printf("enter a binary number");
    gets(a);
    len = strlen(a);
    for(k=0;a[k] !='\0';k++){
        if(a[k]!='0'&&a[k]!='1'){
            printf("\nincorrect binary number format...the program will quit");
            getch();
            exit(0);
        }
    }
    for(i=len-1;a[i]!='1';i--){
        for(j=i-1;j>=0;j--){
            if(a[j]=='1'){
                a[j]='0';

            }
            else{
                a[j]='1';
            }
            
        }

    }
    printf("\n2's compliment = %s",a);
            getch();

}