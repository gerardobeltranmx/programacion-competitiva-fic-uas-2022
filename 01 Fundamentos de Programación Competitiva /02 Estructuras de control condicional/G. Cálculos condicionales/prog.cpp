#include <iostream>

using namespace std;

int main()
{
    int N, contador = 0;

    cin >> N;
    
    if (N % 2 == 0){
        N= N / 2;
    }
    else {
        N++;
    }
    contador++;

    if (N>=100){
        N = N / 100;
        contador++;
    }    
    else if (N>=10){
        N = N / 10;
        contador++;
    }   

    if (N % 3 == 0 ){
       N--;
       contador++;     
    }   

    cout << N << " " << contador << endl;

    return 0;
}