#include <stdio.h>
using namespace std;
double square_root (double n, int s);
int main()
{
    printf("%f", square_root(69,11));
    return 0;
}

double square_root(double n, int s)
{
    double p = n, u;
    u = (p + n/p) / 2;
    for (int i = 1; i < s; i++){
        u = (u + n/u) / 2;
    }
    return u;
}
