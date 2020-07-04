#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n1,n2,n3;
    int x=0;
    cin >> n1;
    cin >> n2;
    cin >> n3;
    int arr[n1+n2+n3];
    for(int i=0;i<n1+n2+n3;i++)
    {
        cin >> arr[i];
    }
    sort(arr,arr+n1+n2+n3);
    set <int> sol;
    for(int i=0;i<n1+n2+n3;i++)
    {
        if(arr[i]==arr[i+1])
        {
            sol.insert(arr[i]);
        }
    }
    cout<<sol.size()<<endl;
	for(auto it:sol)
	    cout<<it<<endl;
	// your code goes here
	return 0;
}
