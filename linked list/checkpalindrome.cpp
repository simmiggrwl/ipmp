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
}

void checkPalindrome(){
    struct node* ptr2=(struct node*)malloc(sizeof(struct node));
    ptr2=head;
    stack<int> s;
    while(ptr2!=NULL){
        s.push(ptr2->data);
        ptr2=ptr2->next;
    }
    ptr2=head;
    int flag=0;
    int x=noOfNodes/2;
    while(x){
        if((ptr2->data)!=s.top()){
            flag=1;
            break;
        }
        ptr2=ptr2->next;
        s.pop();
        x--;
    }
    if(flag==0){
        cout<<"Is palindrome"<<endl;
    }else{
        cout<<"Is not palindrome"<<endl;
    }
    cout<<endl;
}

//check palindrome with o(1) space complexity by reversing second half of list and comparing


int main()
{
    cout<<"enter choice: "<<endl;
    cout<<"1: add element to list"<<endl;
    cout<<"2: display list"<<endl;
    cout<<"3. reverse linked list"<<endl;
    cout<<"4. check palindrome"<<endl;
    int c;
    cin>>c;
    while(c){
        switch(c){
            case 1: insertelem();
            break;
            case 2: displaylist(head);
            break;
            case 3: {reverselist();
                cout<<endl;
                break;
            }
            case 4: checkPalindrome();
            break;
        }
        cout<<"enter choice: "<<endl;
        cout<<"1: add element to list"<<endl;
        cout<<"2: display list"<<endl;
        cout<<"3. reverse linked list"<<endl;
        cout<<"4. check palindrome"<<endl;
        cin>>c;
    }
    return 0;
}

