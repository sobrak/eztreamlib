#include <iostream>
#include "eztreamlib.h"

void write() {
    const char* TestFile[] = {"test.txt", "Hello again))", nullptr};
    Writefile(TestFile);
}

void read() {
    const char* TestFile[] = {"test.txt", nullptr};
    Readfile(TestFile);
}

int main() {
    std::cout << "this is the simple example how to use this lib" << std::endl;
    read();
    write();
    read();
    return 0;
}