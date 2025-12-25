#include <iostream>
using namespace std;
#include<string>

class Quiz{
    private:
    int count=0;
    int choice;
    string ans;
    public:
    Quiz(){
        cout<<"This is a C++ quiz.\nThere are some instructions for the Quiz to be followed by you.\n1.There are in total 10 questions.\n2.Each uestion has 4 options.\n3.Every right answer givs you +1 point and every wrong answer gives you 0 point.\n5.The result will b from best of 10 marks.\nBest of Luck."<<endl;
    }
    void menu() {
    do {
        cout << "\n------ QUIZ MENU ------\n";
        cout << "1. Start Quiz\n";
        cout << "2. Check Result\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                count = questions();   // store score
                break;

            case 2:
                cout << "🎯 Your score is: " << count << endl;
                break;

            case 3:
                cout << "👋 Exiting quiz...\n";
                break;

            default:
                cout << "❌ Invalid choice\n";
        }

    } while (choice != 3);
}

    int questions() {
    cout << "1. What is the scope of the local variable?\n";
    cout << "a. Entire program\nb. Function or block\nc. File\nd. Class\n";
    cin >> ans;
    if(ans == "b" || ans == "B") {
        count++;
    }

    cout << "\n2. What does the static keyword do in a function?\n";
    cout << "a. Make the variable global\nb. Preserve value between calls\n";
    cout << "c. Allocates dynamic memory\nd. Make it constant\n";
    cin >> ans;
    if(ans == "b" || ans == "B") {
        count++;
    }

    cout << "\n3. Which of the following is called address operator?\n";
    cout << "a. &\nb. %\nc. @\nd. ~\n";
    cin >> ans;
    if(ans == "a" || ans == "A") {
        count++;
    }

    cout << "\n4. By default the members of the structure are:\n";
    cout << "a. Private\nb. Protected\nc. Public\nd. Access specifiers not applicable\n";
    cin >> ans;
    if(ans == "c" || ans == "C") {
        count++;
    }

    cout << "\n5. Escape sequence character '\\0' occupies __ amount of memory.\n";
    cout << "a. 0\nb. 1\nc. 4\nd. 8\n";
    cin >> ans;
    if(ans == "b" || ans == "B") {
        count++;
    }
    return count;
}

};
int main() {
Quiz q;
q.menu();
    return 0;
}