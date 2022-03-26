#include <stdio.h>
int main(int argc, char const *argv[])
{
    int l1, l2, l3;

    scanf("%d %d %d", &l1, &l2, &l3);

    if (l1==l2 && l1==l3)
        printf("equilatero");
    else if (l1==l2 || l2==l3 || l3==l1)
        printf("isosceles");
    else
        printf("escaleno");
    

    return 0;
}
