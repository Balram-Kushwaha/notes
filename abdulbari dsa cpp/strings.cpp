#include<iostream>

#include<string>

using namespace std;

// int valid(char *name){

//     int i;

//     for(i=0;name[i]!='\0';i++){
//         if(!(name[i]>=65&&name[i]<=90)&&!(name[i]>=97&&name[i]<=127)&&!(name[i]>=48&&name[i]<=57)){
//             return 0;
//             break;
//         }
//     }

//     return 1;
// }

// void perm(char s[],int k){

//     static int a[10]={0};

//     static char res[10];

//     if(s[k]=='\0'){
//         cout<<res<<endl;
//     }

//    else{

//     for(int i=0;s[i]!='\0';i++){
//         if(a[i]==0){
//             res[k]=s[i];
//             a[i]=1;
//             perm(s,k+1);
//             a[i]=0;
//         }

//     }
// }
//    }

// void prem(char s[],int l,int h){
   
//    int i;
//   if(l==h){
//     cout<<s<<endl;
//   }
//   else{
//    for(i=l;i<=h;i++){
//        swap(s[l],s[i]);
//        prem(s,l+1,h);
//        swap(s[l],s[i]);
//          }  
//    }
// }

int main(){

    // char s[]="ABC";
    // prem(s,0,2);

    // char s[]="ABC";
    // perm(s,0);


    //string declaration  and length of a string

// char name[]="WELCOME";

// int i;

// for(i=0;name[i]!='\0';i++){
          
//           name[i]=name[i]+32;
// }
// for(i=0;name[i]!='\0';i++){

//           cout<<name[i];

// }

// cout<<i;

// char A[]="HOw are you";

// int i,vcoutn=0,ccount=0;

// int word=0;

// for(i=0;A[i]!='\0';i++){

//     if(A[i]==' '&&A[i-1]!=' '){
//          word++;
//     }
// }

// cout<<word+1;

// char *name="Anil123";

// if(valid(name)){
//     cout<<"string is valid";
// }
// else{
//     cout<<"string is not valid";
// }

// char a[7]="python";

// char b[7];

// int i;

// int j;

// for(int i=0;a[i]!='\0';i++){

// }
// i=i-1;

// for( j=0;i>=0;i--,j++){
//     b[j]=a[i];
// }

// b[j]='\0';

// for(int j=0;b[j]!='\0';j++){
    
//     cout<<b[j];
// }

//revrse a string by swaping method

// char a[]="python";

// char t;

// int i,j;

// for(j=0;a[j]!='\0';j++){

// }

// j=j-1;

// for(i=0;i<j;i++,j--){
//     t=a[j];
//     a[j]=a[i];
//     a[i]=t;
// }

// for(int i=0;a[i]!='\0';i++){
//     cout<<a[i];
// }

//comparing a string 

// char a[]="painter";

// char b[]="painter";

// int i,j;

// for(i=0,j=0;a[i]!='\0'&&b[j]!='\0';i++,j++){
//     if(a[i]!=b[j]){
//         cout<<"string is note maching"<<endl;
//         break;
//     }

// }

// if(a[i]==b[j]){
//     cout<<"stirngs are equal"<<endl;
// }

// else if(a[i]<b[j]){
//     cout<<"string is smaller"<<endl;
// }
// else{
//     cout<<"string is greater"<<endl;
// }


// string is palindrom or not
// char a[]="madam";

// char b[7]={0};

// int i,j;

// for(i=0;a[i]!='\0';i++){

// }

// j=i-1;

// for(i=0;j>=0;j--,i++){
//     b[i]=a[j];
// }

// b[j]='\0';

// for(i=0,j=0;a[i]!='\0'&&b[j]!='\0';i++,j++){
//     if(a[i]!=b[j]){
//         cout<<"string is not palindrom"<<endl;
//         break;
//     }
// }

// if(a[i]==b[j]){
//     cout<<"string is palindrom"<<endl;
// }

// char a[]="madam";

// int i,j;

// for(i=0;a[i]!='\0';i++){

// }

// j=i-1;

// for(i=0;i<j;i++,j--){
//     if(a[i]!=a[j]){
//         cout<<"string is not palindrom"<<endl;
//     }
// }

// cout<<"string is palindrom"<<endl;

//find duplicates in a string

// char a[]="finding";

// int i;
//  int count=0;

// for(i=0;a[i]!='\0';i++){
    
//     if(a[i]!=-1)
    
//     for(int j=i+1;a[j]!='\0';j++){
//         if(a[i]==a[j]){
//             count++;
//             a[j]=-1;
//         }
//     }
   
// }
//   if(count>0){
//         cout<<"total number of duplicate elements are = "<<count<<endl;
//     }

// find duplicates using Hashing table

// char a[]="finding";

// int h[26];

// int i;

// for(i=0;a[i]!='\0';i++){
//     h[a[i]-97]++;
// }

// for(i=0;i<26;i++){
//     if(h[i]>1){
//         cout<<a[i+97]<<endl;
//         cout<<h[i]<<endl;
//     }
// }

// finding the string is anagram or not

// char a[]="decimal";

// char b[]="medical";

// int h[26],i;

// for(int i=0;a[i]!='\0';i++){
//     h[a[i]-97]++;
// }

// for(int i=0;b[i]!='\0';i++){
//         h[b[i]-97]--;

//         if(h[b[i]-97]<0){
//             cout<<"string is not anagram";

//         }
// }

//     cout<<"string is anagram"<<endl;


// permutation of a string 
















    return 0;
}