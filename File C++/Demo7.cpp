#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
    char name[20], gender[30];
    int id;
    int n;
    fstream f;

    cout << "Enter n: ";
    cin >> n;
    cin.ignore();

    // Check if the file exists
    f.open("Info.txt", ios::in);
    bool fileExists = f.good();
    f.close();

    f.open("Info.txt", ios::app);

    // Write the header only if the file doesn't exist
    if (!fileExists) {
        f << "NAME \tID \t GENDER" << endl;
        cout << "Enter Name   : ";
        gets(name);
        cout << "Enter ID     : ";
        cin >> id;
        cin.ignore();
        cout << "Enter Gender : ";
        gets(gender);

        f << name << "\t" << id << "\t" << gender << endl;
    }

    for (int i = 0; i < n; i++) {
        cout << "Enter Name   : ";
        gets(name);
        cout << "Enter ID     : ";
        cin >> id;
        cin.ignore();
        cout << "Enter Gender : ";
        gets(gender);

        f << name << "\t" << id << "\t" << gender << endl;
    }

    f.close();

    return 0;
}
