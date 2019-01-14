#include <iostream>

using namespace std;
#include "file1.cpp"
#include "form1.cpp"

int main()
{

    using namespace one;
    display();
    using namespace four;
    int res = fire();
    std::cout << "The result is: " << res << std::endl;
    return 0;
}
