202610305123 王陈诚
#include <stdio.h>

int main() {
    float num;
    scanf("%f", &num);
    
    if (num > 0) {
        printf("正数\n");
    } else if (num < 0) {
        printf("负数\n");
    } else {
        printf("零\n");
    }

    return 0;
}