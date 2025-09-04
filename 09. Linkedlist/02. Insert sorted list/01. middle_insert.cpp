#include<bits/stdc++.h>
using namespace std;
 
 struct Node{
    int data ; 
    struct Node* link;
 };
struct Node* head;
void insert(int value){
    struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
    temp->data =value;
    temp->link=NULL;
    if(head==NULL){
        head=temp;
    }else {
        struct Node* t;
        t=head;
        while(t->link!=NULL){
            t=t->link;
        }
        t->link=temp;
    }
}
 
 void sorted_insert(int value ){
    struct Node* temp1=(struct Node*) malloc(sizeof(struct Node));
    temp1->data = value;
    if(head==NULL || temp1->data < head->data){
        temp1->link=head;
        head=temp1;
    }
    else {
        struct Node* pred=head;
        struct Node* p=pred->link;
        while(p!=NULL && temp1->data > p->data){
            pred=p;
            cout<<p->data <<endl;
            p=p->link;
        }
        pred->link=temp1;
        temp1->link=p;
    }
 }

void print(){
    struct Node* temp;
    temp=head;
    while(temp!=NULL){
        cout<< temp->data<< " ";
        temp= temp->link;

    }
}

int main(){
    head=NULL;
    insert(1);
    insert(2);
    insert(3);
    insert(10);
    print();
    cout<<endl;
    sorted_insert(6);
   print();
   
   return 0;
}