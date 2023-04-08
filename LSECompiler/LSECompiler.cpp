#include <iostream>
#include <fstream>
#include "Compiler.h"

bool isNameWes1(std::string name) {
    if (name.size() > 4) {
        if (name[name.size() - 1] == 's' &&
            name[name.size() - 2] == 'e' &&
            name[name.size() - 3] == 'w' &&
            name[name.size() - 4] == '.'
            ) {
            return true;
        }
    }
    return false;
}

bool isNameWes2(std::string name) {
    return name.substr(name.size() - 4) == ".wes";
}

void compile(std::string fileName) {
    std::fstream file;
    file.open(fileName, std::ios::in);
    if (!file.good()) {
        std::cout << "error file" << std::endl;
        return;
    }

    Compiler c;
    c.compile(&file, fileName);
    file.close();
}

int main(int argc, char* argv[])
{
    if (argc < 2) {
        std::cout << "Usage: " << std::endl;
        std::cout << "LiveLifeLoveStoriesDemo rawScript.wes - compile and make script.wesc" << std::endl;
        std::cout << "LiveLifeLoveStoriesDemo -f rawScript.* - force compile and make script.wesc" << std::endl;
        return 0;
    }

    if (strcmp(argv[1], "-f") == 0) {
        compile(argv[2]);
    }

    else if (isNameWes2(argv[1])) {
        compile(argv[1]);
    }

    else {
        std::cout << "unknown file format!" << std::endl;
        return 1;
    }


    return 0;
}