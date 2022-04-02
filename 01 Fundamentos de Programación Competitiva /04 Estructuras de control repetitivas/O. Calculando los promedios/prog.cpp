#include <iostream>
#include <iomanip> 
using namespace std;

int main()
{
    int numListas, l, k,i,n;
    int suma, menor, mayor;
    float prom;

    cin >> numListas; // Numero de listas 
    for (l=0; l< numListas; l++ ){ // recorre todas las listas
        suma=0;
        menor=1001;
        mayor=0;
        cin >> k; // tamaño de la lista
        for (i=0; i < k ; i++){ // recorre una lista
            cin >> n; // dato de la lista
           
            if (n > mayor) // determina el mayor
                mayor=n;

            if (n < menor) // determina el menor
                menor = n;    

            suma +=n;
        }
        prom = (float)suma / k;

        if (suma % k == 0){
            cout << fixed << setprecision(0) << prom << " " << menor << " " << mayor<< endl; 
        }
        else
            cout << fixed << setprecision(3) << prom << " " << menor << " " << mayor<< endl; 

    }
    return 0;

}