#include <iostream>
#include <string>
#include "Utility.h"

using std::cout;
using std::endl;
using std::string;
using std::cin;

int main()
{
    string b = "Hello C++!!! HEllo World!!";
    int number;
    Utility lines_One;

    Utility line_Two(b);



    cout << line_Two.display() << endl;

    cout << "Enter a number: ";
    cin >> number;

    Utility line_3(number);

    int result = line_3.operate();

    cout << "The result of operation: "<< result << endl;
    return 0;
}

