#include "Log.h"
#include <future>

int main()
{
    auto x = std::async([&]() {
        WARNING("First Warning");
        });
    ERROR("Second Warning");
    x.wait();
    system("pause");
}