#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        int cnt=1;
        int maxx=1;
        cin >> n;
        int arr[n];
        
        for(int i=0;i<n;i++)
        {
            cin >> arr[i];
        }
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(arr[i]==arr[j]&&arr[i]!=-1&&arr[j]!=-1)
                {
                    cnt++;
                    arr[j]=-1;
                    if(cnt>maxx)
                    {
                        maxx=cnt;
                    }
                }
            }
            cnt =1;
        }
        
        cout << n-maxx <<"\n";
        
        
    }
	// your code goes here
	return 0;
}
