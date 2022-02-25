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

void displaylist(struct node* ptr2){
    while(ptr2!=NULL){
        cout<<ptr2->data<<" ";
        ptr2=ptr2->next;
    }
    cout<<endl<<endl;
}

void middleList(){
    node* ptr7=(struct node*)malloc(sizeof(struct node));
    node* ptr8=(struct node*)malloc(sizeof(struct node));
    ptr7=head;
    ptr8=head;
    while(ptr8!=NULL && (ptr8->next)!=NULL){
        ptr8=ptr8->next->next;
        ptr7=ptr7->next;
    }
    cout<<"Middle element is "<<(ptr7->data)<<endl<<endl;
}


int main()
{
    cout<<"enter choice: "<<endl;
    cout<<"1: add element to list"<<endl;
    cout<<"2: display list"<<endl;
    cout<<"3. middle of list"<<endl;
    int c;
    cin>>c;
    while(c){
        switch(c){
            case 1: insertelem();
            break;
            case 2: displaylist(head);
            break;
            case 3: middleList();
            break;
        }
        cout<<"enter choice: "<<endl;
        cout<<"1: add element to list"<<endl;
        cout<<"2: display list"<<endl;
        cout<<"3. middle of list"<<endl;
        cin>>c;
    }
    return 0;
}

