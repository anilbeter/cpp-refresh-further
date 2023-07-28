#include <cstdint>
#include <iostream>

int main()
{
    bool b1 = true;
    bool b2 = false;

    bool c1 = ((b1 || b2) && b1);

    if (b1 == true)
    {
        std::cout << "Printy Printy\n";
    }
    else if (!b2)
    {
        std::cout << "Hello!!";
    }
    // Printy Printy

    std::int32_t result;

    if (b1)
    {
        result = 10;
    }
    else
    {
        result = -10;
    }

    // Ternary Operator
    std::int32_t result2 = b1 ? 10 : -10;
    std::cout << result2; // 10
    return 0;
}
