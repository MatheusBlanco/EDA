struct Data {
    double a[10000];
    double b[10000];
    double c[10000];
};

void function(struct Data data) {
    data.a[0] + data.b[0] + data.c[0];
}

int main() {
    struct Data data;

    for (int i = 0; i < 1000000; ++i) {
        data.a[i % 1000] = 1;
        data.b[i % 1000] = 1;
        data.c[i % 1000] = 1;
        function(data);
    }

    return 0;
}

