#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    char name[20], gender[30];
    int id;
    int n;
    fstream f;
    cout << "Enter n: ";
    cin >> n;
    cin.ignore();
    
    f.open("Info.txt", ios::app); // Open the file in append mode
    
    for (int i = 0; i < n; i++) {
        if (i == 0) {
            f << "NAME \tID \t GENDER" << endl;
        }
        cout << "Enter Name   : ";
        cin.ignore();
        cin.getline(name, 20);
        cout << "Enter ID     : ";
        cin >> id;
        cin.ignore();
        cout << "Enter Gender : ";
        cin.getline(gender, 30);
        f << name << "\t" << id << "\t" << gender << endl;
    }
    
    f.close(); // Close the file after writing
    
    cout << "Data has been written to Info.txt." << endl;

    return 0;
}
