#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
};

void intersectionNode(struct Node* head1, struct Node* head2){
    struct Node* ptr1=(struct Node*)malloc(sizeof(struct Node));
    ptr1=head1;
    int count1=0;
    struct Node* ptr2=(struct Node*)malloc(sizeof(struct Node));
    ptr2=head2;
    int count2=0;
    while(ptr1!=NULL){
        ptr1=ptr1->next;
        count1++;
    }
    ptr1=head1;
     while(ptr2!=NULL){
        ptr2=ptr2->next;
        count2++;
    }
    ptr2=head2;
    int d=abs(count1-count2);
    if(count1>count2){
        while(d){
            d--;
            ptr1=ptr1->next;
        }
    }else{
        while(d){
            d--;
            ptr2=ptr2->next;
        }
    }
    
    while(ptr1!=NULL && ptr2!=NULL){
        if(ptr1==ptr2){
            cout<<"Intersection node is "<<(ptr2->data)<<endl;
            return;
        }else{
            ptr1=ptr1->next;
            ptr2=ptr2->next;
        }
    }
    cout<<"No intersection found between lists."<<endl;
}

int main()
{
	Node* newNode;

	Node* head1 = new Node();
	head1->data = 10;

	Node* head2 = new Node();
	head2->data = 3;

	newNode = new Node();
	newNode->data = 6;
	head2->next = newNode;

	newNode = new Node();
	newNode->data = 9;
	head2->next->next = newNode;

	newNode = new Node();
	newNode->data = 15;
	head1->next = newNode;
// 	head2->next->next->next = newNode;

	newNode = new Node();
	newNode->data = 30;
	head1->next->next = newNode;

	head1->next->next->next = NULL;

    intersectionNode(head1, head2);
}

//3-6-9-15
//10-15-30-NULL
