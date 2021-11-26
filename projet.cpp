

#include <iostream>
#include <string>
#include <windows.h>  
using namespace std;

//global variables
int answerCount = 0; //counts amount of points
int questCount = 0; //counts completed questions
int correctQCount = 0; //counts amount of correct answers

void scoreDisplay()
{
    cout << "Your current score is " << answerCount << " points. You have answered " << questCount << " questions with " << correctQCount << " correct answers so far.";
    cout << "\n\n\n\nNext question:\n\n";
}

void colourChange(int color)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

//grades score and provides a letter mark (challenge)
void markGrader(int mark)
{
    if (mark > 10 || mark < 0)
    {
         cout << "There was somehow an error in marking your test.";
    }
    else if (mark == 10)
    {
        cout << "Your grade for this test: S (100%)";
    }
    else if (mark >= 8)
    {
        cout << "Your grade for this test: A (8+ correct answers)";
    }
    else if (mark == 7)
    {
        cout << "Your grade for this test: B (7 correct answers)";
    }
    else if (mark == 6)
    {
        cout << "Your grade for this test: C (6 correct answers)";
    }
    else if (mark == 5)
    {
        cout << "Your grade for this test: D (5 correct answers)";
    }
    else if (mark < 5)
    {
        cout << "Your grade for this test: F (under 5 correct answers - failed";
    }
}

//function to check if the answer is correct, return the point value and display correct/incorrect
int isCorrect(char ans, char correctAns, int pointValue)
{
    questCount += 1;
    if (ans == correctAns)
    {
        colourChange(2);
        cout << "Correct!\n\n";
        colourChange(15);
        answerCount += pointValue;
        correctQCount += 1;
        return pointValue;
    }
    colourChange(4);
    cout << "Incorrect.\n\n";
    colourChange(15);
    return 0;
}
//duplicating previous function | function overloading (string)
int isCorrect(string ans, string correctAns, int pointValue)
{
    questCount += 1;
    if (ans == correctAns)
    {
        colourChange(2);
        cout << "Correct!\n\n";
        colourChange(15);
        answerCount += pointValue;
        correctQCount += 1;
        return pointValue;
    }
    colourChange(4);
    cout << "Incorrect.\n\n";
    colourChange(15);
    return 0;
}
//duplicating previous function | function overloading (int)
int isCorrect(int ans, int correctAns, int pointValue)
{
    questCount += 1;
    if (ans == correctAns)
    {
        colourChange(2);
        cout << "Correct!\n\n";
        colourChange(15);
        answerCount += pointValue;
        correctQCount += 1;
        return pointValue;
    }
    colourChange(4);
    cout << "Incorrect.\n\n";
    colourChange(15);
    return 0;
}
// previous function but modified for multiple possible answers
int isCorrectMulti(string ans, string correctAns, string correctAns2, string correctAns3, int pointValue)
{
    questCount += 1;
    if ((ans == correctAns) || (ans == correctAns2) || (ans == correctAns3))
    {
        colourChange(2);
        cout << "Correct!\n\n";
        colourChange(15);
        answerCount += pointValue;
        correctQCount += 1;
        return pointValue;
    }
    colourChange(4);
    cout << "Incorrect.\n\n";
    colourChange(15);
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
    cout << "What is the third capital letter in the alphabet? (5 points)\n\n";
    cin >> response1;
    isCorrect(response1, 'C', 5);
    scoreDisplay();

    //question two (multiple choice, multiple error messages)
    char response2;
    cout << "Multiple choice: who is the prime minister of Canada?\n\nA: Justin Trudeau\nB: Donald Trump\nC: Joe Bidem\n D: Mr. Smith\n\n";
    cin >> response2;

    switch (response2)
    {
    case 'A':
        cout << "Congratulations for not living under a rock.\n";
        break;
    case 'B':
        colourChange(4);
        cout << "Do you live under a rock?\n";
        break;
    case 'C':
        colourChange(4);
        cout << "Wrong country.\n";
        break;
    case 'D':
        colourChange(4);
        cout << "Very close, better luck next time!\n";
        break;
    default:
        colourChange(4);
        cout << "You inputted an invalid answer.\n";
    }
    isCorrect(response2, 'A', 10);
    scoreDisplay();

    //question three (true or false)
    string response3;
    cout << "TRUE or FALSE: something?\n\n";
    cin >> response3;
    isCorrect(response3, "TRUE", 5);
    scoreDisplay();

    //question four (binary number question)
    string response4;
    cout << "What is number 7 in binary? (Note: use a lowercase b for this question, like #b###)\n";
    cin >> response4;
    isCorrect(response4, "0b111", 15);
    scoreDisplay();

    //question five (uppcase/lowercase answer)
    string response5;
    cout << "What is the capital of Canada? Enter it in either all UPPERCASE, all lowercase, or with the first letter capitalized.\n";
    cin >> response5; 
    isCorrectMulti(response5, "ottawa", "OTTAWA", "Ottawa", 20);
    scoreDisplay();

    //question six (filler question)
    string response6;
    cout << "Can fish drown?";
    cin >> response6;
    isCorrect(response6, "YES", 15);
    scoreDisplay();

    //question seven (multiple choice char)
    char response7;
    cout << "Multiple choice: which of these animals CAN NOT drown?\n\nA: Seagulls\nB: Dogs\nC: Fish\nD: None of the above\n";
    cin >> response7;
    isCorrect(response7, 'D', 30);
    scoreDisplay();
    
    //question eight (multiple choice int)
    char response8;
    cout << "Which one of these numbers is above 5? Enter one number: 4, 2, 5, or 7";
    cin >> response8;
    isCorrect(response8, '7', 20);
    scoreDisplay();

    //question nine

    //question ten

    //outro






}


