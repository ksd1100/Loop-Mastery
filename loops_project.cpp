#include <iostream>
#include <string>
#include <limits>

int numberPyramid(){
    int rows;
    std::cout << "Enter the number of rows: ";
    std::cin >> rows;
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= rows - i; j++)
        {
            std::cout << " ";
        }
        for (int k = 1; k <= i; k++)
        {
            std::cout << k << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}

int factorialCalculator(){
    int integer;
    long long factorial = 1;
    std::cout << "Enter a positive integer: ";
    std::cin >> integer;
    if (integer < 1)
    {
        std::cerr << "Error: Please enter a positive integer." << std::endl;
    }
    int counter = integer;
    while (counter > 0)
    {
        factorial *= counter;
        counter--;
    }
    std::cout << "Factorial of " << integer << " is: " << factorial << std::endl;
    return 0;
}

int reverseString(){
    std::string inputString;
    std::string reversedString;
    std::cout << "Enter a string: ";
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::getline(std::cin, inputString);
    int text = inputString.length() - 1;
    while (text >= 0)
    {
        reversedString += inputString[text];
        text--;
    }
    std::cout << "Reversed string: " << reversedString << std::endl;
    return 0;
}

int sumEvenOrOddNumbers(){
    int selection;
    int limit;
    int initializer;
    long long calculation = 0;
    std::string type;
    std::cout << "1. For the sum of even numbers." << std::endl;
    std::cout << "2. For the sum of odd numbers." << std::endl;
    std::cout << "Enter your choice: ";
    std::cin >> selection;
    if (selection != 1 && selection != 2)
    {
        std::cerr << "Error: Please enter either 1 (for even numbers) or 2 (for odd numbers)." << std::endl;
    }
    std::cout << "Enter the upper limit (a positive integer): ";
    std::cin >> limit;
    if (limit < 1)
    {
        std::cerr << "Error: Please enter a positive integer." << std::endl;
    }
    if (selection == 1)
    {
        type = "even";
        initializer = 0;
        if (limit >= 0)
        {
            do
            {
                calculation += initializer;
                initializer += 2;
            } while (initializer <= limit);
        }
    }
    else if (selection == 2)
    {
        type = "odd";
        initializer = 1;
        if (limit >= 1)
        {
            do
            {
                calculation += initializer;
                initializer += 2;
            } while (initializer <= limit);
        }
    }
    std::cout << "Sum of " << type << " numbers up to " << limit << ": " << calculation << std::endl;
    return 0;
}

int menuChoice(){
    int choice;
    std::cout << "Enter your choice (1-5): ";
    std::cin >> choice;
    if (choice == 1 || choice == 2 || choice == 3 || choice == 4 || choice == 5)
    {
        return choice;
    }
    else
    {
        std::cerr << "Error: Please enter a valid option." << std::endl;
    }
    return 0;
}

int menuOptions(){
    std::cout << "1. Factorial calculator" << std::endl;
    std::cout << "2. Number pyramid" << std::endl;
    std::cout << "3. Sum of even or odd numbers" << std::endl;
    std::cout << "4. Reverse a string" << std::endl;
    std::cout << "5. Exit" << std::endl;
    return 0;
}

int main(){
    int choice;
    do
    {
        menuOptions();
        choice = menuChoice();
        switch (choice)
        {
        case 1:
            factorialCalculator();
            break;
        case 2:
            numberPyramid();
            break;
        case 3:
            sumEvenOrOddNumbers();
            break;
        case 4:
            reverseString();
            break;
        case 5:
            std::cout << "Exiting the program..." << std::endl;
            break;
        }
    } while (choice != 5);    
    return 0;
}

