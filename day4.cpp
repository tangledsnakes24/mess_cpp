#include <iostream>
int consoleRead()
{
    std::cout << "enter a value" << std::endl;
    double value;
    std::cin >> value;
    std::cout << "this is what you entered" << std::endl;
    std::cout << value << std::endl;
    return 0;
}

int consoleReadwithMultipleValues()
{
    std::cout << "enter values for x and y" << std::endl;
    int x;
    int y;
    std::cin >> x >> y; 
    std::cout << x + y << std::endl;
    return 0;
}

int fartocels()
{
    std::cout << "enter a temp in farenheit and ill return celcius" << std::endl;
    double faren;
    std::cin >> faren;
    double celc;
    celc = (faren - 32) * (5 / 9);
    std::cout << "your temp in c is " << celc << std::endl;
    return 0;
}

int main()
{
    consoleRead();
    consoleReadwithMultipleValues();
    fartocels();
    return 0;
}