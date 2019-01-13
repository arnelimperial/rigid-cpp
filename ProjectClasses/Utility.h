//Header file for function and member declaratio

#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::string;
using std::cin;
#ifndef UTILITY_H_INCLUDED
#define UTILITY_H_INCLUDED

class Utility{
    public:

        Utility();

        Utility(string a);

        Utility(int c);

        string display();

        int operate();



    private:
        string txt1;
        int num;


};


#endif // UTILITY_H_INCLUDED
