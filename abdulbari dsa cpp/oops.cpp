#include<iostream>

using namespace std;

// class Rectangle{
//  private:
//     int length;
//     int width;
// public:

// Rectangle(int l,int b){  // constructor function same name as class name for initialization for objects
//     length=l;
//     width=b;
// }

// int area(){
//     return length*width;
// }

// void changelength(int l){
//     length = l;
// }

// int perimeter(){
//     int p;
//     p=2*(length+width);
//     return p;
// }

    
// };


// class and constructor
class Rectangle{
    private:
    int length;
    int width;

    public:
    Rectangle(){
        length=width=1;
    }
     Rectangle(int l,int b);

     int area();
     int perimeter();

     void setlength(int l){
        length=l;
        }
        //    void getlength(){
        // return length;
        // }
     ~Rectangle();
};

Rectangle::Rectangle(int l,int b){
    length=l;
    width=b;
}

int Rectangle::area(){
    return length*width;
}

int Rectangle::perimeter(){
    return 2*(length+width);
}

Rectangle::~Rectangle(){
   cout<<"destructor"<<endl;
};

int main(){

Rectangle r(10,5);

cout<<r.area()<<endl;

cout<<r.perimeter()<<endl;

// r.setlength(20);

// cout<<r.getlength();

// Rectangle r(10,5);

// cout<<r.area()<<endl;

// r.changelength(20);

// cout<<r.perimeter()<<endl;





















    return 0;
}