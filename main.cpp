//#include <iostream>
//
//int main() {
//    std::cout << "Hello, World!" << std::endl;
//    return 0;
//}
#include <stdio.h>
#include <cstdlib>

int main() {
    for (int i = 1; i <= 10; i++) {
        if (i <= 5) {
            // 1.控制*前的空格
            for (int k = i; k <= 4; k++) {
                printf(" ");
            }
            for (int j = 1; j <= i; j++) {
                printf("* ");
            }
        } else {
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
