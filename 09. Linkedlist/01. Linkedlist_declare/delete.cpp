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
void delete_node(int pos){
          if(pos==1){
              struct Node* temp;
              temp=head;
              head->link=temp->link;
              free(temp);

          }
          else {
            struct Node* temp1;
               temp1=head;
             for(int i=0;i<pos-2;i++){
                temp1=temp1->link;
             }
             struct Node* temp2;
            temp2=temp1->link;
            temp1->link = temp2->link;
            free(temp2);

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
    delete_node(3);
   print();
   
   return 0;
}