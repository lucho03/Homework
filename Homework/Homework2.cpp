#include <stdio.h>
using namespace std;
int n = 0;
int count()
{
    int c = ++n;
    return c;
}
int main()
{
    printf("%d\n",count());
    printf("%d\n",count());
    printf("%d\n",count());
    return 0;
}
