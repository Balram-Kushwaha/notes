
#include<iostream>

#include<string.h>

using namespace std;

void firstandlast(string s,char c ,int *ft , int *lt ){

   for(int i=0;i<s.size();i++){
    if(s[i]==c){
        *ft=i;
        break;
    }
   }
   for(int i=s.size()-1;i>=0;i--){
    if(s[i]==c){
        *lt=i;
        break;
    }
   }
                                                                                                                                
}
int main(){
// int x=5;

// float y=5.99;

// float *ptr=&y;
// cout<<"value at ptr is:"<<*ptr<<endl;

// cout<<ptr<<endl;

// int *p;

// p=&x;

// cout<<p<<endl;

// cout<<"value at present at p:"<<*p<<endl;


// int x,y;

// cin>>x>>y;

// int *a=&x;
// int *b=&y;

// int result;

// int *r=&result;

// *r=*a+*b;

// cout<<*r<<endl;

// *r=50;

// cout<<result;

string s="ablaram";

int start =-1;

int end=-1;

int *f=&start;
int *l=&end;

char c='a';

firstandlast(s,c,f ,l);

cout<<start<<" "<<end<<endl;

cout<<*f<<" "<<*l;























    return 0;
}