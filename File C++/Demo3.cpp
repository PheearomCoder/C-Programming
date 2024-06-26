#include <iostream>
#include <fstream>
#include <string>

void createHeaderFile(const std::string& filename) {
    try {
        // Check if the filename contains a double quote
        if (filename.find("\"") != std::string::npos) {
            throw std::invalid_argument("Filename cannot contain a double quote");
        }
        
        // Create the header file
        std::ofstream file(filename + ".h");
        if (file.is_open()) {
            file << "#pragma once\n\n";
            file << "// Header file content\n";
            file.close();
            std::cout << "Header file created successfully: " << filename << ".h" << std::endl;
        } else {
            throw std::runtime_error("Failed to create header file");
        }
    } catch (const std::exception& e) {
        // Log the error
        std::cerr << "Error: " << e.what() << std::endl;
    }
}

int main() {
    std::string filename = "header_file";
    createHeaderFile(filename);
    return 0;
}
