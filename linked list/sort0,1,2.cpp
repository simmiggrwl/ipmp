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
    if(ptr2==NULL){
        cout<<"Empty List"<<endl;
        return;
    }
    while(ptr2!=NULL){
        cout<<ptr2->data<<" ";
        ptr2=ptr2->next;
    }
    cout<<endl<<endl;
}

void sortList(){
    struct node* ptr=(struct node*)malloc(sizeof(struct node));
    ptr=head;
    int count0=0,count1=0,count2=0;
    while(ptr!=NULL){
        if((ptr->data)==0) count0++;
        else if((ptr->data)==1) count1++;
        else count2++;
        ptr=ptr->next;
    }
    ptr=head;
    while(count0){
        count0--;
        ptr->data=0;
        ptr=ptr->next;
    }
    while(count1){
        count1--;
        ptr->data=1;
        ptr=ptr->next;
    }
    while(count2){
        count2--;
        ptr->data=2;
        ptr=ptr->next;
    }
    
    cout<<"Sorted list is: ";
    displaylist(head);
}

int main()
{
    cout<<"enter choice: "<<endl;
    cout<<"1: add element to list (0,1,2)"<<endl;
    cout<<"2: display list"<<endl;
    cout<<"3. sort list"<<endl;
    int c;
    cin>>c;
    while(c){
        switch(c){
            case 1: insertelem();
            break;
            case 2: displaylist(head);
            break;
            case 3: sortList();
        }
        cout<<"enter choice: "<<endl;
        cout<<"1: add element to list (0,1,2)"<<endl;
        cout<<"2: display list"<<endl;
        cout<<"3. sort list"<<endl;
        cin>>c;
    }
    return 0;
}

