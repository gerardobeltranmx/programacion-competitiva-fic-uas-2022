#include <iostream>

using namespace std;

int main()
{
    int N, M, i;

    cin >> N;

    for (i=1; i <=10 ; i++){
        M = N*i;
        cout << N << " X " << i << " = " << M << endl;
    }

    return 0;

}