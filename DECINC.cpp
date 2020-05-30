#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;
    if(n%4==0)
    {
        n=n+1;
    }
    else
    {
        n=n-1;
    }
    cout << n;
	// your code goes here
	return 0;
}
