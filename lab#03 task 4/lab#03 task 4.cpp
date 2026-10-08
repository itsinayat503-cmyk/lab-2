#include <iostream>
#include <string>
using namespace std;

class House {
private:
    string HouseAddress;
    int HouseRooms;
    double price;
public:
    void setHouseAddress(string address) {
        HouseAddress = address;
    }
    void setHouseRooms(int rooms) {
        HouseRooms = rooms;
    }
    void setPrice(double Price) {
        price = Price;
    }
    string getHouseAddress() {
        return HouseAddress;
    }
    int getHouseRooms() {
        return HouseRooms;
    }
    double getPrice() {
        return price;
    }
};

int main() {
    House house;
    house.setHouseAddress("123 Main Street");
    house.setHouseRooms(5);
    house.setPrice(12000.0);

    cout << house.getHouseAddress() << endl;
    cout << house.getHouseRooms() << endl;
    cout << house.getPrice() << endl;
}