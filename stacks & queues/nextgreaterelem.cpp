#include <bits/stdc++.h>
using namespace std;

void nextgreaterelem(int arr[], int n)
{
    stack<int> s;
    s.push(arr[0]);

    for (int i = 1; i < n; i++) 
    {
        while (s.empty() == false 
               && s.top() < arr[i]) 
        {
            cout << s.top() 
                 << " - " << arr[i] << endl;
            s.pop();
        }

        s.push(arr[i]);
    }

    while (s.empty() == false) {
        cout << s.top() << " - " << -1 << endl;
        s.pop();
    }
}

int main()
{
    int n;
    cout<<"enter number of elements in array: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    nextgreaterelem(arr, n);
    return 0;
}
