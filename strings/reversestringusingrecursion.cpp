#include <bits/stdc++.h>
using namespace std;

void reverse(string s){
    if(s.length()==0) return;
    else reverse(s.substr(1));
    cout<<s[0];
}

int main(){
    char s[100];
    cin.getline(s,100);
    reverse(s);
    return 0;
}