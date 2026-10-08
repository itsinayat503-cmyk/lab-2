#include <iostream>
#include <string>
using namespace std;

class Product {
private:
    string ProductName;
    int ProductId;
    double Price;
public:
    void setProductName(string name) {
        ProductName = name;
    }
    void setProductId(int id) {
        ProductId = id;
    }
    void setPrice(double p) {
        Price = p;
    }
    string getProductName() {
        return ProductName;
    }
    int getProductId() {
        return ProductId;
    }
    double getPrice() {
        return Price;
    }
};

int main() {
    Product product;
    product.setProductName("Laptop");
    product.setProductId(101);
    product.setPrice(75000);

    cout << product.getProductName() << endl;
    cout << product.getProductId() << endl;
    cout << product.getPrice() << endl;
}
