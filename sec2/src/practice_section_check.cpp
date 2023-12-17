#include <iostream>

class Vector3D
{
public:
    using element_type = int;
    Vector3D(const element_type &x, const element_type &y, const element_type &z = 0) : x_(x), y_(y), z_(z){

                                                                                    };
    void getter() const noexcept;
    void setter(const element_type &x, const element_type &y, const element_type &z) noexcept;
private:
    element_type x_, y_, z_;
};

void Vector3D::getter() const noexcept
{
    std::cout << "x:" << x_ << ", y:" << y_ << ", z:" << z_ << std::endl;
}

void Vector3D::setter(const element_type &x, const element_type &y, const element_type &z) noexcept
{
    x_ = x;
    y_ = y;
    z_ = z;
}

int main()
{
    Vector3D vec3d(2, 4);
    vec3d.getter();
    vec3d.setter(10, 10, 10);
    vec3d.getter();
}