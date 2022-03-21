

void change_order(int *a) {
    int i = 0;
    while (i != 5) {
        swap(*(a + i), *(a + 9 - i));
        i++;
    }
}

void task2() {
    int a[] = {1,2,3,4,5,6,7,8,9,10};
    change_order(a);
    for (int i = 0; i < 10; i++) {
        std::cout << *(a + i) << " ";
    }
}

