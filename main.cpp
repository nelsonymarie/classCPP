//************************************************************************
// Author: Misael Cuadrado
// Date: September 2, 2024
// Language: C++
// Assignment: Module 1 Lab - Hello World
// Description: This program outputs a simple "Hello, World!" message
//              followed by a welcome message including the author's name.
//************************************************************************

#include <iostream>  // include iostream library for input and output

using namespace std;  // use the standard namespace

int main() {
    // declare a string variable to store the name
    string name = "Misael Cuadrado";

    // output a simple greeting to the console
    cout << "hello, world!" << endl;

    // output a welcome message including the author's name
    cout << "welcome to C++" << name << "!" << endl;

    // return 0 to indicate the program ended successfully
    return 0;
}
