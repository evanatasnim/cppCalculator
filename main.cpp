#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    // Variable Declaration

    int whatProcess,mainNumber,firstNumber,secondNumber,answer;

    // Style

    cout << "_____________________" << endl;
    cout << "|                   |" << endl;
    cout << "|A simple calculator|" << endl;
    cout << "|                   |" << endl;
    cout << "|       By          |" << endl;
    cout << "|                   |" << endl;
    cout << "|     OVI!!!!       |" << endl;
    cout << "|___________________|" << endl;

    // Main Process
    cout << "1 for addition, 2 for substraction, 3 for multiplication, 4 for division,5 for power,6 for square root" << endl;
    cout << "Enter 1,2,3,4,5 or 6 : ";
    cin  >> whatProcess;

    if(whatProcess == 1)
    {
            cout << "Type the 1st number : ";
            cin  >> firstNumber;
            cout << "Type the 2nd number : ";
            cin  >> secondNumber;
            answer = firstNumber + secondNumber;
            cout << "Your answer is " << answer << endl << endl;

    };
     if(whatProcess == 2)
    {
            cout << "Type the 1st number : ";
            cin  >> firstNumber;
            cout << "Type the 2nd number : ";
            cin  >> secondNumber;
            answer = firstNumber - secondNumber;
            cout << "Your answer is " << answer <<endl << endl;

    };
     if(whatProcess == 3)
    {
            cout << "Type the 1st number : ";
            cin  >> firstNumber;
            cout << "Type the 2nd number : ";
            cin  >> secondNumber;
            answer = firstNumber * secondNumber;
            cout << "Your answer is " << answer << endl <<endl;

    };
     if(whatProcess == 4)
    {
            cout << "Type the 1st number : ";
            cin  >> firstNumber;
            cout << "Type the 2nd number : ";
            cin  >> secondNumber;
            answer = firstNumber / secondNumber;
            cout << "Your answer is " << answer << endl << endl;

    };
     if(whatProcess == 5)
    {
            cout << "Type the number  you will add power : ";
            cin  >> firstNumber;
            cout << "Type how much power you want to add : ";
            cin  >> secondNumber;
            answer = pow(firstNumber, secondNumber);
            cout << "Your answer is " << answer << endl << endl;

    };
     if(whatProcess == 6)
    {
            cout << "Type which number to be square rooted : ";
            cin  >> firstNumber;
            answer = sqrt(firstNumber);
            cout << "Your answer is " << answer << endl << endl;

    };



    //Error Handling
    if(whatProcess == 0)
    {
        cout << "PLEASE DON'T BE KIDDING ME.THERE IS NO 0 IN INSTRUCTION" << endl << endl;
    }


    // Ending

    cout << "Thank you very much for trying 'Simple C++ Calculator'" << endl;
    cout << "Check other wonderful projects in 'www.github.com/jubayerhasanovi'" << endl;

    return 0;
}
