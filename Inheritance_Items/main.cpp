#include <iostream>
#include <vector>

#include "Item.h"
#include "ProduceItem.h"
#include "Fruit.h"
#include "Vegetable.h"


int main()
{
    // Creating objects of base class Item:
    Item i1("Mop", 10);
    Item i2("Detergent", 20);

    // Creating objects of derived class ProduceItem (has experation date)
    ProduceItem p1("Grape", 30, "10/25/2023");
    ProduceItem p2("Peanut butter", 2);

    // Creating objects of derived class Fruit (contains seeds)
    Fruit f1("Blueberry" , 100, "10/31/2023", 1);
    Vegetable v1("Lettuce", 2, "11/5/2023", 50);

    std::cout << "Printing items:" << '\n';
    i1.print();     std::cout << '\n';
    i2.print();     std::cout << '\n';
    p1.print();     std::cout << '\n';
    p2.print();     std::cout << '\n';
    f1.print();     std::cout << '\n';
    v1.print();     std::cout << '\n';


    // Creating objects with pointers:
    Item* i3 = new Item("Chair", 3);
    ProduceItem* p3 = new ProduceItem("Bread", 10, "10/31/2023");
    Item* p4 = new ProduceItem("Strawberry", 15, "10/31/2023");
    Item* f2 = new Fruit("Tomato", 4, "10/31/2023", 5);
    ProduceItem* f3 = new Vegetable("Brocolli", 20, "11/5/23", 0);

    std::cout << '\n' << "Printing objects from pointers (non-virtual methods):" << '\n';
    i3->print();    std::cout << '\n';      // Prints: Chair x3
    p3->print();    std::cout << '\n';      // Prints: Bread x10, expires 10/31/23

    // This print method calls Item::print() since the variable is of the type Item.
    // Methods are called based on the variables type, not the objects type!
    p4->print();    std::cout << '\n';      // Prints: Strawberry x15


    // Marking a function as virtual causes the function to be called on the object type rather
    // than the variable type
    std::cout << '\n' << "Printing objects from pointers (virtual methods):" << '\n';
    i3->virtualPrint();     std::cout << '\n';      // Prints: Chair x3
    p3->virtualPrint();     std::cout << '\n';      // Prints: Bread x10, expires 10/31/23
    p4->virtualPrint();     std::cout << '\n';      // Prints: Strawberry x15, expires 10/31/23
    f2->virtualPrint();     std::cout << '\n';      // Prints: Tomato x4, expires 10/31/23, seed count: 5
    f3->virtualPrint();     std::cout << '\n';      // Prints: Brocolli x20, expires 11/5/23, leaf count: 0


    // Vector of item pointers:
    // This is more efficient because it doesnt create copies of objects when pushing_back.
    // Can insert objects that derive from Item
    std::vector<Item*> items;
    items.push_back(&i1);       // pushing the addresses of the objects already declared on the stack
    items.push_back(&i2);
    items.push_back(&p1);
    items.push_back(&p2);
    items.push_back(&f1);
    items.push_back(&v1);

    std::cout << '\n' << "Printing vector of items:" << '\n';
    for (const Item* i : items)
    {
        i->virtualPrint();       // Calling the virtual method so method is called on derived object type
        std::cout << '\n';
    }

    return 0;
}