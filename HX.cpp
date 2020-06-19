#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    int maxx=0,row,col;
    cin >> t;
    int arr[t][t];
    int out[t][t]={0};
    for(int i=0;i<t;i++)
    {
        for(int j=0;j<t;j++)
        {
            cin >>  arr[i][j];
            out[i][j]=0;
            if(arr[i][j]>maxx)
            {
                row=i;
                col=j;
                maxx=arr[i][j];
            }
        }
    }
    out[row][col]=1;
    for(int i=0;i<t;i++)
    {
        for(int j=0;j<t;j++)
        {
            cout <<  out[i][j] <<" ";
        }
        cout << "\n";
    }
    
    
	// your code goes here
	return 0;
}
