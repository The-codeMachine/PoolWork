#include "ThreadPool.hpp"
#include <iostream>

int main() {
    ThreadPool pool(4); // Use 4 worker threads

    auto future = pool.enqueue([](int a, int b) {
        return a + b;
        }, 2, 3);

    std::cout << "Result: " << future.get() << std::endl;

    return 0;
}