#include <iostream>
using namespace std;

int main()
{ // num1 and num2 are used to store operands
    float num1, num2;

    // operation is used to store which operation should perform
    // number is to store  how many times user want to perform operations
    int operation, number;
    cout << "How many operations you want to perform : " << endl;
    cin >> number;
    cout << "Enter the first number : " << endl;
    cin >> num1;

    cout << "Enter the second number : " << endl;
    cin >> num2;
    cout << endl;
    for (int i = 0; i < number; i++)
    {
        if (i < number)
        {
            cout << "Choose the operation you want to performe : " << endl;
        }

        cout << "Press 1 for addition!!" << endl;
        cout << "Press 2 for subtraction!!" << endl;
        cout << "Press 3 for multiplication!!" << endl;
        cout << "Press 4 for division!!" << endl;
        cout << "Press 5 for modulo!!" << endl;
        cin >> operation;

        if (operation == 1)
        {
            cout << "The addtion of entered numbers is : " << num1 + num2 << endl;
        }
        else if (operation == 2)
        {
            cout << "The subtraction of entered numbers is : " << num1 - num2 << endl;
        }
        else if (operation == 3)
        {
            cout << "The multiplication of entered numbers is : " << num1 * num2 << endl;
        }
        else if (operation == 4)
        {
            cout << "The division of entered numbers is : " << num1 / num2 << endl;
        }
        else if (operation == 5)
        {
            cout << "The modulo of entered numbers is : " << int(num1) % int(num2) << endl;
        }
        else
        {
            cout << "!!!!!You entered an invalid operation!!!!!" << endl;
        }

        cout << endl;
    }
    return 0;
}
