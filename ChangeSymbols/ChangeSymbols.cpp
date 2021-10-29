#include <iostream>
#include <algorithm>
#include <cctype>
#include <string>
int main()
{
    std::string symbols;
    std::cin >> symbols;
    std::transform(symbols.begin(), symbols.end(), symbols.begin(),
        [](unsigned char c) { return std::tolower(c); });
    std::string new_symbols = symbols;
    for (size_t i = 0; i < symbols.length(); i++)
    {
        new_symbols[i] = '(';
        for (size_t j = 0; j < symbols.length(); j++)
        {
            if (symbols[i] == symbols[j] && i != j) 
            {
                new_symbols[i] = ')';
                break;
            }
        }
    }
    std::cout << new_symbols << std::endl;
    system("pause");
    return 0;
}
