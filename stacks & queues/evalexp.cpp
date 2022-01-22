#include <bits/stdc++.h>
using namespace std;

int applyoperation(int x, int y, char z){
    switch(z){
        case '+': return x+y;
        case '-': return x-y;
        case '*': return x*y;
        case '/': return x/y;
    }
    return 0;
}

int precedence(char x){
    if(x=='+' || x=='-'){
        return 1;
    }else if(x=='*' || x=='/'){
        return 2;
    }
    return 0;
}

int evaluate(string x){
    
    stack<int> values;
    stack<char> operators;

    for(int i=0;i<x.length();i++){
        if(x[i]==' '){
            continue;
        }else if(x[i]=='('){
            operators.push(x[i]);
        }else if(isdigit(x[i])){
            int val=0;
            while(i<x.length() && isdigit(x[i])){
                val=(val*10)+(x[i]-'0');
                i++;
            }
            values.push(val);
            i--;
        }else if(x[i]==')'){
            while(!operators.empty() && operators.top()!='('){
                int val1=values.top();
                values.pop();
                int val2=values.top();
                values.pop();
                int op=operators.top();
                operators.pop();
                int res=applyoperation(val1,val2,op);
                values.push(res);
            }
            if(!operators.empty()) operators.pop();
        }else{
            while(!operators.empty() && precedence(operators.top())>precedence(x[i])){
                int val1=values.top();
                values.pop();
                int val2=values.top();
                values.pop();
                int op=operators.top();
                operators.pop();
                int res=applyoperation(val1,val2,op);
                values.push(res);
            }
            operators.push(x[i]);
        }
    }
    
    while(!operators.empty()){
        int val1=values.top();
        values.pop();
        int val2=values.top();
        values.pop();
        int op=operators.top();
        operators.pop();
        int res=applyoperation(val1,val2,op);
        values.push(res);
    }
    
    return values.top();
}

int main()
{
    cout<<"Enter expression: ";
    string x;
    cin>>x;
    int result=evaluate(x);
    cout<<result<<endl;
    return 0;
}
