#include <iostream>

class Vector3d
{
private:
    float x;
    float y;
    float z;

public:
    Vector3d();
    explicit Vector3d(float x, float y, float z);
    friend Vector3d sub(const Vector3d &v1, const Vector3d &v2);
    void show();
};

Vector3d::Vector3d() : Vector3d(0, 0, 0) {}

Vector3d::Vector3d(float x, float y, float z) : x(x), y(y), z(z) {}

Vector3d sub(const Vector3d &v1, const Vector3d &v2)
{
    return Vector3d(v1.x - v2.x, v1.y - v2.y, v1.z - v2.z);
}

void Vector3d::show(){
        std::cout << "x:" << x << ",y:" << y << ",z:" << z << std::endl;

}
int main()
{
    Vector3d v1(1, 2, 3);
    Vector3d v2;
    Vector3d v3 = sub(v1, v2);
    v3.show();
}