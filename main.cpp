#include <iostream>
#include "Tasks.h"

int main() {
    int n = 0;
    while (n != -1) {
        std::cout << std::endl << "Enter task number:" << std::endl;
        std::cin >> n;
        switch (n) {
            case 1:
                task1();
                break;
            case 2:
                task2();
                break;
            case 3:
                task3();
                break;
            case -1:
                break;
            default :
                std::cout << "Wrong number. Try again";
                break;
        }
    }
    return 0;
}
