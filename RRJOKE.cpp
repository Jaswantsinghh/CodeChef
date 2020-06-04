#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >>n;
        int arr[2*n];
        int ans=0;
        for(int i=0;i<2*n;i++)
        {
            cin >> arr[i];
        }
        for(int i=1;i<=n;i++)
        {
            ans=ans^i;
        }
        cout <<  ans <<"\n";
    }
	// your code goes here
	return 0;
}
