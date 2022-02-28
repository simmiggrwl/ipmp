#include <bits/stdc++.h>
using namespace std;
int noOfNodes=0;

struct node{
    char data;
    struct node* next;
}*head;

void insertelem(struct node* &ptr, int data){
    noOfNodes++;
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

void segregateVowels(){
    struct node* ptr5=(struct node*)malloc(sizeof(struct node));
    ptr5=head;
    struct node* ptr1=(struct node*)malloc(sizeof(struct node));
    ptr1=head;
    int count=noOfNodes;
    while(count && ((head->data)=='a' || (head->data)=='e' || (head->data)=='i' || (head->data)=='o' || (head->data)=='u')){
        count--;
        insertelem(head, head->data);
        head=head->next;
        ptr5=head;
        ptr1->next=NULL;
        free(ptr1);
        ptr1=head;
    }
    while(count){
        count--;
        if((ptr5->data)=='a' || (ptr5->data)=='e' || (ptr5->data)=='i' || (ptr5->data)=='o' || (ptr5->data)=='u'){
            insertelem(head, ptr5->data);
            ptr1->next=ptr5->next;
            ptr5->next=NULL;
            free(ptr5);
            ptr5=ptr1->next;
        }else{
            ptr1=ptr5;
            ptr5=ptr5->next;
        }
    }
    cout<<"Segregated list is: ";
    displaylist(head);
}

int main()
{
    cout<<"enter choice: "<<endl;
    cout<<"1: add element to list"<<endl;
    cout<<"2: display list"<<endl;
    cout<<"3. segregate vowels in list"<<endl;
    int c;
    cin>>c;
    while(c){
        switch(c){
            case 1: {char data;
            cout<<"Enter node data: ";
            cin>>data;
            insertelem(head, data);
            break;}
            case 2: displaylist(head);
            break;
            case 3: segregateVowels();
            break;
        }
        cout<<"enter choice: "<<endl;
        cout<<"1: add element to list"<<endl;
        cout<<"2: display list"<<endl;
        cout<<"3. segregate vowels in list"<<endl;
        cin>>c;
    }
    return 0;
}

