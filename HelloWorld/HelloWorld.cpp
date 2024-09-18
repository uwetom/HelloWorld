// HelloWorld.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    //output hello world to the command line
    std::cout << "Hello World!\n";

    //initialise some integer variables
    int a = 0;
    int b = 3;
    //ask the user to enter a number
    std::cout << "Please enter a number: ";

    //read in the user's number into variable a
    std::cin >> a;

    //output the variable a to the command line
    std::cout << "Your number is " << a << std::endl;

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
