#include <bits/stdc++.h>
using namespace std;
list<int> cache;
int pagefaults=0;
unordered_map<int,list<int>::iterator> values;
int size;

void displaycache();

void addToCache(){
    int x;
    cout<<"Enter page value: ";
    cin>>x;
    if(values.find(x)!=values.end()){
        cache.erase(values[x]);
    }else{
        if(cache.size()==size){
            int last=cache.back();
            cache.pop_back();
            values.erase(last);
        }
        pagefaults++;
    }
    cache.push_front(x);
    values.insert({x,cache.begin()});
}

void displayCache(){
    cout<<"hi";
    for(auto itr=cache.begin();itr!=cache.end();itr++){
        cout<<(*itr)<<" ";
    }
    cout<<endl;
}

int main()
{
    cout<<"cache limit: ";
    cin>>size;
    cout<<"Enter choice: "<<endl;
    cout<<"1: add to cache string"<<endl;
    cout<<"2: display cache"<<endl;
    cout<<"3: exit"<<endl;
    int c;
    cin>>c;
    int flag=0;
    while(c){
        switch(c){
            case 1: addToCache();
            break;
            case 2: displayCache();
            break;
            case 3: flag=1;
            break;
        }
        if(flag==1) break;
        cout<<"Enter choice: "<<endl;
        cout<<"1: add to cache string"<<endl;
        cout<<"2: display cache"<<endl;
        cout<<"3: exit"<<endl;
        cin>>c;
    }
    cout<<"No of pagefaults: "<<pagefaults<<endl;
    return 0;
}
