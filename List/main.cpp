#include <iostream>
#include <list>


using namespace std;

int main()
{
    list <int> planIn(5,0);

    for(int val : planIn){
        cout << val << endl;

    }
    //list <int>::iterator iT = planIn.begin();
   // advance(planIn, 1);
   // *iT = 20;

    //list <int>::iterator planOut;
   // for(planOut = planIn.begin(); planOut != planIn.end(); planOut++){

      //  cout << *planOut << endl;
    //}

    return 0;
}
