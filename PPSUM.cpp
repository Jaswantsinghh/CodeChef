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
        int a,b;
        cin >> a;
        cin >> b;
        int sum=0;
        int num=b;
        while(a--)
        {
             sum=0;
        for(int i=1;i<=num;i++)
        {
            sum=sum+i;
        }
        num=sum;
       
        }
        cout << sum <<"\n";
    }
	// your code goes here
	return 0;
}
