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
        ptr=(struct node*)malloc(sizeof(struct node));
        ptr=head;
    }else{
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

void nodefromend(){
    struct node* ptr2=(struct node*)malloc(sizeof(struct node));
    ptr2=head;
    int n;
    cout<<"value of n: ";
    cin>>n;
    if(n>noOfNodes || n<1){
        cout<<"Invalid position"<<endl;
        return;
    }
    int x=noOfNodes-n;
    while(x){
        ptr2=ptr2->next;
        x--;
    }
    cout<<n<<" node from end is "<<ptr2->data<<endl;
}

int main()
{
    cout<<"enter choice: "<<endl;
    cout<<"1: add element to list"<<endl;
    cout<<"2: display list"<<endl;
    cout<<"3. Nth node from end"<<endl;
    int c;
    cin>>c;
    while(c){
        switch(c){
            case 1: insertelem();
            break;
            case 2: displaylist();
            break;
            case 3: nodefromend();
        }
        cout<<"enter choice: "<<endl;
        cout<<"1: add element to list"<<endl;
        cout<<"2: display list"<<endl;
        cout<<"3. Nth node from end"<<endl;
        cin>>c;
    }
    return 0;
}

