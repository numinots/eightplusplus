#include <iostream>
#include <string>

    int main ( ) {
        std::string name;
        int choice;

        std::cout << "Eight reporting for duty!" << std::endl;
        std::cout << "─── ++ ─── ⚠︎ ─── ++ ───" << std::endl;                // Banner
        std::cout << "What is your name?" << std::endl;
        std::cin >> name;                                                   // Store variable
        std::cout << "Happy to assist you, " << name << "!" << std::endl;   // Response
        std::cout << "Eight: ONLINE" << std::endl;
        std::cout << "Standing by for your next command... and a banana." << std::endl;
        std::cout << "─── ++ ─── ⚠︎ ─── ++ ───" << std::endl;                // Banner

        std::cout << "What would you like to do?" << std::endl;             // Menu
        std::cout << "1. Calculator" << std::endl;
        std::cout << "2. Ask Eight" << std::endl;                           // 8Ball responses (yes, no, etc.)
        std::cout << "3. Sticky Note" << std::endl;
        std::cout << "4. Banana Break" << std::endl;
        std::cout << "5. Log off" << std::endl;
        std::cin >> choice;

        double number1;
        double number2;
        double result;
        if (choice ==1) {
            std::cout << "Ready to solve your problem " << name << "!" << std::endl;

            std::cout << "Give me your first number: ";
            std::cin >> number1;
            std::cout << "Give me your second number: ";
            std::cin >> number2;
            result = number1 + number2;
            std::cout << "Your answer is: " << result <<std::endl;
        }


        return 0;
    }
// Created by Numi on 9/27/26.
