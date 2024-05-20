#include <windows.h>
#include <shellapi.h>
#include <stdlib.h>
#include <fstream>
#include <iostream>
#include <iomanip>
#include <string>

int main()
{
    std::cout << "Enter your sentence:\n";
    std::string line;
    std::getline(std::cin, line);

    std::cout << "Your sentence is:\n" << line << "\n";
    std::cout << "Length of your sentence is: " << line.length() << "\n";
    std::cout << "Fisrt character is: " << line.front() << "\n";
    std::cout << "Last character is: " << line.back() << "\n";

    Sleep(1500);

    std::cout << "\n" << "Good\n"<< "\n";

    Sleep(1500);
    
    std::cout << "And now you will be rickrolled";
    
    Sleep(1500);

    ShellExecute(0, 0, L"https://youtu.be/dQw4w9WgXcQ", 0, 0, SW_SHOW);
    return 0;
}