//Sarah Shao
//Lecture 2
//9/16/2024


#include <iostream>
#include <string>

using namespace std;

int main ()
{
    //Assigning data types
    int Num = 4;
    float Float = 6.4;
    double Double = 4.553;
    char Letter = 'S';
    bool Boolean = true;
    string String = "Hello";

    // Code from slide 37
    int inches;
    inches = 100;

    cout << inches << " inch(es) = ";
    cout << inches / 12 << " feet (foot) and ";
    cout << inches % 12 << " inch(es)" << "\n";


    //compare 2 character with each other
    float floater = 9.9;
    int integer = 4;

    cout <<  floater < integer ;


    //Outputting data type
    cout << "Integer:   " << Num << "\n";
    cout << "Float: " << Float << "\n";
    cout << "Double: " <<Double << "\n";
    cout << "Char: " << Letter << "\n";
    cout << "Bool: " << Boolean << "\n";
    cout << "String: " << String << "\n";
    

    //Performing expressions and outputting
    cout << "2 + 3.5 = " << 2 + 3.5 << "\n";
    cout << "6/4 + 3.9 = " <<6/4 +3.9 << "\n";
    cout << "5.4 * 2 - (13.6 + 18/2) = " << 5.4 * 2 - (13.6 + 18/2);
    return 0;
}