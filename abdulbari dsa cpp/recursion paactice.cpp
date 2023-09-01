#include<iostream>

using namespace std;

int sum(int n){

    if(n==0){
        return 0;
    }

    else{
        return sum(n-1)+n;
    }
}


int main(){

int s =sum(5);

cout<<sum(5);












    return 0;
}