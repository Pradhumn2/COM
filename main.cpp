// COM Project Application.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Factory.h"

//.h and .lib are both needed to compile this file.
//.h is the declaration of the class which when invluded in any cpp is an 
// assurance to the cpp that such a method(interface) exists, which you can make a claa to it.
// .h is knowing there is ticket counter in the raliway station
//.lib is an assurance that there is a person to serve you at the counter.

int main()
{
    iMobile* iMobPtr = Factory::get_instance_iMobile();
    iCalc* ptr = NULL;
    iMobPtr->query_interface(2, (void**)&ptr); // passing pointer pointing to pointere
    (*ptr).addref();
    ptr->add(2, 3);
    //(ptr)->release_ref();


    void* temp = nullptr;
    

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
