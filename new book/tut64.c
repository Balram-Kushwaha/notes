#include<stdio.h>

int main(){

FILE *ptr = NULL;
char string[34] = "this contant was prodused by tut64.c";
ptr = fopen("myfile.txt","r");
fscanf(ptr,"%s",string);
printf("the content of this file has %s\n",string);

// ptr = fopen("myfile.txt","w");
// fprintf(ptr,"%s",string);


return 0;
}