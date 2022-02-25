#include <bits/stdc++.h>
using namespace std;

void printKMax(int arr[], int n, int k)
{
    list<int> ans;
    int i;
    for(i=0;i<k;i++){
        while(!ans.empty() && arr[i]>=arr[ans.back()]){
            ans.pop_back();
        }
        ans.push_back(i);
    }
    for(;i<n;i++){
        cout<<arr[ans.front()]<<" ";
        while(!ans.empty() && ans.front()<=i-k){
            ans.pop_front();
        }
        while(!ans.empty() && arr[i]>=arr[ans.back()]){
            ans.pop_back();
        }
        ans.push_back(i);
    }
    cout<<arr[ans.front()]<<" ";
}

int main()
{
	int arr[] = { 12, 1, 78, 90, 57, 89, 56 };
	int n = sizeof(arr) / sizeof(arr[0]);
	int k = 3;
	printKMax(arr, n, k);
	return 0;
}
