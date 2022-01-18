#include <bits/stdc++.h>
using namespace std;
int n,top1,top2;

void push1(int arr[]){
    top1++;
    if(top1>=top2){
        cout<<"overflow"<<endl;
        return;
    }
    int k;
    cout<<"enter element";
    cin>>k;
    arr[top1]=k;
}

void push2(int arr[]){
    top2--;
    if(top1>=top2){
        cout<<"overflow"<<endl;
        return;
    }
    int k;
    cout<<"enter element";
    cin>>k;
    arr[top2]=k;
}

void pop1(){
    if(top1==-1){
        cout<<"underflow"<<endl;
        return;
    }
    top1--;
}

void pop2(){
    if(top2==n){
        cout<<"underflow"<<endl;
        return;
    }
    top2++;
}

void display1(int arr[]){
    for(int i=0;i<=top1;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void display2(int arr[]){
    for(int i=n-1;i>=top2;i--){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    cout<<"enter total no of elements in both stacks";
    cin>>n;
    top1=-1;
    top2=n;
    int arr[n];
    int choice;
    cout<<"1: push to first stack"<<endl<<"2: push to second stack"<<endl<<"3: pop from first stack"<<endl<<"4: pop from second stack"<<endl;
    cout<<"5: display first stack elements"<<endl<<"6: display second stack elements"<<endl;
    cout<<"enter choice";
    cin>>choice;
    while(choice){
        switch(choice){
            case 1: push1(arr);
            break;
            case 2: push2(arr);
            break;
            case 3: pop1();
            break;
            case 4:pop2();
            break;
            case 5: display1(arr);
            break;
            case 6: display2(arr);
            break;
            default: cout<<"invalid input";
            break;
        }
        cout<<"1: push to first stack"<<endl<<"2: push to second stack"<<endl<<"3: pop from first stack"<<endl<<"4: pop from second stack"<<endl;
        cout<<"5: display first stack elements"<<endl<<"6: display second stack elements"<<endl;
        cout<<"enter choice";
        cin>>choice;
    }

    return 0;
}

