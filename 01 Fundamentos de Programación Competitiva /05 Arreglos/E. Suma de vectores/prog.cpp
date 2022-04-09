#include <iostream>

using namespace std;

int main()
{
    int N,i;

    cin >> N;
    int arr1[N], arr2[N];

    for (i=0;i<N;i++){ // entrada arreglo 1 
        cin >> arr1[i]; 
    }
    for (i=0;i<N;i++){ // entrada arreglo 2
        cin >> arr2[i]; 
    }
    
    for (i=0; i<N ; i++){
        cout << arr1[i] + arr2[i] << " ";
    }


    return 0;

}