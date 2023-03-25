#include <iostream>
#include <string>
#include <vector>
#include "lesson_1.h"
#include "lesson_2.h"
#include "lesson_3.h"


int main()
{
    std::vector<int> test{ 1, 2, 3, 4, 5, 6, 8, 10 };
    // practice();
   // std::cout << "Code: 1 or 0: ";
   // int output;
   // std::cin >> output;
   // while ((output != 0) && (output != 1))
   // {
    //    std::cout << "ERROR!\n";
     //   std::cout << "Code: 1 or 0: ";
     //   std::cin >> output;
  //  }
  //  std::cout << "Code: " << output << "\n\n";
  //  std::cout << "Done!\n";

    filter(test);
    std::cout << "\n";
    last();
    return 0;
}