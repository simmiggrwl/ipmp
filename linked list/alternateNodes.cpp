#include <bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node* next;
}*head;

void insertelem(struct node* &ptr, int data){
    if(ptr==NULL){
        ptr=(struct node*)malloc(sizeof(struct node));
        ptr->data=data;
        ptr->next==NULL;
    }else{
        struct node *ptr1=(struct node*)malloc(sizeof(struct node));
        ptr1=ptr;
        while(ptr1->next!=NULL){
            ptr1=ptr1->next;
        }
        struct node *ptr2=(struct node*)malloc(sizeof(struct node));
        ptr2->data=data;
        ptr1->next=ptr2;
        ptr2->next=NULL;
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

void removeAlt(){
    struct node* ptr=(struct node*)malloc(sizeof(struct node));
    ptr=head;
    struct node* ptr1=(struct node*)malloc(sizeof(struct node));
    ptr1=ptr->next;
    while(ptr1!=NULL){
        if(ptr1->next==NULL){
            ptr->next=NULL;
            free(ptr1);
            ptr1=NULL;
        }else{
        ptr->next=ptr1->next;
        ptr=ptr->next;
        ptr1->next=NULL;
        free(ptr1);
        ptr1=ptr->next;
        }
    }
    cout<<"List after removing alternate nodes is: ";
    displaylist(head);
    cout<<endl;
}


int main()
{
    cout<<"enter choice: "<<endl;
    cout<<"1: add element to list"<<endl;
    cout<<"2: display list"<<endl;
    cout<<"3: remove alternate nodes"<<endl;
    int c;
    cin>>c;
    while(c){
        switch(c){
            case 1: {int data;
            cout<<"Enter node data: ";
            cin>>data;
            insertelem(head, data);
            break;}
            case 2: displaylist(head);
            break;
            case 3: removeAlt();
            break;
        }
        cout<<"enter choice: "<<endl;
        cout<<"1: add element to list"<<endl;
        cout<<"2: display list"<<endl;
        cout<<"3: remove alternate nodes"<<endl;
        cin>>c;
    }
    return 0;
}