

#include <iostream>
using namespace std;

//global variables
int answerCount = 0; //counts correct answers
int questCount = 0; //counts completed questions

void scoreDisplay()
{
    cout << "Your current score is " << answerCount << "/10. You have answered " << questCount << "/10 questions so far.";
    cout << "\n\nNext question:\n\n";
}

int isCorrect(string ans, string correctAns)
{
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
    //question one
    char response1;
    response1 = cin >> "What is the ?";
    if (response1 == 'C')
    {
        cout << "\n\nCorrect!";
        answerCount == answerCount + 1;
        questCount == questCount + 1;
    }
    else
    {
        cout << "Incorrect.";
        questCount == questCount + 1;
    }
    
}

