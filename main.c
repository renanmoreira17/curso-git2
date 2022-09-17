#include <stdio.h>

#define add_generico(a, b) a+b

int add(int a, int b)
{
    return a + b;
}


int main() {
    int n1, n2, n3;
    n3 = add(n1, n2);
    return 0;
}
