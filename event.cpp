// plik cpp, pamietamy o zainkludowaniu pliku naszej klasy

// nagłówki standardowe
#include <iostream>
#include "event.hpp"

using namespace std;

// uzycie operatora zasiegu :: , jest czescia klasy event

void Event::load()
{
    cout << "Nazwa wydarzenia: \n";
    cin >> day;
    cout << "Dzien wydarzenia: \n";
    cin >> day;
    cout << "Miesiac: ";
    cin >> month;
    cout << "Godzina: ";
    cin >> hour;
    cout << "Minuta: ";
    cin >> minutes;
    
}

void Event::show()
{
    cout << name << " "<< day << "." << month << "." << year << " " << hour << "." << minutes << endl;
}

