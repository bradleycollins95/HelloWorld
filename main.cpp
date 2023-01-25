#include <iostream> //include (i)nput and (o)utput
#include <sstream> //include (s)tring

/**
 * INTRO TO C++
 *
 * Main program to return a print statement
 * (Add functions and variables as you learn more and
 * print them out)
 */

/**
 * INT (modifiable)
 * @return file_size
 */
int file() {
    int file_size = 100;
    return file_size;
}

/**
 * CONSTANT (non-modifiable)
 * @return pi
 */
double piValue() {
    const double pi = 3.14;
    return pi;
}

/**
 * ADDITION FORMULA
 * Edit variables and values as needed
 * @return z
 */
double addition() {
    int x = 20;
    int y = 10;
    int z = x + y;
    return z;
}

/**
 * SUBTRACTION FORMULA
 * Edit variables and values as needed
 * @return z
 */
double subtraction() {
    int x = 20;
    int y = 10;
    int z = x - y;
    return z;
}

/**
 * MULTIPLICATION FORMULA
 * Edit variables and values as needed
 * @return z
 */
double multiplication() {
    int x = 20;
    int y = 10;
    int z = x * y;
    return z;
}

/**
 * DIVISION FORMULA
 * Edit variables and values as needed
 * @return z
 */
double division() {
    int x = 20;
    int y = 10;
    int z = x / y;
    return z;
}

int main() {
    //GENERAL PRINT STATEMENT
    std::cout << "\nHello World!\n";
    std::cout << "Welcome to C++!\n\n";

    //CALL THE INT METHOD
    std::cout << "Your file library contains ";
    std::cout << file();
    std::cout << " files.\n\n";

    //CALL THE CONSTANT METHOD
    std::cout << "The value of Pi is ";
    std::cout << piValue();
    std::cout << "\n\n";

    //CALL THE ADDITION METHOD
    std::cout << "The value of 20 + 10 is ";
    std::cout << addition();
    std::cout << "\n\n";

    //CALL THE SUBTRACTION METHOD
    std::cout << "The value of 20 - 10 is ";
    std::cout << subtraction();
    std::cout << "\n\n";

    //CALL THE MULTIPLICATION METHOD
    std::cout << "The value of 20 * 10 is ";
    std::cout << multiplication();
    std::cout << "\n\n";

    //CALL THE DIVISION METHOD
    std::cout << "The value of 20 / 10 is ";
    std::cout << division();
    std::cout << "\n";



    return 0;
}


