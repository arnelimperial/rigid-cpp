#include <iostream>
#include <string>
using namespace std;
#include <vector>
//class Asiakastili{
//
//    private:
//        int accountNum , balance, tili;
//        string name;
//
//
//    public:
//        Asiakastili();
//        ~Asiakastili();
//        void LisaaAsiakas(int a, int b, string n);
//        int VertaaTiliNro(int t);
//        void NaytaTiedot();
//
//
//};
//
//Asiakastili :: Asiakastili(){
//
//}
//
//Asiakastili :: ~Asiakastili(){}
//
//void Asiakastili :: LisaaAsiakas(int a, int b , string n){
//
//
//        accountNum = a;
//        balance = b;
//        name = n;
//
//
//
//}
//
//
//
//int Asiakastili :: VertaaTiliNro(int t){
//
//	tili = t;
//
//	if(tili == 12345 || tili == 23456 || tili == 34567 || tili == 45678 || tili == 56789){
//
//		return 1;
//
//	}else{
//
//
//		return 0;
//	}
//}
//
//
//
//void Asiakastili:: NaytaTiedot(){
//
//    cout << "Tilinumero: " << accountNum<< endl;
//    cout << "Asiakkaan nimi: " << name << endl;
//    cout << "Tilin saldo: " << balance << endl;
//    }



class Asiakastili
{
  int accountNum, balance, acct, newAcct;
  string name;

public:
  void LisaaAsiakas(int a, int b, string n);
  void NaytaTiedot();
  void MuutaSaldoa(int b);
  int VertaaTiliNro(int a);
};

void Asiakastili::LisaaAsiakas(int a, int b, string n)
{
  accountNum = a;
  balance = b;
  name = n;
}

void Asiakastili::NaytaTiedot()
{
  cout << "Tilinumero: " << accountNum << endl;
  cout << "Asiakaan nimi: " << name << endl;
  cout << "Tilin saldo: " << balance << endl;
}

void Asiakastili::MuutaSaldoa(int b)
{
   balance = b;
}

int Asiakastili::VertaaTiliNro(int a)
{
  if(accountNum == a)
  {
    return 1;
  }
  else
  {
    return 0;
  }
}



int main(){
    int valinta, tili_nro, uusi_salso, i, loytyi = 0;

    Asiakastili asiakasrekisteri [5];

    asiakasrekisteri [0].LisaaAsiakas(12345, 312, "Mikko Mottonen");
    asiakasrekisteri [1].LisaaAsiakas(23456, 23, "Anni Manninen");
    asiakasrekisteri [2].LisaaAsiakas(34567, 112, "Simo Siili");
    asiakasrekisteri [3].LisaaAsiakas(45678, 99834, "Riku Rikas");
    asiakasrekisteri [4].LisaaAsiakas(56789, 7500, "Marja Mallikas");


    do{

    cout << endl << "1. Nayta asikaan tiedot" << endl;
    cout << "2. Muuta asiakaan saldoa." << endl;
    cout << "Valitse toiminto" << endl;

    cin >> valinta;

    if(valinta == 1){
        cout << "Anna tilinumero: " << endl;
        cin >> tili_nro;
        for(i = 0; i < 5; i++){

        if(asiakasrekisteri[i].VertaaTiliNro(tili_nro) == 1){

            loytyi = 1;
            asiakasrekisteri [i].NaytaTiedot();
            }
        }

        if(loytyi == 0){

            cout << "Antamasi tilinumero" << endl;

        }

        loytyi = 0;


    }


    }while(valinta > 0);




}
