#include <iostream>

using namespace std;

int main()
{
    int N, M, i=1;

    cin >> N;

    while (i <=10){
        M = N*i;
        cout << N << " X " << i << " = " << M << endl;
        i++;
    }

    return 0;

}