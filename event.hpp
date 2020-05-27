//
//  event.hpp
//  mz_po_3.1
//
//  Created by Adrian Juszczak on 27/05/2020.
//  Copyright © 2020 Adrian Juszczak. All rights reserved.
//

#ifndef event_hpp
#define event_hpp

#include <stdio.h>
#include <iostream>

using namespace std;

class Event
{
private: // hermetyzacja, uszczelnianie zmiennych, inaczej enkapsulacja - zamkniecie w szczelnej kapsuje
    int day, month, year;
    int hour, minutes;
    string name;
    
public: // udostępniamy interfejs do wspolpracy z tą klasą.
    void load();
    void show();
};

#endif /* event_hpp */
