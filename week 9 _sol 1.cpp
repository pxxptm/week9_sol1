#include <iostream>
using namespace std;
//095
main()
{
    long long int n;
    cout << "Input Nuber : ";
    cin >> n;
    cout << "Output : ";
    int k=n/2;
    if(2*k==n) cout << "Even Number";
    else cout << "Odd Number";

    return 0;
}
