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
        int num=1;
        int even=2;
        int odd=1;
        cin >> n;
        int arr[n][n]={0};
        if(n%2!=0)
        {
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<n;j++)
                {
                    arr[i][j]=num++;
                }
            }
        }
        else
        {
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<n;j++)
                {
                    if((i%2==0&&j%2==0)||(i%2!=0&&j%2!=0))
                    {
                        arr[i][j]=odd;
                        odd +=2;
                        
                    }
                    else
                    {
                        arr[i][j]=even;
                        even +=2;
                    }
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                    cout << arr[i][j] <<" ";
            }
            cout << "\n";
        }
    }
	// your code goes here
	return 0;
}
