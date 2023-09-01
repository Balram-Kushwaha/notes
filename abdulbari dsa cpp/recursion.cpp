#include <iostream>

using namespace std;

// void fun(int a){
//     if(a>0){
//         cout<<a<<endl;
//         fun(a-1);
//         fun(a-1);
//     }
// }

// int factorial(int n){
//     if(n==0){
//         return 1;
//     }
//     else{
//         return factorial(n-1)*n;
//     }
// }

// int pow(int m,int n){
//     int mlti=1;

//     for(int i=1;i<=n;i++){
//          mlti=mlti*m;
//     }

//     return mlti;
// }

// double e(int x,int n){
//     static double p=1,f=1;
//     double r;
//     if(n==0){
//         return 1;
//     }
//     else{
//     r=e(x,n-1);
//     p=p*x;
//     f=f*n;
//     return r+p/f;
//     }
// }

// double e(int x,int n){
//    static double s=1;
//     if(n==0){
//         return s;
//     }
//     else{
//         s=1+((x*s)/n);
//         return e(x,n-1);
//     }
// }

// int fact(int n){
//     if(n==1||n==0){
//         return 1;
//     }
//     else{
//         return n*fact(n-1);
//     }
// }

// int ncr(int p,int r){
//     int numeratot,denomretar;
//     numeratot=fact(p);
//     denomretar=fact(r)*fact(p-r);
//     return numeratot/denomretar;
// }

// int NCR(int n,int r){
//     if(n==r||r==0){
//         return 1;

//     }
//     else{
//         return NCR(n-1,r-1)+NCR(n-1,r);
//     }
// }

// void TOH(int n,int a,int b,int c){
//     if(n>0){
//         TOH(n-1,a,c,b);
//         cout<<"("<<a<<","<<c<<")"<<endl;
//         TOH(n-1,b,a,c);
//     }
// }
// int fun (int n)
//  { 
// int x=1, k; 

// if (n==1) return x; 

// for (k=1; k<n; ++k);

// x=x + fun (k) * fun (n - k); 

// return x; 

// }


// head recurton
// void fun(int n)
// {
// if(n>0)
// {
// fun(n-1);
// cout<<n<<endl;
// }
// }


// tail recurtion
// void fun(int n)
// {
// if(n>0)
// {
//     fun(n-1);
// cout<<n<<endl;

// fun(n-1);
// }

// }


 // static variables in recursion
// int fun(int n)
// {
// static int x=0;
// if(n>0)
// {
// x++;
// return fun(n-1)+ x ;
// }

// return 0;


// }


// tree recursion 

// void fun(int n)
// {
// if(n>0)
// {
// printf("%d ",n);
// fun(n-1);
// fun(n-1);
// }
// }


// indirect recursion 

// void funB(int n);
// void funA(int n)
// {
// if(n>0)
// {
// printf("%d ",n);
// funB(n-1);
// }
// }
// void funB(int n)
// {
// if(n>1)
// {
// printf("%d ",n);
// funA(n/2);
// }
// }

// nested recursion : recursion  inside reccursion is nested recursion

// int fun(int n)
// {
// if(n>100)
// return n-10;
// return fun(fun(n+11));
// }

// sum of N natural numbers using recursion

// int sum(int n){

//     if(n==0){
//         return 0;
//     }

//     else{
//         return sum(n-1)+n;
//     }
// }

// int sum(int n){
//     int s=0;

//     for(int i=1;i<=n;i++){
//         s=s+i;
//     }

//     return s;
// }

// float sin(int x,int n){

//         static float p=x,f=1,a=1;
//         float r;

//         if(n==0){
//                 r= 0;
//         }
//          else{

//           r = sin(x,n-1);
//           r=r+p/f;
//                    p=-p*x*x;
//                 a=a+2;
//                 f=f*(a-1)*a; 
//           }
int  main(){

// int s=sum(5);

// cout<<s<<endl;


// int s =sum(5);

// cout<<sum(5);

    // int r=fun(95);

    // cout<<r<<endl;

    // funA(20);

// int a = 3;

// fun(a);

    // int x=3;
    // fun(x);
//     int m;
// int n;

// cout<<"enter the value of n"<<endl;
// cin>>m;
// cin>>n;

// pow(m,n);

// factorial(n);

// int s=pow(m,n);

// cout<<s;

// fun(n);

// double ans=e(3,10);

// cout<<ans;

 // cout<<NCR(10,2);

// TOH(4,1,2,3);
// int ans=fun(5);
// cout<<ans;


// static and global variable in recursion



    return 0;
}

