#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
int numCalif, i, c, k, n, suma=0, contador;
double promedio, porcentaje;

  
    cin >> c; // Numero de casos/grupos

    for (k=0; k<c; k++){
        suma=0;
        contador=0;
        cin >> n; // numero de estudiantes del caso/grupo
        int calif[n]; 
        for (i=0; i<n; i++ ){
            cin >> calif[i];
            suma += calif[i]; // suma de calificaciones del caso/grupo  
        }
        promedio = (double) suma / n; // promedio del caso/grupo

        for (i=0; i < n ; i++){
            if (calif[i]>promedio){
                contador++;
            }
        }

        // Porcentaje del caso/grupo
        porcentaje = (double)contador/n * 100;
        cout << fixed << setprecision(3) << porcentaje << "%"<< endl;

    }

    return 0;

}