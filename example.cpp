#include <iostream>
#include "eztreamlib.h"

int main() {
    std::cout << "this is the simple example how to use this lib" << std::endl;
    const char* TestFile[] = {"test.txt", nullptr};
    Readfile(TestFile);
    return 0;
}