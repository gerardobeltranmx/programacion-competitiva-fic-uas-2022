#include <iostream>

using namespace std;

int main()
{
    int n, m, a, b;

    cin >> n >> m;

    a = n / m; // division entera

    b = n % m; // residuo

    if (b==0)
        cout << a << endl;
    else
        cout << a << " " << b << "/" << m << endl;   
 
    return 0;
}