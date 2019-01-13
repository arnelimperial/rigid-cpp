#include <iostream>
#include <string>
using namespace std;


class Auto
{
public:
  void Liiku(int km);
  void KerroAjetutKm();
  Auto(string merkki, int ajetut_km);
private:
  string merkki_;
  int ajetut_km_;
};

Auto::Auto(string merkki, int ajetut_km) : merkki_(merkki), ajetut_km_(ajetut_km)
{
}

void Auto::Liiku(int km)
{
  ajetut_km_ = ajetut_km_ + km;
  cout << "Wrooom..." << km << " kilometriä ajettu." << endl;
}

void Auto::KerroAjetutKm()
{
  cout << merkki_ << " merkkisellä autolla on ajettu " << ajetut_km_ << " km" << endl;
}


class Henkilo{


    public:
	int number;
	Auto *object_ ;
	string name_;
	string car_;
	int start;




        Henkilo(string name, Auto *car);
        ~Henkilo();


        void AjaAutoa(int num);


        void VaihdaAutoa(Auto *car);



};


Henkilo :: Henkilo(string name, Auto *car): name_(name), object_(car){
//   object_ = new Auto;
 //  name_ = name;

}

Henkilo :: ~Henkilo(){
    delete object_;

}

void Henkilo :: AjaAutoa(int num){


 start = start + num;
cout << "Wrooom..." << start << " kilometriä ajettu." << endl;


}

void Henkilo :: VaihdaAutoa(Auto *car){

    if(car != NULL){
        delete object_;
        object_ = car;
    }
}


int main()
{
    Auto *deksteri = new Auto("Toyota Corolla", 25000);

    Auto *ferrari = new Auto("Ferrari 5000", 1500);

    Henkilo *autoilija = new Henkilo("James", deksteri);

    deksteri -> KerroAjetutKm();
    autoilija -> AjaAutoa(1000);
    deksteri -> KerroAjetutKm();


    ferrari ->KerroAjetutKm() ;
    autoilija -> VaihdaAutoa(ferrari);

    autoilija -> AjaAutoa(20000);

    ferrari -> KerroAjetutKm();


    return 0;
}
