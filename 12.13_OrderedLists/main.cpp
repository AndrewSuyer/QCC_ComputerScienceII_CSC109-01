#include <iostream>

#include "OrderedList.h"
#include "MyClass.h"

using namespace std;

int main()
{
    // Demonstration of OrderedList functions
    OrderedList<int> intList;

    intList.Insert(11);
    intList.Insert(3);
    intList.Insert(7);

    if (intList.Size() == 3)
        cout << "Size is correct" << endl;
    else
        cout << "Size should be 3" << endl;

    if (intList.At(0) == 3 && intList.At(1) == 7 && intList.At(2) == 11)
        cout << "List is in correct order: ";
    else
        cout << "List is out of order: ";

    intList.Print();
    cout << endl;

    int indx = intList.Find(11);
    if (indx == 2)
        cout << "Index of 11 is correct -- " << indx << endl;
    else
        cout << "Index of 11 is incorrect -- " << indx << endl;

    intList.Remove(7);
    if (intList.At(0) == 3 && intList.At(1) == 11)
        cout << "7 was removed correctly" << endl;
    else
        cout << "7 was not removed correctly" << endl;


    // Demonstration of MyClass functions
    MyClass<int> c1, c2, c3;

    c1.SetDataObject(1);
    c2.SetDataObject(2);
    c3.SetDataObject(2);

    cout << "c1 == c2 : " << (c1 == c2) << '\n';


    return 0;
}
