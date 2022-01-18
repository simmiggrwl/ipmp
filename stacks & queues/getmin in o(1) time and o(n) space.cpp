#include <bits/stdc++.h>
using namespace std;
int minno=0;
stack<int> s1,s2;

void push(){
    int k;
    cout<<"enter element: ";
    cin>>k;
    s1.push(k);
    if(k<=minno){
        minno=k;
        s2.push(k);
    }
}

void pop(){
    if(s1.empty()){
        cout<<"underflow"<<endl;
        return;
    }
    cout<<s1.top()<<" popped"<<endl;
    if(s1.top()==s2.top()){
        s2.pop();
    }
    s1.pop();
}

void getmin(){
    cout<<s2.top()<<" is min"<<endl;
}

int main()
{
    int k;
    cout<<"enter element: ";
    cin>>k;
    s1.push(k);
    minno=k;
    s2.push(k);
    int c;
    cout<<"enter a choice"<<endl;
    cout<<"1: push"<<endl<<"2: pop"<<endl<<"3: get min"<<endl;
    cin>>c;
    while(c){
        switch(c){
            case 1: push();
            break;
            case 2: pop();
            break;
            case 3: getmin();
            break;
            }
        cout<<"enter a choice"<<endl;
        cout<<"1: push"<<endl<<"2: pop"<<endl<<"3: get min"<<endl;
        cin>>c;
    }
    return 0;
}

