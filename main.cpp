#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <vector>

    int main ( ) {
        std::string name;
        std::vector<std::string> notes;
        srand(time(0));
        int choice;

        std::cout << "Eight reporting for duty!" << std::endl;
        std::cout << "─── ++ ─── ⚠︎ ─── ++ ───" << std::endl;                // Banner
        std::cout << "What is your name?" << std::endl;
        std::cin >> name;                                                   // Variable
        std::cout << "Happy to assist you, " << name << "!" << std::endl;   // Response
        std::cout << "Eight: ONLINE" << std::endl;
        std::cout << "Standing by for your next command... and a banana." << std::endl;
        std::cout << "─── ++ ─── ⚠︎ ─── ++ ───" << std::endl;                // Banner
        std::cout << "What would you like to do?" << std::endl;             // Menu
        std::cout << "1. Calculator" << std::endl;
        std::cout << "2. Ask Eight" << std::endl;
        std::cout << "3. Sticky Note" << std::endl;
        std::cout << "4. Banana Break" << std::endl;
        std::cout << "5. Log off" << std::endl;
        std::cin >> choice;

        double number1;
        double number2;
        double result;
        if (choice ==1) {                                                 // Calculator
            std::cout << "Ready to solve your problem " << name << "!" << std::endl;
            std::cout << "Give me your first number: ";
            std::cin >> number1;
            std::cout << "Give me your second number: ";
            std::cin >> number2;
            result = number1 + number2;
            std::cout << "Your answer is: " << result <<std::endl;
        }

        else if (choice == 2) {                                           // Ask Eight
            std::string question;

            std::cout << "Ask Eight your question: ";
            std::cin.ignore();
            std::getline(std::cin, question);
            std::string responses[] = {                                   // 8Ball Oracle
                "It is certain.",
                "It is decidedly so.",
                "Without a doubt.",
                "Yes, definitely.",
                "You may rely on it.",
                "As I see it, yes.",
                "Most likely.",
                "Outlook is good.",
                "Yes.",
                "Signs point to yes.",
                "Reply hazy, try again.",
                "Ask again later.",
                "Cannot predict now.",
                "Concentrate and ask again.",
                "Don't count on it.",
                "My reply is no.",
                "Outlook not so good.",
                "Very doubtful."
            };

            int randomNumber = rand( ) % 18;
            std::cout << "Eight says... " << responses[randomNumber] << std::endl;
        }

        else if (choice == 3) {                                           // Sticky Notes
            std::cout << "Sticky Notes" << std::endl;
            std::cout << "1. Leave a Note" << std:: endl;
            std::cout << "2. View Notes" << std::endl;
            std::cout << "3. Clear ALL" << std::endl;

            int noteChoice;
            std::cin >> noteChoice;

            if (noteChoice == 1) {

                std::string note;

                std::cout << "Leave a sticky note!";
                std::cin.ignore();
                std::getline(std::cin, note);

                notes.push_back(note);

                std::cout << "\nNote saved!" << std::endl;
                std::cout << note << std::endl;
            }

            else if (noteChoice == 2) {
                std::cout <<"\nYour  Notes: " << std::endl;   // Storing notes

                for (const std::string& note : notes) {
                    std::cout << "- " << note << std::endl;
                }
            }
            else if (noteChoice == 3) {
                notes.clear();
                std::cout << "\nAll notes trashed!" << std::endl;
            }
        }



        return 0;
    }
