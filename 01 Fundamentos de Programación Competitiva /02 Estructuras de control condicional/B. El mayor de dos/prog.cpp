#include <iostream>

using namespace std;

int main()
{
    int numero_A, numero_B;

    cin >> numero_A >> numero_B;
    //cin >> numero_B;

    if (numero_A > numero_B){
       cout << numero_A;
    }
    else{
        cout << numero_B;
    }
    
    return 0;
}