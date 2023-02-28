#include <iostream>
#include <string>


void iLoveMom() 
{
    int i = 0;
    while (true)
    {
        std::cout << "I love you mom! " << i << "\n";
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
    iLoveMom();
    std::cout << "Code: 1 or 0: ";
    int output;
    std::cin >> output;
    while (output != 0 || output != 1)
    {
        if (output == 1 or output == 0)
        {
            break;
        }
        std::cout << "ERROR!\n";
        std::cout << "Code: 1 or 0: ";
        std::cin >> output;
    }
    std::cout << "Code: " << output << "\n\n";
    std::cout << "Done!\n";
    return 0;
}