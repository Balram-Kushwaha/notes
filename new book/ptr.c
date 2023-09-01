#include<stdio.h>

int main(){
    char *name;
    int length;
    char *cptr = name;
    name = "DELHI";
    printf("%s\n",name);
    while(*cptr != '\0'){
        printf("%c is storedn at address %u\n",*cptr,cptr);
        cptr++;

    }

    length = cptr -name;
    printf("\nlength of string = %d\n",length);


    return 0;
}