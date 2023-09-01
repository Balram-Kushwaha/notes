#include<iostream>

using namespace std;

// diagonal matrics

// void set(int a[5],int i,int j,int x){

//     if(i==j){
//         a[i-1]=x;
//     }
// }

// void get(int a[5],int i,int j){
//     if(i==j){

//         return a[i-1];

//     }
//     else{

//    return 0;

//     }
// }

// void print(int a[5]){
//     int i,j;
//     for(i=0;i<5;i++){
//         for(j=0;j<5;j++){
//             if(i==j){
//                 cout<<a[i];
//             }
//             else{
//                 cout<<"0";
//             }
//         }
//         cout<<endl;
//     }
// }

// class Diagonal{
//     private:
//     int n;
//     int *A;
//     public:
//     Diagonal(int n){
//         this->n=n;
//         A=new int[n];   
//     }
//     void set(int i,int j,int x);
//     int get(int i,int j);
//     void display();
//     ~Diagonal(){delete []A;}
// };

// void Diagonal::set(int i,int j,int x){
//     if(i==j){
//         A[i-1]=x;
//     }
// }

// int Diagonal::get(int i,int j){
//     if(i==j){
//         return A[i-1];
//     }
  
// }

// void Diagonal::display(){
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             if(i==j){
//                 cout<<A[i-1];
//             }
//             else{
//                 cout<<"0";
//             }
//         }
//         cout<<endl;
//     }
// }


// lower triangular matrics
//row major and column major matrics;
// class ltmatrics{
//     private:
//     int n;
//     int *A;
//     public:
//     ltmatrics(int n){
//         this->n=n;
//         A=new int [n*(n+1)/2];
//     }

//     void setrowmatircs(int i,int j,int x);
//     int getmatrics(int i,int j);
//     void setcolumnmatrics(int i,int j,int x);
//     int getcolumnmatrics(int i,int j);
//     void display();
// };

// void ltmatrics::setrowmatircs(int i,int j,int x){
//    if(i>=j){
//    int index=i*(i-1)/2+i-j;
//     A[index]=x;
//     } 
// }

// int ltmatrics::getmatrics(int i,int j){
//     if(i>=j){
//           int index=i*(i-1)/2+i-j;
//         return A[index];
//     }
// }

// void ltmatrics::setcolumnmatrics(int i,int j,int x){
//    if(i>=j){
//     int index=n*(j-1)-(j-2)*(j-1)/2+i-j;
//     A[index]=x;
//    }
// }


// int ltmatrics::getcolumnmatrics(int i,int j){
//        if(i>=j){
//          int index=n*(j-1)-(j-2)*(j-1)/2+i-j;
//          return  A[index];
//        }
// }

// void ltmatrics::display(){
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//          if(i>=j){
//                      int index=n*(j-1)-(j-2)*(j-1)/2+i-j;
//                      cout<<A[index];
//         //   int index=i*(i-1)/2+i-j;
//         //     cout<<A[i*(i-1)/2+i-j];
//          }  
//          else{
//             cout<<"0";
//          } 
        
//         }
//         cout<<endl;
//     }
// }
int main(){
   
    // int d;
    // cout<<"enter the size of matrics";
    // cin>>d;
    // ltmatrics r(d);

    // for(int i=1;i<=d;i++){
    //     for(int j=1;j<=d;j++){
    //         int x;
    //         cin>>x;
    //         // r.setrowmatircs(i,j,x);
    //         r.setcolumnmatrics(i,j,x);
    //     }
    // }
    //  r.display();
    // Diagonal r(5);
    // r.set(1,1,2);
    // r.set(2,2,4);
    // r.set(3,3,9);
    // r.set(4,4,6);
    // r.set(5,5,7);
    // r.display();

// int a[5];

// set(a,1,1,5),set(a,2,2,8),set(a,3,3,9),set(a,4,4,1),set(a,5,5,8);

// cout<<get(a,1,1);

// print(a);


















    return 0;
}