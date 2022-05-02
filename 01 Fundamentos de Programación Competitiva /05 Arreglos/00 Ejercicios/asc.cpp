#include <iostream>
using namespace std;
int asc (const void * a, const void * b){
return ( *(int*)a - *(int*)b );
}
int main(){
int N, i;
cout << "Numero de datos a ordenar:";
cin >> N;
int datos[N];
for( i = 0 ; i < N; i++ ) {
cin >> datos[i];
}
qsort(datos, N, sizeof(int), asc); // Función de ordenación
cout << endl << "Datos Ordenados Ascendente:" << endl;
for( i = 0 ; i < N; i++ ) {
cout << datos[i] << " ";
}
return 0;
}