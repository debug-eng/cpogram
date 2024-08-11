#include <iostream>

int main() {
    std::cout << "Welcome to \x1b[1;36mCpogram!\x1b[0m, a \x1b[1;37mquiz\x1b[0m made in \x1b[1;36mC++!\x1b[0m" << std::endl;

    std::string name("");
    std::cout << "CPOGRAM: What's your name?" << std::endl << std::endl;
    std::cout << "YOU: ";

    std::cin >> name;

    std::cout << "CPOGRAM: Welcome " << name << "! Your prompt will look like this: (type anything)" << std::endl;

    std::cout << name << ": ";

    std::string answerstr("");

    std::cin >> answerstr;

    std::cout << "CPOGRAM: Nice! Now, lets start! What is 9 + 10 ?" << std::endl;

    std::cout << name << ": ";

    std::cout << "";

    int answerint;

    std::cin >> answerint;

    if (answerint == 21 or answerint == 19) {
        std::cout << "CPOGRAM: Correct! Now lets pass to the other one: ";
    } else {
        std::cout << "CPOGRAM: Wrong! I Will exit you out of here!" << std::endl;
        exit(0);
    }

    std::cout << "What is 1+1?" << std::endl << name << ": ";

    std::cin >> answerint;

    if (answerint == 2) {
        std::cout << "CPOGRAM: Correct! Other one again: ";
    } else {
        std::cout << "CPOGRAM: Cmon man that was ez!" << std::endl;
        exit(0);
    }

    std::cout << "What is wikipedia (in one word, case sensitive so all lowercase)" << std::endl << name << ": ";

    std::cin >> answerstr;

    if (answerstr == "encyclopedia" or answerstr == "dictionary") {
        std::cout << "COGRRAM: Correct! Now ";
    } else {
        std::cout << "CPOGRAM: OK I admit, that was hard but you gotta find out by urself!" << std::endl;
        exit(0);
    }

    std::cout << "Wait for version 2.0 for more question (im really doing this at 9 PM and i dont have much ideas at 9 PM)" << std::endl;

    exit(0);
}
