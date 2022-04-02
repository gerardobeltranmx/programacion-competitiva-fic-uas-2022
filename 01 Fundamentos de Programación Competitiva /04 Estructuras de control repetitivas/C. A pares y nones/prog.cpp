#include <iostream>

using namespace std;

int main()
{
    int N, contador = 0, valorCarta;
    int sumaAparicio=0, sumaNonila=0, cuentaAparicio=0, cuentaNonila=0;
    int promAparicio, promNonila;
    cin >> N;

    while (contador < N){
        cin >> valorCarta;
        if (valorCarta % 2 == 0 ){ // es para aparicio
            sumaAparicio+=valorCarta;
            cuentaAparicio++;
        }
        else { // es para Nonila
            sumaNonila+=valorCarta;
            cuentaNonila++;
        }
        contador++;
    }

    promAparicio = sumaAparicio / cuentaAparicio;
    promNonila = sumaNonila / cuentaNonila;

    if (promAparicio > promNonila){
        cout << "APARICIO" << endl;
    }
    else if (promNonila > promAparicio ){
        cout << "NONILA"<< endl;
    }
    else
        cout << "EMPATE!" << endl;





    return 0;

}