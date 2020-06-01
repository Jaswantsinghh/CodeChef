#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long t,a,b,i,sum=0;
    cin >> t;
    for(int j=0;j<t;j++)
    {
        int arr[101];
        cin >> a;
        cin >> b;
        sum=a+b;
        i=0;
        long long num, total;
        while(sum>0)
        {
            
            num=sum%10;
            if(num==0)
            {
                total=total+6;
            }
            else if(num==1)
            {
                total=total+2;
            }
            else if(num==2)
            {
                total=total+5;
            }
            else if(num==3)
            {
                total=total+5;
            }
            else if(num==4)
            {
                total=total+4;
            }
            else if(num==5)
            {
                total=total+5;
            }
            else if(num==6)
            {
                total=total+6;
            }
            else if(num==7)
            {
                total=total+3;
            }
            else if(num==8)
            {
                total=total+7;
            }
            else if(num==9)
            {
                total=total+6;
            }
            sum=(sum-num)/10;
        }
        cout << total <<"\n";
        total=0;
        sum=0;
        num=0;
    }
	// your code goes here
	return 0;
}
