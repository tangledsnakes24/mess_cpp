#include <iostream> 
int variables() 
{
    int first_variable = 100;
    double non_integer = 5.21;
    std::cout << "hello world" << first_variable << non_integer << std::endl;
    int a = 1;
    int b = 0;
    int swap;
    std::cout << "first a " << a << std::endl;
    std::cout << "first b " << b << std::endl;
    swap = a;
    a = b;
    b = swap;
    std::cout << "swapped a " << a << std::endl;
    std::cout << "swapped b " << b << std::endl;
    return 0;
}

int constants() 
{
    const double pi = 3.14; // variable with identifyer const cannot be changed later in program once initialized
    std::cout << pi << std:: endl;
    return 0;
}
// snake case naming convention: all lowercase letters, words separated by underscore  
// pascal case naming convention: first letter of every word is capital, all others lowercase
// camel case naming convention: first letter of first word capital, all others lowercase 
int conventions()
{
    int snake_case = 1;
    int PascalCase = 0;
    int Camelcase = 2;
    std::cout << Camelcase << snake_case << PascalCase << std::endl;
    return 0;
}
int math()
{
    double double_x = 10;
    double double_y = 12;
    int x = 10;
    int y = 12;
    int z = x + y;
    int w = x - y;
    int q = x * y;
    int m = y % x;
    int l = double_x / double_y;
    std::cout << z << std::endl << w << std::endl << q << std::endl << l << std::endl << m <<  std::endl; 
    return 0; 
}
int incriment()
{
   int a = 1; 
   int b = 1;
   int incriment1 = 1;
   incriment1 = incriment1 + 5;
   std::cout << incriment1 << "this is just incriment 1 with an initial value of 1, with 5 added to it" << std::endl; // in this way, its just repeated addition
   int incriment2;
   incriment2 = a++; // this ++ operator after the value will first store the value of a in incriment2, then add one
   int incriment3 = ++b; // this ++ operator before the value will first add 1 to b, then store it in incriment3
   std::cout << incriment2 << " <== incriment2 " << incriment3 << " <== value of incriment 3" << std::endl;
   return 0;
}
int mathPractice()
{
    double n = 10;
    double p = 5;
    double q = (n + 10) / (3 * p);
    std::cout << q << " here is the value of (n + 10) / p. should be 1.3" << std::endl;
    return 0;
}
int sales_exercise()
{
    int sales = 95000;
    double state_tax = 0.04;
    double county_tax = 0.02;
    std::cout << sales << "sales" << std::endl;
    std::cout << sales * state_tax << "profit after state tax" << sales * county_tax << "profit after county tax" << (state_tax + county_tax) * sales << "total percent of sales paid in taxes" << sales - (sales - (state_tax + county_tax)) << "profit after all taxes" << std::endl;
    return 0;
}







int main() 
{
    variables();
    constants();
    conventions();
    math();
    incriment();
    mathPractice();
    sales_exercise();
    return 0;
}