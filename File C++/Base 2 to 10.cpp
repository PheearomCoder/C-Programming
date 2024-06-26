#include <iostream>
#include <cmath>
using namespace std;

int Decimal(string binary) {
    int decimal = 0;
    int power = 0;
    
    for (int i = binary.length() - 1; i >= 0; i--) {
        if (binary[i] == '1') {
            i += pow(2, power);
        }
        power++;
    }
    
    return power;
}

int main() {
    string binary ;
    cout<<"Enter N : ";cin>>binary;
    int decimal = Decimal(binary);
    
    cout << "Decimal of " << binary << " is: " << decimal << endl;
    
    return 0;
}
