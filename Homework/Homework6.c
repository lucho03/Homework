#include <stdio.h>
int print_fun(int *a, int b)
{
    for(int i = 0; i <= b; i++){
        printf("%d ",a[i]);
    }
    printf("\n");
}
int reverse(int *a, int b)
{
    int p = 0;
    for(int i = 0; i <= b/2; i++){
        p = a[i];
        a[i] = a[b - i];
        a[b - i] = p;
    }
}
int main()
{
    int a[] = {4, 1, 9, -17, 8, 10,15};
    int b = sizeof(a)/sizeof(int) - 1;
    print_fun(a,b);
    reverse(a,b);
    print_fun(a,b);
    return 0;
}
