#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long t,num,tri,sq;
    cin >> t;
    for(int i=0;i<t;i++)
    {
        long long sum=0;
        cin >> num;
        if(num==1||num==2||num==3)
        {
            cout << "0" <<"\n";
        }
        else if(num>3&&num%2!=0)
        {
        num=num-1;
        tri=((num/2)*num)-((num/2)*2);
        sq=tri/4;
        cout << abs(sq) << "\n";
        }
        else if(num>3&&num%2==0)
        {
        tri=((num/2)*num)-((num/2)*2);
        sq=tri/4;
        cout << abs(sq) << "\n";
        }
    }
	// your code goes here
	return 0;
}
