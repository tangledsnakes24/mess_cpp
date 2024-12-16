#include <iostream>


int main() 
{
    int x; // create x variable, int indicates that the thing stored will be intiger
    x = 5; // store value 5  in x  
    // the above steps can be combined by doing int x = 5;
    int y = 6;
    int sum = x + y;

    std::cout << x << "\n"; // display value stored in x
    std::cout << y << "\n";
    std::cout << sum << "\n";



    // intiger (whole number)
    int z = 7;
    //double (number with decimals)
    double price = 7.87;
    std::cout << price << "\n";

    // char stores single character
    char q = 'a';

    // boolean variable
    bool lies = true; //could also be false

    //string (object that represents a sequence of text)
    std::string personname = "bob";
    std::cout << personname << "\n";




    return 0;
}