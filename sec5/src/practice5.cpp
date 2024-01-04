#include <iostream>
#include <initializer_list>

class FloatVector
{
private:
    std::size_t size_;
    float *array_;

public:
    FloatVector(std::initializer_list<float> init);
    ~FloatVector();
    std::size_t size() const;
    float at(unsigned int id) const;
};

FloatVector::FloatVector(std::initializer_list<float> init) : size_{init.size()}, array_{new float[init.size()]}
{
    for (auto const &i : init)
    {
        std::cout << i << std::endl;
    }
}
FloatVector::~FloatVector() { delete[] array_; }
std::size_t FloatVector::size() const { return size_; }
float FloatVector::at(unsigned int id) const { return array_[id]; }

int main(){
    FloatVector fv = {1,2,3,4,5};
}
