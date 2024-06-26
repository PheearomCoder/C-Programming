#include <iostream>
#include <vector>
using namespace std;

vector<int> base(int number) {
    vector<int> binary;
    
    while (number > 0) {
        binary.push_back(number % 2);
        number /= 2;
    }
    
    return binary;
}

int main() {
    int number ;
    cout<<"Enter N : ";cin>>number;
    vector<int> binary = base(number);
    
    cout << "Binary of " << number << " is : ";
    for (int i = 0; i < binary.size(); i++) {
        cout << binary[i];
    }
    cout << endl;
    
    return 0;
}
