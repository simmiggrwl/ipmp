#include <bits/stdc++.h>
using namespace std;
int n,top=-1;
queue<int> q1,q2;

void push(){
    top++;
    int k;
    cout<<"enter element: ";
    cin>>k;
    q1.push(k);
}

void pop(){
    if(top==-1){
        cout<<"underflow"<<endl;
        return;
    }
    while(q1.size()!=1){
        q2.push(q1.front());
        q1.pop();
    }
    
    cout<<q1.front() <<"popped."<<endl;
    q1.pop();
    top--;
    
    queue<int> q=q1;
    q1=q2;
    q2=q;
}

void display(){
   if(top==-1){
       cout<<"no elements in stack"<<endl;
       return;
   }
   while(q1.size()!=0){
       cout<<q1.front()<<" ";
       q2.push(q1.front());
       q1.pop();
   }
   cout<<endl<<endl;
   queue<int> q=q1;
   q1=q2;
   q2=q;
}

int main()
{
    int c;
    cout<<"enter a choice"<<endl;
    cout<<"1: push"<<endl<<"2: pop"<<endl<<"3: display"<<endl;
    cin>>c;
    while(c){
        switch(c){
            case 1: push();
            break;
            case 2: pop();
            break;
            case 3: display();
            break;
        }
        cout<<"enter a choice"<<endl;
        cout<<"1: push"<<endl<<"2: pop"<<endl<<"3: display"<<endl;
        cin>>c;
    }
    return 0;
}

