#include <iostream>

class Product
{
private:
    int id_;
    int price_;
    int stock_;

public:
    bool set_all_values(const int &id, const int &price, const int &stock) noexcept;
    void get_all_values(int &id, int &price, int &stock) noexcept;
};

bool Product::set_all_values(const int &id, const int &price, const int &stock) noexcept
{

    if (id <= 0 || price <= 0 || stock <= 0)
    {
        printf("Inputs are less than 0 or equals 0.");
        return false;
    }
    id_ = id;
    price_ = price;
    stock_ = stock;
    return true;
}

void Product::get_all_values(int &id, int &price, int &stock) noexcept
{
    id = id_;
    price = price_;
    stock = stock_;
}

int main()
{
    Product p;
    if(!p.set_all_values(1, 500, 200)){
        printf("Error");
        return -1;
    }
    Product *p_ = &p;
    int id, price, stock;
    p_->get_all_values(id, price, stock);
    printf("id: %d\nprice: %d\nstock: %d\n", id, price, stock);
}
