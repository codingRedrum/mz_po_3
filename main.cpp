//
//  main.cpp
//  mz_po_3.1
//

#include <iostream>
#include "event.hpp"
using namespace std;


int main()
{
    /*
     ręczne inicjowanie obiektu klasy, atrybuty sa w tej chwili publiczne, wiec moge do nich swobodnie zapisywac dane
     
     Nie, klasa powinna automatycznie inicjowac obiekty klasy.
     W momencie tworzenia obiektu powinien on dostac wartosci startowe, DOMYŚLNE
     
    Event w1;
    w1.day = 1;
    w1.month = 12;
    w1.year = 2020;
    
    */
    
    Event e1;
    e1.show();
    
    return 0;
}
