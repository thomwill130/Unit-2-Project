

#include <iostream>
#include <string>
using namespace std;

//global variables
int answerCount = 0; //counts correct answers
int questCount = 0; //counts completed questions

void scoreDisplay()
{
    cout << "Your current score is " << answerCount << "/10. You have answered " << questCount << "/10 questions so far.";
    cout << "\n\nNext question:\n\n";
}

int isCorrect(char, char correctAns)
{
    questCount == questCount + 1;
    if (ans == correctAns)
    {
        cout << "Correct!";
        return 1;
    }
    cout << "Incorrect.";
    return 0;
}
int main()
{
    //intro
    string name;
    cout << "What is your name?\n";
    cin >> name;
    cout << "\nHello " + name + " and welcome to the ICS3U quiz. Note: for this quiz, your answers must be in ALL UPPERCASE unless stated otherwise. Remember this rule or your answer will not be marked properly.";
    cin.ignore();
    cout << "\n\nPress any key to begin.";
    cin.get();
    system("cls");

    //main quiz

    //question one (filler question)
    char response1;
    cout << "What is the third capital letter in the alphabet?";
    cin >> response1;
    isCorrect(response1, 'C');



