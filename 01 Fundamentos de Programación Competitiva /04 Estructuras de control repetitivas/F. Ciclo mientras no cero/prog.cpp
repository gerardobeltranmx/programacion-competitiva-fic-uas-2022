#include <iostream>

using namespace std;

int main()
{
    int n, suma=0;
   
    do {
        cin >> n;
        suma += n;
    }while (n > 0);

    cout << suma << endl; 

    return 0;

}