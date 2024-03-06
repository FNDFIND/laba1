

#include <iostream>

int main()
{
    setlocale(LC_ALL, "RUSSIAN");
    //Целочисленные 
    char y;                 //(-128...127)

    unsigned char;          //(0...255)

    int a1;                 //(-2 147 483 648...2 147 483 647)

    unsigned int a2;        //(0...4 294 967 295)

    short b1;               //(-32 768...32 767)

    unsigned short b2;      //(0...65536)

    long c1;                //(-2 147 483 648...2 147 483 647)

    unsigned long c2;       //(0...4 294 967 295)

    long long v1;           //(−9 223 372 036 854 775 808...9 223 372 036 854 775 807)

    unsigned long long v2;  //(0...18 446 744 073 709 551 615)

    //С плавающей запитой 
    float l1;               //(3.4*10^-38...3.4*10^38)
    double n1;              //(1.7*10^-308...1.7*10^308)
    long double m1;         //(3.4*10^-4932...1.1*10^4932)

    {
        float kat1;
        float kat2;
        float geep;
        std::cin >> kat1 >> kat2;
        geep = (sqrt(pow(kat1, 2) + pow(kat2, 2)));
        std::cout <<"Длина гипотенузы = " << geep;

    }
    
}

