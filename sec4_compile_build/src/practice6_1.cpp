#include "practice6.hpp"

int main(){
    Product p(5);
    show_uint_value(p.getPrice());
    p.setPrice(3);
    show_uint_value(p.getPrice());
}