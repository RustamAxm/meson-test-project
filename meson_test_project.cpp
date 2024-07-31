#include <iostream>

#define PROJECT_NAME "meson-test-project"

int main(int argc, char **argv) {
    if(argc != 1) {
        std::cout << "takes no arguments.CPP" << argv[0] << std::endl;
        return 1;
    }
    std::cout << "This is project CPP " << PROJECT_NAME << std::endl;
    return 0;
}
