#include <iostream>

using namespace std;


class Piste
{
public:
  void TulostaPiste();
  void AsetaPiste(int x, int y);
private:
  int x_;
  int y_;
};

void Piste::TulostaPiste()
{
  cout << "Pisteen x-koordinaatti: " << x_ << endl;
  cout << "Pisteen y-koordinaatti: " << y_ << endl;
}

void Piste::AsetaPiste(int x, int y)
{
  x_ = x;
  y_ = y;
}

Piste* uusi_piste();

int main()
{
  Piste* pisteolio;
  pisteolio = uusi_piste();
  pisteolio->TulostaPiste();
  delete pisteolio;

  return 0;
}



Piste *uusi_piste(){

int _a;
int _b;

cout << "Anna uuden pisteen x: ";
 cin >> _a;


 //delete x1;

cout << "Anna uuden pisteen y: ";
cin >> _b;
//
int *x1 = new int(_a);
int *y1 = new int(_b);
//delete x1;
//delete y1;



}


