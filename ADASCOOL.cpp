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
        int row,col;
        cin >> row;
        cin >> col;
        if((row*col)%2==0)
        {
            cout << "YES" <<"\n";
        }
        else if((row*col)%2!=0)
        {
            cout << "NO" <<"\n";
        }
    }
	// your code goes here
	return 0;
}
