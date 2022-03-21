
template <typename T>
void swap(T &a, T &b) {
    T buf = a;
    a = b;
    b = buf;
}

void task1() {
    std::string left = "Left";
    std::string right = "Right";
    swap(left, right);
    std::cout << "Left = "  << left << " Right = " << right << std::endl;
    double a = 14.5;
    double b = 3.8;
    std::swap(a, b);
    std::cout << "a = " << a << " b = " << b << std::endl;
}
