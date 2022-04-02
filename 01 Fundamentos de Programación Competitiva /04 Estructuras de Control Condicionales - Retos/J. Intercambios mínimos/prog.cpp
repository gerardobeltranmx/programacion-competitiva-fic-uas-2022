#include <iostream>

using namespace std;

int main()
{

    long A, B, C;
    int N=0;

    cin >> A >> B >> C ;

    if (A > B) 
        if (B > C)
            N++;
        else 
            if (B < C  and A < C)
                N++;
            else
                N+=2;    
    else 
        if ( B > C and  C > A)
            N++; 
        else if (C<A)
            N+=2;
 

    cout << N << endl;

    return 0;

}