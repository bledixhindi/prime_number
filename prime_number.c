#include <stdio.h>
int main(){
    int a, b, num, i, j;
    
    printf("Numri i pare: ");
    scanf("%d", &a);
    
    printf("Numri i dyte: ");
    scanf("%d", &b);
    
    printf("Numrat prim nga %d deri %d jan:\n", a, b);
    
   for (i = a; i <= b ; ++i){
        num = 0;
        for (j = 2; j <= i/2; ++j){
            if (i % j == 0){
                num = 1;
                break;
            }
        }
    if (num == 0){
        printf("%d\n", i);
    }
    }
    return 0;
}
