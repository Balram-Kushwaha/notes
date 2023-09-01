#include<iostream>

#include<math.h>

using namespace std;

class Node{
    public:
    int data;
    Node *next;
};

Node *head=NULL;

void create(int a[],int n){
    Node *head=new Node;

Node *temp;

Node *last;

head->data=a[0];

head->next=NULL;

last =head;

int i;

for(i=1;i<5;i++){
    temp =new Node;
        
    temp->data=a[i];
     
    temp->next=NULL;
    last->next=temp;

    last=temp;
       
}

}

// display a linked list
// void display(){
//    Node *p=head;
// while(p!=NULL){
//     cout<<p->data<<"->"<<flush;
//     p=p->next;
// } 

// }

//display the function recursively
// void Rdisplay(Node *head){
//     if(head!=NULL){
//         cout<<head->data<<"->";
//         Rdisplay(head=head->next);
//     }
// }

//cout the number of nodes in a linked list
// 1.iterative mathod
// int count(Node *head){
//     int l=0;
//      while(head!=0){
//         l++;
//         head=head->next;
//      }
//      return l;
// }
//2. recursive method
// int count(Node *head){
//     if(head==0){
//         return 0;
//     }
//     else{
//         return count(head->next)+1;
//     }
// }

// sum of all the elements in a linked list
// 1.iterative mathod
// int add(Node *head){
//     int sum=0;
//     while(head!=0){
//         sum=sum+head->data;
//         head=head->next;
//     }
//     return sum;
// }

// 2. recursive method

// int add(Node *head){
//     if(head==0){
//         return 0;
//     }
//     else{
//         return add(head->next)+head->data;
//     }
// }

//find maxximum element in a linked list
// 1.iterative method
// int max(Node *head){
//     int m=-832847;
//        while(head){
//           if(head->data>m){
//             m=head->data;
//           }
//           head=head->next;
//        }
//        return m;
// }

// 2. recursive method
// int max(Node *head){
//     int x=0;
//     if(head==0){
//         return x;
//     }
//     else{
//         x=max(head->next);
//         if(x>head->data){
//             return x;
//         }
//         else{
//             return head->data;
//         }
//     }
// }

//searching the element using linear search
// Node *search(Node *head,int key){
//      while(head){
//         if(key==head->data){
//             return head;
//         }
//         head=head->next;
//      }
//      return NULL;
// } 

// Node *search(Node *head,int key){
//     if(head==NULL){
//         return NULL;
//     }
//     if(key==head->data){
//         return head;
//     }
//     return search(head->next,key);
// }

//improve node to head linear search

// Node *lsearch(Node *head,int key){
//     Node *q=NULL;
//     while(head!=NULL){
//           if(key==head->data){
//                q->next=head->next;
//                head->next=head;
//                head=head;
//                return head;
//           }
//           q=head;
//           head=head->next;
//     }
//     return NULL;

// }


int main(){
// Node *head;
int a[]={3,5,25,10,15};
// Node p(int a[],int *b);
create(a,5);
// display();
//  Rdisplay(head);
// cout<<count(head);
// cout<<add(head);
// cout<<max(head);
// cout<<search(head,10);
// Node *result;
// result=lsearch(head,10);
// if(result){
//     cout<<"key is found "<<result->data;
// }
// else{
//     cout<<"key is not found"<<endl;
// }



// create a linked list
// Node *head=new Node;

// Node *temp;
// Node *last;

// head->data=a[0];
// head->next=NULL;
// last =head;
// int i;
// for(i=1;i<5;i++){
//     temp =new Node;
//     temp->data=a[i];
//     temp->next=NULL;
//     last->next=temp;
//     last=temp;
// }

//display the linked list

// Node *p=head;

// while(p!=NULL){
//     cout<<p->data<<"->"<<flush;
//     p=p->next;
// }








    return 0;
}

