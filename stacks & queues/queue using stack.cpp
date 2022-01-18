#include <bits/stdc++.h>
using namespace std;
int n,top=-1;
stack<int> s1,s2;

void enqueue(){
    top++;
    int k;
    cout<<"enter element: ";
    cin>>k;
    s1.push(k);
}

void dequeue(){
    if(top==-1){
        cout<<"underflow"<<endl;
        return;
    }
    while(s1.size()!=0){
        s2.push(s1.top());
        s1.pop();
    }
    
    cout<<s2.top()<<" dequeued.";
    s2.pop();
    top--;
    while(s2.size()!=0){
        s1.push(s2.top());
        s2.pop();
    }
}

void display(){
   if(top==-1){
       cout<<"no elements in stack"<<endl;
       return;
   }
   while(s1.size()!=0){
       s2.push(s1.top());
       s1.pop();
   }
   while(s2.size()!=0){
       cout<<s2.top()<<" ";
       s1.push(s2.top());
       s2.pop();
   }
   cout<<endl;
}

int main()
{
    int c;
    cout<<"enter a choice"<<endl;
    cout<<"1: enqueue"<<endl<<"2: dequeue"<<endl<<"3: display"<<endl;
    cin>>c;
    while(c){
        switch(c){
            case 1: enqueue();
            break;
            case 2: dequeue();
            break;
            case 3: display();
            break;
        }
        cout<<"enter a choice"<<endl;
        cout<<"1: enqueue"<<endl<<"2: dequeue"<<endl<<"3: display"<<endl;
        cin>>c;
    }
    return 0;
}

