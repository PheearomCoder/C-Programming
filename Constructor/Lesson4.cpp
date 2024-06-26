#include <iostream>
#include <string>

class Produce {
public:
    // Default constructor
    Produce() {
        Name = "";
        Code = "";
        Price = 0.0;
        Discount = 0.0;
        Qty = 0;
        Total = 0.0;
        Payment = 0.0;
        Revenue = 0.0;
    }

    // Parameterized constructor
    Produce(const std::string& name, const std::string& code, double price, double discount, int qty, double payment) {
        Name = name;
        Code = code;
        Price = price;
        Discount = discount;
        Qty = qty;
        Payment = payment;
        Total = calculateTotal();
        Revenue = calculateRevenue();
    }

    // Function to calculate total cost based on price and quantity
    double calculateTotal() {
        return Price * Qty;
    }

    // Function to calculate revenue based on total cost, discount, and payment
    double calculateRevenue() {
        return (Total * (1 - Discount)) - Payment;
    }

    // Display information about the produce item
    void displayInfo() {
        std::cout << "Name: " << Name << std::endl;
        std::cout << "Code: " << Code << std::endl;
        std::cout << "Price: " << Price << std::endl;
        std::cout << "Discount: " << Discount << std::endl;
        std::cout << "Quantity: " << Qty << std::endl;
        std::cout << "Total: " << Total << std::endl;
        std::cout << "Payment: " << Payment << std::endl;
        std::cout << "Revenue: " << Revenue << std::endl;
    }

private:
    std::string Name;
    std::string Code;
    double Price;
    double Discount;
    int Qty;
    double Total;
    double Payment;
    double Revenue;
};

int main() {
    Produce defaultProduce;  // Create an instance using the default constructor
    defaultProduce.displayInfo();

    std::cout << std::endl;

    Produce apple("Apple", "APL001", 1.99, 0.1, 50, 80.0);  // Create an instance using the parameterized constructor
    apple.displayInfo();

    return 0;
}
