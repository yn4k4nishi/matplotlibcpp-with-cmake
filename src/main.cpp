#include <iostream> 
#include "../matplotlib-cpp/matplotlibcpp.h"

namespace plt = matplotlibcpp;

int main() {
    plt::plot({1,3,2,4});
    plt::show();
}