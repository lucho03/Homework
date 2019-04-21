#include <stdio.h>
int main()
{
    int a = 1;
    while(a < 21){
        int l = 10,p = 0,k = 0;
        p = a%3;
        k = a%5;
        while(p == 0){
            l = 1;
            p = 1;
        }
        while(k == 0){
            l--;
            k = 1;
        }
        switch(l)
        {
            case 1:printf("FIZZ\n");break;
            case 9:printf("BUZZ\n");break;
            case 0:printf("FIZZBUZZ\n");break;
            default:printf("%d\n",a);break;
        }
        a++;
    }
    return 0;
}
