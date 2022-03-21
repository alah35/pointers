
template <typename T>
void swap(T &a, T &b) {
    T buf = a;
    a = b;
    b = buf;
}

void task1() {
    std::string a = "bab";
    std::string b = "aba";
    swap(a, b);
    std::cout << a << " " << b;
}
