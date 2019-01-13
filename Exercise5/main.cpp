#include <iostream>

using namespace std;


#include<iostream>
using namespace std;

class Ajoneuvo
{
public:
  Ajoneuvo(int ajetut, int paino, string merkki, string malli);

protected:
  void Liikuta(int km);
  int PalautaAjetut();
  int PalautaPaino();
  string PalautaMerkki();
  string PalautaMalli();

private:
  int ajetut_;
  int paino_;
  string merkki_;
  string malli_;
};

Ajoneuvo::Ajoneuvo(int ajetut, int paino, string merkki, string malli) : ajetut_(ajetut), paino_(paino),
merkki_(merkki), malli_(malli)
{
}

void Ajoneuvo::Liikuta(int km)
{ ajetut_ = ajetut_ + km; }

int Ajoneuvo::PalautaAjetut()
{ return ajetut_; }

int Ajoneuvo::PalautaPaino()
{ return paino_; }

string Ajoneuvo::PalautaMerkki()
{ return merkki_; }

string Ajoneuvo::PalautaMalli()
{ return malli_; }



class Auto : public Ajoneuvo{


    public:
        using Ajoneuvo :: Ajoneuvo;
        Auto(int, int, string, string, string, int);
        ~Auto();
        void TulostaAutonTiedot();
        void AjaAutoa(int);


};

int main()
{
    Auto pirsse(250000, 1700, "Toyota", "Carina II", "TFM-257", 5);

    pirsse.TulostaAutonTiedot();
    pirsse.AjaAutoa(25000);
    pirsse.TulostaAutonTiedot();

    return 0;
}
