#include <iostream>
#include <fstream>
using namespace std;
void writeFileInLoop(int numFiles) {
    try {
        for (int i = 1; i <= numFiles; i++) {
           
            ofstream f;
            f.open("Info.txt",ios::app);
            if (!file.is_open()) {
                throw runtime_error("Failed to open file: " + filename);
            }
            
            file << "This is file " << i << endl;
            
            file.close();
        }
        
        cout << "Files created successfully." << endl;
    } catch (const exception& e) {
        cerr << "Error: " << e.what() << endl;
    }
}

int main() {
    int numFiles = 10;
    writeFileInLoop(numFiles);
    
    return 0;
}
