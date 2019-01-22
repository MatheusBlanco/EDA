int f2(int a) {
    int b = 3;
    return a + b;
}

int f1(int a) {
    int b = 5;
    return f2(4) + b;
}

int main() {
    int b = 10, a = 20;
    b = f1(a);
    a = b + 2;
    return 0;
}
