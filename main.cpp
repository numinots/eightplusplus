#include <iostream>
#include <string>

    int main ( ) {
        std::string name;
        int choice;

        std::cout << "Hello from Numi's Terminal Kit" << std::endl;
        std::cout << "─── ++ ─── ⚠︎ ─── ++ ───" << std::endl;     // Banner
        std::cout << "What is your name, bug?" << std::endl;
        std::cin >> name;                                                   // Store variable
        std::cout << "Happy to assist you, " << name << "!" << std::endl;   // Response
        std::cout << "Terminal Kit status: ONLINE" << std::endl;
        std::cout << "Standing by for your next command." << std::endl;
        std::cout << "─── ++ ─── ⚠︎ ─── ++ ───" << std::endl;     // Banner

        std::cout << "What would you like to do?" << std::endl;
        std::cout << "1. Continue" << std::endl;
        std::cout << "2. Exit" << std::endl;
        std::cin >> choice;

        if (choice ==1) {
            std::cout << "Let's keep going!" << std::endl;
        }


        return 0;
    }
// Created by Numi on 9/27/26.
