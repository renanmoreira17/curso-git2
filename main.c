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

int mult(int a, int b)
{
    return a * b;
}

int div(int a, int b)
{
    return a / b;
}

int main() {
    int n1, n2, n3;
    n3 = add(n1, n2);
    float f1, f2, f3;
    f3 = add_f(f1, f2);
    int m1, m2, m3;
    m3 = mult(m1, m2);
    int d1, d2, d3;
    d3 = div(d1, d2);
    return 0;
}
