#include <iostream>
#include <string>
#include <kysymys.h>
#include <windows.h>
using namespace std;

int vastaus;
int oikeat = 0;
int num = 0;

string selitykset[8] = {"Montreal Canadiens on voittanut 24 Stanley Cupia.",
                        "Mario Lemieux lopetti uransa jo kertaalleen 1997, mutta palasi NHL-kaukaloon 2000-2001 kaudella ja pelasi viela viisi kautta",
                        "Wayne Gretzky teki urallaan 2857 pistetta NHL:ssa.",
                        "Ensimmaisessa NHL-ottelussa vastakkain pelasivat Montreal Canadiens ja Ottawa Senators.",
                        "Uusimpana joukkueena on 2021-2022 kaudella mukaan tullut Seattle Kraken.",
                        "Joe Thornton on pelannut NHL:ssa 1694 pelia ja tehnyt niissa 1533 pistetta.",
                        "Vancouer Canucksin nykyinen logo astui voimaan kaudella 1997-1998",
                        "Patrick Marleau on pelannut urallaan 1779 NHL-ottelua."
                        };


// funktio, joka asettaa kysymyksille arvot
void Kysymys::asetaArvot(
    string text, string v1,
    string v2, string v3,
    string v4, int oikea)
{
    kysymys_teksti = text;
    kysymys_1 = v1;
    kysymys_2 = v2;
    kysymys_3 = v3;
    kysymys_4 = v4;
    oikea_vastaus = oikea;
}

// muuttuja tekstin värin muuttamista varten
HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);


// funktio, joka kysyy kysymykset
void Kysymys::kysyKysymys() {


   cout << endl;
   SetConsoleTextAttribute(h, 3); // SetConsoleTextAttribute muuttaa tekstin väriä
   cout << kysymys_teksti << endl;
   SetConsoleTextAttribute(h, 7); // (h, 7) palauttaa värin takaisin valkoiseksi
   cout << "1. " << kysymys_1 << endl;
   cout << "2. " << kysymys_2 << endl;
   cout << "3. " << kysymys_3 << endl;
   cout << "4. " << kysymys_4 << endl;



   cout << "Vastauksesi (vastaa numerolla): "
             << endl;
   cin >> vastaus;

      if (vastaus == oikea_vastaus) {
            cout << endl;
            SetConsoleTextAttribute(h, 2);
            cout << "Oikein! " << selitykset[num] << endl;
            cout << endl;
            SetConsoleTextAttribute(h, 7);
            oikeat++;
           }
      else {
            cout << endl;
            SetConsoleTextAttribute(h, 4);
            cout << "Ei mennyt oikein." << endl;
            cout << endl;
            SetConsoleTextAttribute(h, 7);
        }
      num++;


}


// funktio, joka tulostaa lopputulokset
void Kysymys::lopetus(){

    cout << "Kiitos kun pelasit, sait " << oikeat << "/8" << " pistetta." << endl;
    if (oikeat < 4){
        SetConsoleTextAttribute(h, 4);
        cout << "Sait alle puolet oikein, kokeile uudestaan!" << endl;
        SetConsoleTextAttribute(h, 7);

    }
    else if (oikeat > 4 && oikeat < 8){
        SetConsoleTextAttribute(h, 6);
        cout << "Sait yli puolet oikein, tietamyksesi on hyva!" << endl;
        SetConsoleTextAttribute(h, 7);

    }

    else if (oikeat == 8){
        SetConsoleTextAttribute(h, 2);
        cout << "Kaikki oikein, loistavaa!!" << endl;
        SetConsoleTextAttribute(h, 7);
    }

}
