#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long t,n1,n2;
    cin >> t;
    for(int i=0;i<t;i++)
    {
        cin >> n1;
        cin >> n2;
        if(n1==n2)
        {
            cout << "="<<"\n";
        }
        else if(n1>n2)
        {
            cout << ">"<<"\n";
        }
        else if(n1<n2)
        {
            cout << "<" << "\n";
        }
    }
	// your code goes here
	return 0;
}
