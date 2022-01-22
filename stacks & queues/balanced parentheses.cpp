#include <bits/stdc++.h>
using namespace std;

int main()
{   
    stack<int> s;
    string x;
    int flag=0;
    cout<<"enter string: ";
    cin>>x;
    for(int i=0;i<x.length();i++){
        if(x[i]=='(' || x[i]=='{' || x[i]=='[')
            s.push(x[i]);
        else if(x[i]==')' || x[i]=='}' || x[i]==']'){
            if(x[i]==')' && s.top()!='('){
                flag=1;
                break;
            }else if(x[i]=='}' && s.top()!='{'){
                flag=1;
                break;
            }else if(x[i]==']' && s.top()!='['){
                flag=1;
                break;
            }else s.pop();
        }
    }
    if(!s.empty() || flag==1) cout<<"Not Balanced"<<endl;
    else cout<<"Balanced"<<endl;
    return 0;
}
