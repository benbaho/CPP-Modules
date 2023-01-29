#include <iostream>

int main (int ac, char **av)
{
    if (ac == 2)
    {
        for (int i = 0;av[1][i] != '\0'; i++)
        {   
            char ch = toupper(av[1][i]);
            std::cout << ch;
        }
        std::cout << "\n";    
    }
    else if (ac > 2)
    {
        std::string str = av[1];
        for (int i = 2; i < ac; i++)
            str.append(av[i]);
        for (int i = 0; str[i] != '\0'; i++)
        {
            char ch = toupper(str[i]);
            std::cout << ch;
        }
        std::cout << "\n"; 
    }
    else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
}