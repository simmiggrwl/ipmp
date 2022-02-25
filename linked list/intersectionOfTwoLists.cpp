#include <bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node* next;
}*head,*head1, *head2;

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

void intersectionOfLists(){
    struct node *ptr1=(struct node*)malloc(sizeof(struct node));
    ptr1=head;
    struct node *ptr2=(struct node*)malloc(sizeof(struct node));
    ptr2=head1;
    while(ptr1!=NULL && ptr2!=NULL){
        if((ptr1->data)==(ptr2->data)){
            insertelem(head2, ptr1->data);
            ptr1=ptr1->next;
            ptr2=ptr2->next;
        }else if((ptr1->data)>(ptr2->data)){
            ptr2=ptr2->next;
        }else{
            ptr1=ptr1->next;
        }
    }
    
    cout<<"List created by intersection of the two lists is: ";
    displaylist(head2);
}

int main()
{
    cout<<"enter choice: "<<endl;
    cout<<"1: add element to list 1 in increasing order"<<endl;
    cout<<"2: add element to list 2 in increasing order"<<endl;
    cout<<"3: display list 1"<<endl;
    cout<<"4: display list 2"<<endl;
    cout<<"5: get intersection of list 1 and list 2"<<endl;
    int c;
    cin>>c;
    while(c){
        switch(c){
            case 1: {int data;
            cout<<"Enter node data: ";
            cin>>data;
            insertelem(head, data);
            break;}
            case 2: {int data;
            cout<<"Enter node data: ";
            cin>>data;
            insertelem(head1, data);
            break;}
            case 3: displaylist(head);
            break;
            case 4: displaylist(head1);
            break;
            case 5: intersectionOfLists();
            break;
        }
        cout<<"enter choice: "<<endl;
        cout<<"1: add element to list 1 in increasing order"<<endl;
        cout<<"2: add element to list 2 in increasing order"<<endl;
        cout<<"3: display list 1"<<endl;
        cout<<"4: display list 2"<<endl;
        cout<<"5: get intersection of list 1 and list 2"<<endl;
        cin>>c;
    }
    return 0;
}