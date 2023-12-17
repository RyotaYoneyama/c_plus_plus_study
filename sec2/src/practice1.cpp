#include <iostream>

struct Product
{
    int id;
    int price;
    int stock;
};


void show_product(Product *p ){
    printf("id: %d\nprice: %d\nstock: %d\n", p->id, p->price, p->stock);
}
int main()
{
    Product pro{
        0,100,200
    };
    
    show_product(&pro);
}