#include <bits/stdc++.h>
using namespace std;
int size=0;

struct node{
    int data;
    node* prev;
    node* next;
}*head,*ptr,*mid;

void push(){
    if(head==NULL){
        head=(struct node*)malloc(sizeof(struct node));
        int data;
        cout<<"enter data for node: ";
        cin>>data;
        head->data=data;
        head->prev=NULL;
        head->next=NULL;
        ptr=(struct node*)malloc(sizeof(struct node));
        mid=(struct node*)malloc(sizeof(struct node));
        ptr=head;
        mid=head;
        size++;
    }else{
        node* ptr1=(struct node*)malloc(sizeof(struct node));
        int data;
        cout<<"enter data for node: ";
        cin>>data;
        ptr1->data=data;
        ptr1->prev=ptr;
        ptr1->next=NULL;
        ptr->next=ptr1;
        ptr=ptr1;
        size++;
        if(size%2==0){
            mid=mid->next;
        }
    }
}

void pop(){
    if(head==NULL){
        cout<<"underflow";
        return;
    }else{
        node* ptr1=(struct node*)malloc(sizeof(struct node));
        ptr1=ptr;
        cout<<ptr->data<<" popped."<<endl;
        ptr=ptr->prev;
        ptr->next=NULL;
        free(ptr1);
        size--;
        if(size%2==1){
            mid=mid->prev;
        }
    }
}

void display(){
    node* ptr1=(struct node*)malloc(sizeof(struct node));
    ptr1=head;
    while(ptr1!=NULL){
        cout<<ptr1->data<<" ";
        ptr1=ptr1->next;
    }
    cout<<endl;
}

void getmid(){
    cout<<mid->data<<endl;
}

void deletemid(){
    mid->prev->next=mid->next;
    mid->next->prev=mid->prev;
    node* ptr1=(struct node*)malloc(sizeof(struct node));
    ptr1=mid;
    cout<<mid->data<<" deleted."<<endl;
    if(size%2==0){
        mid=mid->prev;
    }else{
        mid=mid->next;
    }
    free(ptr1);
    size--;
}

int main()
{   
    int c;
    cout<<"Enter choice: "<<endl;
    cout<<"1: push element"<<" 2: pop element"<<" 3: display stack elements"<<" 4: get mid element"<<" 5: delete mid element"<<endl;
    cin>>c;
    while(c){
        switch(c){
            case 1: push();
            break;
            case 2: pop();
            break;
            case 3: display();
            break;
            case 4: getmid();
            break;
            case 5: deletemid();
            break;
        }
        cout<<"Enter choice: "<<endl;
        cout<<"1: push element"<<" 2: pop element"<<" 3: display stack elements"<<" 4: get mid element"<<" 5: delete mid element"<<endl;
        cin>>c;
    }
    return 0;
}
