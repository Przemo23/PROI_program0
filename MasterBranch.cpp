#include <iostream>

using namespace std;

int main()
{
    string imie,pseudonim,nazwisko,calosc;
    cout << "Podaj imie, pseudonim i nazwisko"<< endl;
    cin >> imie >> pseudonim >> nazwisko;
    cout << imie <<" "<<  nazwisko <<" "<<pseudonim<< endl;
    size_t pozycja_imie = imie.find_first_of("AEIOUYaeiouy");
    while(pozycja_imie!=string::npos)
    {
        imie[pozycja_imie]='z';
        pozycja_imie = imie.find_first_of("AEIOUYaeiouy",pozycja_imie+1);
    }
    size_t pozycja_pseudonim = pseudonim.find_first_of("AEIOUYaeiouy");
    while(pozycja_pseudonim!=string::npos)
    {
        pseudonim[pozycja_pseudonim]='z';
        pozycja_pseudonim = nazwisko.find_first_of("AEIOUYaeiouy",pozycja_pseudonim+1);
    }
    size_t pozycja_nazwsiko = nazwisko.find_first_of("AEIOUYaeiouy");
    while(pozycja_nazwsiko!=string::npos)
    {
        nazwisko[pozycja_nazwsiko]='z';
        pozycja_nazwsiko = nazwisko.find_first_of("AEIOUYaeiouy",pozycja_nazwsiko+1);
    }
    cout << imie <<" "<<  nazwisko <<" "<<pseudonim<< endl;

    for(int i=0,b=imie.length()-1;i<b;i++,b--)
    {
        swap(imie[i],imie[b]);
    }
    for(int i=0,b=pseudonim.length()-1;i<b;i++,b--)
    {
        swap(pseudonim[i],pseudonim[b]);
    }
    for(int i=0,b=nazwisko.length()-1;i<b;i++,b--)
    {
        swap(nazwisko[i],nazwisko[b]);
    }
cout << imie <<" "<< nazwisko <<" "<<pseudonim<< endl;
}
