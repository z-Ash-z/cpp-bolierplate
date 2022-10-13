#include <iostream>
#include <lib.hpp>
#include <vector>

int main()
{
    dummy();

    bool condition{true};
    if (condition)
    {
        std::cout << "Hakuna matata" << std::endl;
    }

    std::vector<int> test { 1, 2, 3, 4, 5 };
    test[4] = 0;

    return 0;
}
