#include <iostream>
#include <string>

void practice()
{
    int i = 0;
    while (true)
    {
        std::cout << "C++ while looop! " << i << "\n";
        ++i;
        if (i == 1001)
        {
            break;
        }
    }
    std::string a = "String in cpp, with #include <string>";
    std::cout << "\n" << a << "\n";
}