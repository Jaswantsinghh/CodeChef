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
        long long n;
        cin >> n;
        int arr[n],countt=0;
        for(int i=0;i<n;i++)
        {
            cin >> arr[i];
        }
        for(int i=0;i<n;i++)
        {
            long long sum=0, product=1;
            for(int j=i;j>=0;j--)
            {
                sum=sum+arr[j];
                product=product*arr[j];
                if(product==sum)
                {
                    countt=countt+1;
                }
                
            }
        }
        cout << countt << "\n";
    }
	// your code goes here
	return 0;
}
