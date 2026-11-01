202610305123 王陈诚
#include <stdio.h>

int main() {
    // 定义三个浮点型变量存储三条边长
    float a, b, c;
    // 读取用户输入的三个边长
    scanf("%f %f %f", &a, &b, &c);

    // 判断三角形的核心条件：任意两边之和大于第三边
    if (a + b > c && a + c > b && b + c > a) {
        printf("能构成三角形\n");
    } else {
        printf("不能构成三角形\n");
    }

    return 0;
}