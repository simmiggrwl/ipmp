#include <bits/stdc++.h>
using namespace std;
int d=9999;
int minno=0;
stack<int> s1;

void push(){
    int k;
    cout<<"enter element: ";
    cin>>k;
    if(k<minno) minno=k;
    s1.push(k*d+minno);
}

void pop(){
    if(s1.empty()){
        cout<<"underflow"<<endl;
        return;
    }
    cout<<s1.top()/d<<" popped"<<endl;
    s1.pop();
    minno=s1.top()%d;
}

void getmin(){
    cout<<minno<<" is min"<<endl;
}

void topelem(){
    cout<<s1.top()/d<<" is the top element"<<endl;
}

int main()
{
    int k;
    cout<<"enter element: ";
    cin>>k;
    minno=k;
    s1.push(k*d+minno);
    int c;
    cout<<"enter a choice"<<endl;
    cout<<"1: push"<<endl<<"2: pop"<<endl<<"3: get min"<<endl<<"4: top"<<endl;
    cin>>c;
    while(c){
        switch(c){
            case 1: push();
            break;
            case 2: pop();
            break;
            case 3: getmin();
            break;
            case 4: topelem();
            break;
            }
        cout<<"enter a choice"<<endl;
        cout<<"1: push"<<endl<<"2: pop"<<endl<<"3: get min"<<endl<<"4: top"<<endl;
        cin>>c;
    }
    return 0;
}

