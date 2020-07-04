#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t,h,c;
    cin >> t;
    int arr[t];
    cin >> h;
    int index=0;
    int isempty=1;
    for(int i=0;i<t;i++)
    {
        cin >> arr[i];
    }
    while(1)
    {
        cin >> c;
        if(c==0)
        {
            break;
        }
        else if(c==1)
        {
            if(index!=0)
            {
                index=index-1;
            }
        }
        else if(c==2)
        {
            if(index!=t-1)
            {
                index=index+1;
            }
        }
        else if(c==3)
        {
            if(isempty==1&&arr[index]>0)
            {
                isempty=0;
                arr[index]=arr[index]-1;
                
            }
        }
        else if(c==4)
        {
            if(isempty==0&&arr[index]<h)
            {
                isempty=1;
                arr[index]=arr[index]+1;
                
            }
        }
    }
    for(int i=0;i<t;i++)
    {
        cout << arr[i] << " ";
    }
	// your code goes here
	return 0;
}
