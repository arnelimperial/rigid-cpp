#include <iostream>

using namespace std;



class Ihminen{

	private:
		string humanName_, dogName_;




	protected:
        int number_;
        int *ptr;


	public:
		Ihminen();
		virtual ~Ihminen();
		Ihminen(string humanName);
		void KavelytaKoiraa(int number);
		void OtaVastuuKoirasta(Ihminen *p);
		Ihminen *p;
		//Ihminen& operator=(const Ihminen& old);




};

Ihminen::Ihminen(){



}

Ihminen ::~Ihminen(){}

Ihminen ::Ihminen(string humanName): humanName_(humanName){
     cout << humanName_ <<": Mutta eihän minulla ole koiraa..." << endl;
}


void Ihminen:: KavelytaKoiraa(int number){
    number_ = number;


}

void Ihminen :: OtaVastuuKoirasta(Ihminen *p){

    //p = new Ihminen(humanName_);

    string name1 = "Pluto", name2 = "Rex";

    if(humanName_ == "Mikko"){


         cout << humanName_ << ": " << name1  <<  " käveli juuri " << number_ <<  " kilometriä." << endl;

    }else{

         cout << humanName_ << ": " << name2  <<  " käveli juuri " << number_ <<  " kilometriä." << endl;
    }






}





class Koira : public Ihminen{

	private:
		string dogName_;


    protected:
        int dog_num;
        int C;




	public:
		Koira();
		~Koira();
		Koira(string dogName);
		void Hauku();
		friend class Ihminen;





};

Koira::Koira(){

}

Koira ::~Koira(){


}

Koira ::Koira(string dogName):dogName_(dogName){

}


void Koira :: Hauku(){

    C++;


	if(C == 1){

		cout << dogName_ << ": Hau hau! Olen kävellyt " <<  number_ << " kilometriä." << endl;

	}else{


		cout << dogName_ << ": Hau hau! Olen kävellyt " <<  7 << " kilometriä." << endl;}


}



int main()
{
    string koiran_nimi, ihmisen_nimi;
  cout << "Anna ihmisen nimi: ";
  cin >> ihmisen_nimi;
  cout << "Anna koiran nimi: ";
  cin >> koiran_nimi;

  cout << endl;

  Ihminen* isanta = new Ihminen(ihmisen_nimi);
  Koira* rekku = new Koira(koiran_nimi);

  isanta->KavelytaKoiraa(7);
  rekku->Hauku();

  isanta->OtaVastuuKoirasta(rekku);
  isanta->KavelytaKoiraa(7);

  rekku->Hauku();

  return 0;
}
