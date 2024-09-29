/* Name: Sofia Sanchez
Date: 01/30/2022
Section: 0011
Assignment: Ordered Exam Scores Program
Due Date: 01/30/2022
About this project: This program displays exam scores entered by the user in
descending order and tells the user if the exam scores are equal.
Assumptions: NA
All work below was performed by Sofia Sanchez */

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    /* defines the minimum and maximum possible exam scores for use in
    input validation */
    const float minExamScore = 0.0;
    const float maxExamScore = 100.0;
    /* defines a boolean variable that will later be used for input validation
    and sets it to true */
    bool validInput = true;
    //defines the variables where the three exam scores will be stored
    double examScore1, examScore2, examScore3;
    //displays welcome statement and instructions
    cout << "Welcome to the Ordered Exam Scores Program!" << endl;
    cout << "Please enter three exam scores below to see them in "
            "descending order." << endl;
    //stores exam scores inputted by user into their corresponding variables
    cin >> examScore1;
    cin >> examScore2;
    cin >> examScore3;
    //input validation; tests if scores are between 0 and 100
    if (examScore1 < minExamScore || examScore1 > maxExamScore
    || examScore2 < minExamScore || examScore2 > maxExamScore
    || examScore3 < minExamScore || examScore3 > maxExamScore)
    {
        //sets boolean to false if any score is not between 0 and 100
        validInput = false;
    }
    //if the input values are between 0 and 100,...
    if (validInput)
    {
        //if the exam scores are equal,...
        if (examScore1 == examScore2 && examScore2 == examScore3) {
            //display message saying that they are equal
            cout << "All the exam scores are equal!" << endl;
        }
        //if the exam scores are not equal,...
        else {
            /* display text "Here are your scores!" before displaying
            the exam scores in order with one decimal point each */
            cout << "Here are your scores!" << endl;
            cout << fixed << setprecision(1);
            //display scores in specified order for each possibility
            //if examScore1 >= examScore2 > examScore3,...
            if (examScore1 >= examScore2 && examScore2 > examScore3) {
                //display them in 1,2,3 order
                cout << examScore1 << endl;
                cout << examScore2 << endl;
                cout << examScore3 << endl;
            }
            //if examScore1 >= examScore3 > examScore2,...
            else if (examScore1 >= examScore3 && examScore3 > examScore2) {
                //display them in 1,3,2 order
                cout << examScore1 << endl;
                cout << examScore3 << endl;
                cout << examScore2 << endl;
            }
            //if examScore2 > examScore1 > examScore3,...
            else if (examScore2 > examScore1 && examScore1 > examScore3) {
                //display them in 2,1,3 order
                cout << examScore2 << endl;
                cout << examScore1 << endl;
                cout << examScore3 << endl;
            }
            //if examScore2 >= examScore3 > examScore1,...
            else if (examScore2 >= examScore3 && examScore3 > examScore1) {
                //display them in 2,3,1 order
                cout << examScore2 << endl;
                cout << examScore3 << endl;
                cout << examScore1 << endl;
            }
            //if examScore3 > examScore1 > examScore2,...
            else if (examScore3 > examScore1 && examScore1 > examScore2) {
                //display them in 3,1,2 order
                cout << examScore3 << endl;
                cout << examScore1 << endl;
                cout << examScore2 << endl;
            }
            //if examScore3 > examScore2 > examScore1,...
            else if (examScore3 > examScore2 && examScore2 > examScore1) {
                //display them in 3,2,1 order
                cout << examScore3 << endl;
                cout << examScore2 << endl;
                cout << examScore1 << endl;
            }
            //if examScore1 > examScore2 = examScore3,...
            else if (examScore1 > examScore2 && examScore2 == examScore3) {
                //display them in 1,2,3 order
                cout << examScore1 << endl;
                cout << examScore2 << endl;
                cout << examScore3 << endl;
            }
            //if examScore2 > examScore1 = examScore3,...
            else if (examScore2 > examScore1 && examScore1 == examScore3) {
                //display them in 2,1,3 order
                cout << examScore2 << endl;
                cout << examScore1 << endl;
                cout << examScore3 << endl;
            }
            //if examScore3 > examScore1 = examScore2,...
            else if (examScore3 > examScore1 && examScore1 == examScore2) {
                //display them in 3,1,2 order
                cout << examScore3 << endl;
                cout << examScore1 << endl;
                cout << examScore2 << endl;
            }
        }
    }
    /* if the user entered an invalid number and thus validInput is false
    (input validation) */
    else
    {
        //displays error message
        cout << "Please restart the program and only enter values "
                "between 0 and 100." << endl;
    }

    return 0;
}
