# PoolWork

A minimal, lightweight, modern C++ thread pool for easy multithreading in your projects.

## 🚀 Features

- Simple header-only design
- Easy to integrate
- Submit any callable task with arguments
- Returns `std::future` for result retrieval
- Until further notice only works for C++17 and higher

---

## 📦 Installation

1. Copy `include/ThreadPool.h` into your project.
2. Include it where needed:

```cpp
#include "ThreadPool.h"
```
Example
```cpp
#include "ThreadPool.h"
#include <iostream>

int main() {
    ThreadPool pool(4); // Use 4 worker threads

    auto future = pool.enqueue([](int a, int b) {
        return a + b;
    }, 2, 3);

    std::cout << "Result: " << future.get() << std::endl;

    return 0;
}
```
✨ Contributing

Pull requests are welcome for improvements, bug fixes, or documentation enhancements.

🙏 Acknowledgements

Inspired by standard C++ thread pool patterns and StackOverflow discussions.
