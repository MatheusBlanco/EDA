#include <iostream>

using namespace std;

class Vector3 {
    public:
        double x, y, z;
    private:
        double a, b, c;
};

Vector3 v;
cout << v.x << v.y << v.z << endl;