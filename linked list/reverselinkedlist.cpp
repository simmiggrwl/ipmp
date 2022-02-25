#include <bits/stdc++.h>
using namespace std;
int noOfNodes=0;

struct node{
    int data;
    struct node* next;
}*head,*ptr,*ptr3;

void insertelem(){
    if(head==NULL){
        noOfNodes++;
        head=(struct node*)malloc(sizeof(struct node));
        int data;
        cout<<"enter node data: ";
        cin>>data;
        head->data=data;
        head->next==NULL;
    }else{
        ptr=(struct node*)malloc(sizeof(struct node));
        ptr=head;
        while(ptr->next!=NULL){
            ptr=ptr->next;
        }
        noOfNodes++;
        struct node* ptr1=(struct node*)malloc(sizeof(struct node));
        int data;
        cout<<"enter node data: ";
        cin>>data;
        ptr1->data=data;
        ptr1->next==NULL;
        ptr->next=ptr1;
        ptr=ptr->next;
    }
    cout<<endl<<endl;
}

void displaylist(){
    struct node* ptr2=(struct node*)malloc(sizeof(struct node));
    ptr2=head;
    while(ptr2!=NULL){
        cout<<ptr2->data<<" ";
        ptr2=ptr2->next;
    }
    cout<<endl<<endl;
}

void reverselist(){
    struct node* ptr2=(struct node*)malloc(sizeof(struct node));
    ptr2=head;
    struct node* ptr4=(struct node*)malloc(sizeof(struct node));
    ptr4=head->next;
    struct node* ptr5=(struct node*)malloc(sizeof(struct node));
    ptr5=head->next->next;
    while(ptr5!=NULL){
        ptr4->next=ptr2;
        ptr2=ptr4;
        ptr4=ptr5;
        ptr5=ptr5->next;
    }
    ptr4->next=ptr2;
    head->next=NULL;
    head=ptr4;
    cout<<"List reversed"<<endl;
}

int main()
{
    cout<<"enter choice: "<<endl;
    cout<<"1: add element to list"<<endl;
    cout<<"2: display list"<<endl;
    cout<<"3. reverse linked list"<<endl;
    int c;
    cin>>c;
    while(c){
        switch(c){
            case 1: insertelem();
            break;
            case 2: displaylist();
            break;
            case 3: reverselist();
        }
        cout<<"enter choice: "<<endl;
        cout<<"1: add element to list"<<endl;
        cout<<"2: display list"<<endl;
        cout<<"3. reverse linked list"<<endl;
        cin>>c;
    }
    return 0;
}

