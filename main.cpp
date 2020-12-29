//#include <iostream>
//
//int main() {
//    std::cout << "Hello, World!" << std::endl;
//    return 0;
//}
#include <cstdio>
#include <cstdlib>

int main() {
    for (int i = 1; i <= 10; i++) {
        // 1.上半段的情况
        if (i <= 5) {
            // 1.控制*前的空格
            for (int k = i; k <= 4; k++) {
                printf(" ");
            }
            // 2.控制*输出
            for (int j = 1; j <= i; j++) {
                printf("* ");
            }
        } else { // 2.下半段的情况
            for (int k = 4; k >= 10 - i; k--) {
                printf(" ");
            }
            for (int j = 10 - i; j >= 1; j--) {
                printf("* ");
            }
        }
        printf("\n");
    }
    system("pause");
    return 0;
}
