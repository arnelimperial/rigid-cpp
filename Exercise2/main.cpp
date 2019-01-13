#include <iostream>

using namespace std;

// void muuta_lukua(int *ptr){
//    cout << "Enter: ";
//
//    cin >> *ptr;
//
//}
//
//int main()
//{
//    int luku =2;
//    cout << "Luku ohjelma alussa: " << luku << endl;
//    muuta_lukua(&luku);
//    cout << "Ohjelma lopussa: " << luku << endl;
//    return 0;
//}



void muuta_lukua(int &ptr){
    cout << "Enter: ";

    cin >> ptr;

}

int main()
{
    int luku =2;
    cout << "Luku ohjelma alussa: " << luku << endl;
    muuta_lukua(luku);
    cout << "Ohjelma lopussa: " << luku << endl;
    return 0;
}
