#include <iostream>
using namespace std;

class Rectangle {
private:
    double length;
    double width;
public:
    void setLength(double l) {
        length = l;
    }
    void setWidth(double w) {
        width = w;
    }
    double getLength() {
        return length;
    }
    double getWidth() {
        return width;
    }
    double calculateArea() {
        return length * width;
    }
};

int main() {
    Rectangle rectangle;
    rectangle.setLength(10.5);
    rectangle.setWidth(5.0);

    cout << rectangle.getLength() << endl;
    cout << rectangle.getWidth() << endl;
    cout << rectangle.calculateArea() << endl;
}