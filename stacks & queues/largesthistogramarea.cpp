#include <bits/stdc++.h>
using namespace std;

int largestarea(int arr[], int n){
    stack<int> index;
    stack<int> size;
    int area,maxarea;
    int lastpos;
    for(int i=0;i<n;i++){
        if(index.empty() || arr[i]>=size.top()){
            size.push(arr[i]);
            index.push(i);
        }else{
            while(!index.empty() && arr[i]<size.top()){
                lastpos=index.top();
                area=size.top()*(i-index.top());
                if(area>maxarea) maxarea=area;
                size.pop();
                index.pop();
            }
             size.push(arr[i]);
            index.push(lastpos);
        }
    }
    while (!size.empty()) {
        area = size.top() * (n-index.top());
        size.pop(); 
        index.pop();
        if (area > maxarea) {
            maxarea = area;
        }
    } 
    return maxarea;
}

int main()
{
    int n;
    cout<<"No of bars: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int area= largestarea(arr,n);
    cout<<area<<endl;
    return 0;
}
