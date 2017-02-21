#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int num[10];
    for (int i = 0; i < 10; ++i)
        scanf("%d", &num[i]);
    int fmax = abs(num[0]);
    int index = 0;
    for (int i = 0; i < 10; ++i)
        if (fmax > abs(num[i])) {
            fmax = abs(num[i]);
            index = i;
        }
    int t = num[index];
    num[index] = num[9];
    num[9] = t;
    for (int i = 0; i < 10; ++i)
        printf("%d ", num[i]);
    return 0;
}