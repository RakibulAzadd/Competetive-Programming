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
    temp->link=head;
    head=temp;
     
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
   print();
   return 0;
}