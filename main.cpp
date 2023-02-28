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


int main()
{
    practice();
    std::cout << "Code: 1 or 0: ";
    int output;
    std::cin >> output;
    while ((output != 0) && (output != 1))
    {
        std::cout << "ERROR!\n";
        std::cout << "Code: 1 or 0: ";
        std::cin >> output;
    }
    std::cout << "Code: " << output << "\n\n";
    std::cout << "Done!\n";
    return 0;
}