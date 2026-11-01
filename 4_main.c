
#include <stdio.h>

int main() {
    float score;
    scanf("%f", &score);

    
    if (score < 0 || score > 100) {
        printf("无效\n");
    } 
    // 从高到低依次判断区间
    else if (score >= 90) {
        printf("A\n");
    }
    else if (score >= 80) {
        printf("B\n");
    }
    else if (score >= 70) {
        printf("C\n");
    }
    else if (score >= 60) {
        printf("D\n");
    }
    else {
        printf("E\n");
    }
    return 0;
}