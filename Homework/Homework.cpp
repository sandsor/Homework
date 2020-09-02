// Homework.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
int age, a, b, c;
char initial;
long number;


int main()
{
    
    std::cout << "Enter your Full Name?\n";
    std::string Fullname;
    std::getline(std::cin, Fullname);
          char initial = Fullname.at(0);
    std::cout << "Hello Mr/Ms " << Fullname.at(0) << "\n";
    
    std::cout << "Whats your age?\n";
    std::cin >> age;
    std::cout << "whats your phone number?\n";
    std::cin >> number;
    if (number < 11111111 || number > 99999999) { // this means if you write a number less than 8 digits you will get a retry on the number
        std::cout << "please enter a valid phone number\n";
        std::cin >> number;
    }
    std::cout << "what's the date you were born?\n";
    std::cout << "First it's the day\n";
    std::cin >> a;
    if (a < 1 || a > 33) {
        std::cout << "please enter a valid day\n";
        std::cin >> a;
    }
    std::cout << "Then month : use dates like 01, 02, 03... etc\n";
    std::cin >> b;
    if (b < 1 || b > 12) {
        std::cout << "please enter a valid month\n";
        std::cin >> b;
    }
    std::cout << "Last it's the year\n";
    std::cin >> c;
    if (c < 1 || c > 2030) {
        std::cout << "please enter a valid year\n";
        std::cin >> c;
    }
     
    system("cls");

    std::cout << "Name      :" << Fullname << std::endl;
    std::cout << "Initial   :" << Fullname.at(0) << std::endl;
    std::cout << "Age       :" << age << std::endl;
    std::cout << "Phone num :" << number << std::endl;
    std::cout << "Birthday  :" << a << "/" << b << "/" << c << std::endl;

    system("pause");
}