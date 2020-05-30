#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long n,n1,n2;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> n1;
        cin >> n2;
        cout << (n1*n2)-(n1+n2-1) <<"\n";
    }
	// your code goes here
	return 0;
}
