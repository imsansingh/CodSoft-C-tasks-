#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // Creating an object of ifstream which will use to open the file
    ifstream obj;

    // ch store the words of file(max lenght of word = 20), count will store the number of words
    char ch[20];
    int count = 0;

    // name is used to store name of file which user will enter
    char name[20];
    cout << "Enter the name of file in which you want to count number of words : " << endl;
    cin >> name;

    // Opening the file to read
    obj.open(name);

    // Loop to count total number of words present in file
    while (!obj.eof())
    {
        obj >> ch;
        count++;
    }

    // Closing the file
    obj.close();

    cout << "The number of words in this file is : " << count;

    return 0;
}
