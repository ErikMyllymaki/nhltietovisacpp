#ifndef KYSYMYS_H
#define KYSYMYS_H
#include <iostream>
#include <string>
using namespace std;



class Kysymys {
private:
    string kysymys_teksti; // kysymys
    string kysymys_1; // kysymysvaihtoehdot
    string kysymys_2; //
    string kysymys_3; //
    string kysymys_4; //
    int oikea_vastaus; // numero, jolla määritetään oikea vastaus

public:
    void asetaArvot(string, string,
                   string, string,
                   string, int);

    void kysyKysymys();

    void lopetus();
};




#endif // KYSYMYS_H
