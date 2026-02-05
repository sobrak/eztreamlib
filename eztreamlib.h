#pragma once
#include <fstream>
#include <string>
#include <iostream>

void Writefile(const char* args[]) {
    if (!args[0] || !args[1]) {
        std::cerr << "Usage: Writefile <filename> <data>\n";
        return;
    }

    std::ofstream file(args[0], std::ios::out | std::ios::trunc);
    if (!file.is_open()) {
        std::cerr << "Error: Could not open file " << args[0] << " for writing\n";
        return;
    }

    for (int i = 1; args[i] != nullptr; i++) {
        file << args[i];
        if (args[i + 1] != nullptr) {
            file << " "; 
        }
    }

    file.close();
}

void Readfile(const char* args[]) {
    if (!args[0]) {
        std::cerr << "Usage: Readfile <filename>\n";
        return;
    }

    std::ifstream file(args[0], std::ios::in);
    if (!file.is_open()) {
        std::cerr << "Error: Could not open file " << args[0] << " for reading\n";
        return;
    }

    std::string line;
    
    while (std::getline(file, line)) {
        std::cout << line << "\n";
    }
    
    file.close();
}