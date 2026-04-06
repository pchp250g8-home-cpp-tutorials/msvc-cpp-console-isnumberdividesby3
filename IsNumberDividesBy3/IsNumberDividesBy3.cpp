// IsNumberDividesBy3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <math.h>

int main(int argc, char* argv[])
{
    int iNum, iVal, iSumDigits;
    system("cls");
    std::cout << "Input an integer number\r\n";
    std::cin >> iNum;
    iVal = abs(iNum); iSumDigits = 0;
    while (iVal > 0)
    {
        iSumDigits += iVal % 10;
        iVal /= 10;
    }
    std::cout << "The sum of digits of the number " << iNum << " is " << iSumDigits << "\r\n";
    if (iSumDigits % 3 == 0)
    {
        std::cout << "The number " << iNum << " divides by 3\r\n";
    }
    else
    {
        std::cout << "The number " << iNum << " does not divide by 3\r\n";
    }
    std::cin.ignore();
    std::cin.get();
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
