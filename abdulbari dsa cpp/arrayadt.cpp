#include<iostream>

using namespace std;


// arrays as parameters
// void fun(int A[ ] , int n)
// {
// int i;
// for(i=0; i<n ; i++){

//       cout<<A[i]<<endl;


// }

// }

int main(){



// int A[5] = {2,4,6,8,10};
// fun(A,5);

// Int a = 10;
// Int &r = a; - syntax of reference
// Count << a ;
// r++;
// Cout<< r ;
// Cout << a ;
//  }

// accessing pointer as heap memory
// {
// int * p;
// p = new int[5];
// }

// pointers
// {
// int a = 10 ;/ / - data variable
// int *p ; //- declaration
// p = & a ; //- Assignment / Initialisation
// printf( “% d ” , a ) ;
// printf(“ %d ” , * p ) ; //- dereferencing
// }

//     int a[]={1,2,3,4,5,6,8,9,10,11};

// for(int count =1;count<=10;count++){
//                   int num=count;
//             for(int i=0;i<10;i++){
//                 if(count==a[i]){
//                 num=0;
//                 }
//             }
   
//   cout<<num;
            
// }

//  int a[]={1,2,3,4,5,6,7,8,9,10,11};

//     int b[]={1,2,4,5,6,7,9,10,11};

// for(int j=0,i=0;i<10,j<9;i++,j++){

// if(a[i]!=b[j]){
//     cout<<a[i];
   
// }
           
// }

// int a[]={1,2,4,5,6,7,8,9,10,11,12};

// int sum=0;

// for(int i=0;i<11;i++){

// sum=sum+a[i];  
    
// }

// int s=(12*(12+1)/2);

// cout<<"missing element is="<<s-sum;

// int a[]={5,6,7,8,9,11,12,13,14};

// int diff=a[0];

// for(int i=0;i<9;i++){

// if(diff!=a[i]-i){
//     cout<<diff+i;
//     break;
// }

// }
// int a[]={5,6,7,8,9,11,14};

// int diff=a[0];

// for(int i=0;i<7;i++){

// if(diff!=a[i]-i){
//     while (diff<a[i]-i)
//     {
//       cout<<diff+i<<endl;
//       diff++;
//     }
    
// }

// }

// int a[9]={5,6,1,2,3,4,8,9,11};

// int H[11]={0};

// for(int i=0;i<9;i++){
    
//     H[a[i]]++;
// }

// for(int i=1;i<=11;i++){
//     if(H[i]==0){
//         cout<<i<<endl;
//     }
// }

// int a[13]={1,2,3,4,5,5,6,7,8,9,9,9,10};

// int lastduplicate=0;

// for (int i = 0; i < 13; i++)

// {
//     if(a[i]==a[i+1]&&lastduplicate!=a[i]){

//        cout<<"element are the duplicate="<<a[i]<<endl;

//            lastduplicate=a[i];

//     }

// }


// find the duplicate elements in a sorted array

// int a[10]={3,6,8,8,10,12,15,15,15,20};
// int j;
// for(int i=0;i<10;i++){

//     if(a[i]==a[i+1]){
//         j=i+1;

//         while(a[j]==a[i]){
//             j++;
//         }
//       cout<<a[i]<<"  number of duplicate elements are duplicate element is ="<< j-i<< endl;
//     i=j-1;
//     }
    
// }

//find duplicate elements using hashing table

// int a[10]={3,6,8,8,10,12,15,15,15,20};

// int b[20]={0};

// for(int i=0;i<10;i++){
//     b[a[i]]++;
// }

// for(int i=0;i<20;i++){
//     if(b[i]>1){
//         cout<<i<<"="<<b[i]<<endl;
//     }
// }

// find the duplicate element in unsorted array

// int a[10]={8,3,6,4,6,5,6,8,2,7};

// for(int i=0;i<10;i++){
//     int count=1;
//     if(a[i]!=-1){
//           for(int j=i+1;j<10;j++){
//         if(a[i]==a[j]){
//         count++;
//         a[j]=-1;
//         }
//     }
//     }
//     if(count>1){
//         cout<<a[i]<<"="<<count<<endl;
//     }
// }



// find the duplicate element using hash table in unsorted array

// int a[10]={8,3,6,4,6,5,6,8,2,7};

// int H[8]={0};

// for(int i=0;i<10;i++){
//     H[a[i]]++;
// }

// for(int i=0;i<9;i++){
//     if(H[i]>1){
//         cout<<i<<"="<<H[i]<<endl;
//     }
// }


// find a pair width sum k;

// int a[10]={6,3,8,10,16,7,5,2,9,14};

// int k=10;

// for(int i=0;i<10;i++){
//     for(int j=i+1;j<10;j++){
//         if(a[i]+a[j]==k){
//             cout<<a[i]<<","<<a[j]<<endl;
//         }
//     }
// }

// find a sum  with pairs k in sorted array;

// int a[10]={1,3,4,5,6,8,9,10,12,14};

// int k=10;
// int i=0;
// int j=9;

// while(i<j){
//     if(a[j]+a[i]==k){
//         cout<<a[i]<<","<<a[j]<<"= "<<k<<endl;
//         i++;
//         j--;
//     }

//     else if(a[i]+a[j]<k){
//           i++;
//     }
//     else{
//         j--;
//     }
// }


// finding max and min in a single scan;

// int a[10]={5,8,3,9,6,2,10,7,-1,4};

// int max=a[0];

// int min=a[0];

// for(int i=1;i<10;i++){
//     if(a[i]<min){
//         min=a[i];
//     }
//     else if(a[i]>max){
//         max=a[i];
//     }
// }

// cout<<"min is="<<min<<endl;

// cout<<"max is="<<max<<endl;

    return 0;

}

