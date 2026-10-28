#include <iostream> 
using namespace std;

class Vetura() ;

private : 

string emri;
int vitiProdhimit;
int kapacitetiRezervoarit;
int NrKilometrave;
float shpenzimetMesatare;

public :

Vetura() ;
public:
    Vetura() {
        cout << "Emri: ";
        cin >> emri;

        cout << "Viti i prodhimit: ";
        cin >> vitiProdhimit;

        cout << "Kapaciteti i rezervuarit: ";
        cin >> kapacitetiRezervuarit;

        cout << "Nr i kilometrave: ";
        cin >> nrKilometrave;

        cout << "Shpenzimet mesatare (l/100km): ";
        cin >> shpenzimetMesatare;
    }


float shpenzimetMesatare (){
    return (shpenzimet  * 100 )
}

float nrKilometrave() {
    return (100 / nrKilometrave) 
}



float kursimet (){
    return (kursimet) 
}


