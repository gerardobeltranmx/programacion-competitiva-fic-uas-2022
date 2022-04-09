#include <iostream>

using namespace std;

int main()
{
    int N, i;
    
    cin >> N; // tamaño del arreglo

    int datos[N];



    for (i=0; i<N; i++){
        cin >> datos[i];
    }

    for (i=N-1; i>=0; i--){
        cout << datos[i] << " ";
    }


    return 0;

}