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
        int cnt=0;
        cin>> n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin >> arr[i];
        }
        sort(arr,arr+n);
        for(int i=0;i<n;i++)
        {
            if(arr[i]<=cnt)
            {
                cnt++;
            }
        }
        cout << cnt <<"\n";
    }
	// your code goes here
	return 0;
}
