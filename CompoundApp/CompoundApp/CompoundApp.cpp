// CompoundApp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Compound.h"
#include "Element.h"

using namespace std;

int main()
{

    Element Hydrogen = Element("H", 1, (float)0.0023);
    Element Oxygen = Element("O", 20, (float)0.0067);
    Element Helium = Element("He", 2, (float)0.0034);

    Element neccessaryElements[2] = {Hydrogen, Oxygen};
    int intArr[2] = { 1, 2 };
    
    Compound H2O = Compound(neccessaryElements, intArr, "H2O");
    H2O.PrintCompound();
    cout << endl << "Assignment Operator in use" << endl;

    Compound AssignmentModifiedH2O = H2O;
    AssignmentModifiedH2O.addElement(Helium, 2);
    AssignmentModifiedH2O.PrintCompound();

    cout << endl << "Copy Constructor in use" << endl;
    Compound CopyModifiedH2O(H2O);
    CopyModifiedH2O.addElement(Helium, 17);
    CopyModifiedH2O.PrintCompound();

    

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
