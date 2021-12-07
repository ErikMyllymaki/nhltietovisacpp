#include <iostream>
#include <kysymys.h>
#include <stdio.h>

using namespace std;



int main() {


    cout << "Tervetuloa NHL-tietovisaan!" << endl;
    cout << "\nPaina enteria aloittaaksesi visan! ";
    cin.get();

    Kysymys k1;
    Kysymys k2;
    Kysymys k3;
    Kysymys k4;
    Kysymys k5;
    Kysymys k6;
    Kysymys k7;
    Kysymys k8;



    //  Asetetaan kysymyksille arvot:
    k1.asetaArvot("Milla  seuraavista joukkueista on eniten voitettuja Stanley Cupeja?", "Toronto Maple Leafs", "Ottawa Senators",
            "Pittsburgh Penguins", "Montreal Canadiens", 4);

    k2.asetaArvot("Mika oli legendaarisen Mario Lemieuxin pelinumero?", "8", "33",
            "66", "99", 3);

    k3.asetaArvot("Kuka on tehnyt kaikkien aikojen eniten pisteita NHL:ssa?", "Wayne Gretzky", "Jaromir Jagr",
            "Gordie Howe", "Teemu Selanne", 1);

    k4.asetaArvot("Mina vuonna pelattiin ensimmainen NHL-ottelu?", "1925", "1948",
            "1974", "1917", 4);

    k5.asetaArvot("Kuinka monta joukkuetta NHL:ssa on mukana kaudella 2021-2022?", "32", "25",
            "30", "27", 1);

    k6.asetaArvot("Kuka seuraavista NHL-konkareista ei ole voittanut Stanley Cupia kertaakaan?", "Alexander Ovechkin", "Sidney Crosby",
            "Ryan Getzlaf", "Joe Thornton", 4);

    k7.asetaArvot("Mika elain on Vancouer Canucksin logossa?", "Kotka", "Valas",
            "Susi", "Karhu", 2);

    k8.asetaArvot("Kuka on eniten NHL-peleja pelannut pelaaja?", "Gordie Howe", "Jaromir Jagr",
            "Patrick Marleau", "Wayne Gretzky", 3);


    // Kysytään kysymykset:
    k1.kysyKysymys();
    k2.kysyKysymys();
    k3.kysyKysymys();
    k4.kysyKysymys();
    k5.kysyKysymys();
    k6.kysyKysymys();
    k7.kysyKysymys();
    k8.kysyKysymys();

    // lopetetaan visa
    k8.lopetus();
    return 0;

}

