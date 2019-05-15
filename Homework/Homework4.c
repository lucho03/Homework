#include <stdio.h>
int second_max_num(int *a, int siz)
{
    int i;
    int max = a[i];
    int max2 = a[i];
    for(i = 0; i <= siz; i++){
        if(a[i + 1] > max){
            max = a[i + 1];
        }
    }
    for(i = 0; i <= siz; i++){
        if(a[i + 1] > max2){
            if(a[i + 1] < max){
                max2 = a[i + 1];
            }
        }
    }
    return max2;
}
int main()
{
    int a[] = {2,4,9,17,0,23,3};
    int siz = sizeof(a)/sizeof(int) - 1;
    printf("size of masive = %d\n",siz);
    printf("%d\n",second_max_num(a,siz));
    return 0;
}
