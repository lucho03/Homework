#include <stdio.h>
int copy_fun(char *a, char *b)
{
    int i;
    for(i = 0; a[i] != '\0'; i++){
        b[i] = a[i];
    }
    return i+1;
}
int main()
{
    char a[7] = "hello";
    char b[7];
    int y = copy_fun(a,b);
    printf("%d %s", y, b);
    return 0;
}
