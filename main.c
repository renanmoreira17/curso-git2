#include <stdio.h>

#define add_generico(a, b) a+b

int add(int a, int b)
{
    return add_generico(a, b);
}

float add_f(float a, float b)

{
    return add_generico(a, b);
}


int main() {
    int n1, n2, n3;
    n3 = add(n1, n2);
    return 0;
}
