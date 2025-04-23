#include <iostream>

#ifndef Arduino_h
    #include "../lib/Horloge/horloge.h"
    using namespace std;

    int main()
    {
        cout<<"Hello world !\nThat cool\n";
        return 0;
    }
#else
    #include <horloge.h>
    void setup()
    {

    }

    void loop()
    {
        
    }
#endif // Arduino_h

