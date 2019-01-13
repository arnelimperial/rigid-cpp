#include <iostream>

using namespace std;

class Kuvio{

	private:

		int sivun_pituus;
		char tekstuuri_;

	public:
		Kuvio();
        Kuvio(char tekstuuri);
        virtual ~Kuvio();
		char PalautaTekstuuri();
	    virtual void Piirra();
	    Kuvio *nelio;
	    //char tekstuuri;


};

Kuvio::Kuvio(){
    //nelio = new Kuvio();
    //nelio -> Piirra();

	}


Kuvio :: Kuvio(char tekstuuri): tekstuuri_(tekstuuri){
  //  int a;
  //  sivun_pituus = a;
}


Kuvio :: ~Kuvio(){



}

char Kuvio :: PalautaTekstuuri(){

	return tekstuuri_;}

void Kuvio :: Piirra(){
 //int i, j;
   //  for(i = 0;i < sivun_pituus; i++){
     //   for(j= 0; j< sivun_pituus; j++){
        //   if(j == sivun_pituus - 1){
               // cout << PalautaTekstuuri() << endl;
          //  }else{
                //cout << PalautaTekstuuri() << endl;
          //  }

       // }

    // }
}








class Nelio : public Kuvio{
    public:
    Nelio(char tekstuuri, int sivun_pituus);
    void Piirra();

    private:
        int sivun_pituus_;

};

Nelio :: Nelio(char tekstuuri, int sivun_pituus): Kuvio(tekstuuri), sivun_pituus_(sivun_pituus){

}

void Nelio :: Piirra(){
     int i, j;
     for(i = 0;i < sivun_pituus_; i++){
        for(j= 0; j< sivun_pituus_; j++){
            if(j == sivun_pituus_ - 1){
                cout << PalautaTekstuuri() << endl;
            }else{
                cout << PalautaTekstuuri() << endl;
            }

        }

     }
}



int main()
{
  int sivun_pituus;
  char tekstuuri;
  cout << "Anna muodostettavan neliön sivun pituus: ";
  cin >> sivun_pituus;
  cout << "Syötä merkki, jota käytetään neliön tekstuurina: ";
  cin >> tekstuuri;

  Kuvio* nelio = new Nelio(tekstuuri, sivun_pituus);
  nelio->Piirra();
  delete nelio;

  return 0;
}
