#include <iostream>

#include "ItemToPurchase.h"
#include "ShoppingCart.h"

ShoppingCart cart;

void part1()
{
    // Input trackers:
    std::string itemName;
    int itemPrice;
    int itemQuantity;

    // Item 1 input:
    std::cout << "Item 1" << std::endl;
    std::cout << "Enter the item name:" << std::endl;
    std::getline(std::cin, itemName);
    std::cout << "Enter the item price:" << std::endl;
    std::cin >> itemPrice;
    std::cout << "Enter the item quantity:" << std::endl;
    std::cin >> itemQuantity;
    std::cout << std::endl;

    ItemToPurchase item1;
    item1.SetName(itemName);
    item1.SetPrice(itemPrice);
    item1.SetQuantity(itemQuantity);

    std::cin.ignore();

    // Item 2
    std::cout << "Item 2" << std::endl;
    std::cout << "Enter the item name:" << std::endl;
    std::getline(std::cin, itemName);
    std::cout << "Enter the item price:" << std::endl;
    std::cin >> itemPrice;
    std::cout << "Enter the item quantity:" << std::endl;
    std::cin >> itemQuantity;
    std::cout << std::endl;

    ItemToPurchase item2;
    item2.SetName(itemName);
    item2.SetPrice(itemPrice);
    item2.SetQuantity(itemQuantity);


    // Calculate total cost:
    int item1Total = item1.GetQuantity() * item1.GetPrice();
    int item2Total = item2.GetQuantity() * item2.GetPrice();

    std::cout << "TOTAL COST" << std::endl;
    std::cout << item1.GetName() << " " << item1.GetQuantity() << " @ $" << item1.GetPrice()
              << " = $" << item1Total << std::endl;

    std::cout << item2.GetName() << " " << item2.GetQuantity() << " @ $" << item2.GetPrice()
              << " = $" << item2Total << std::endl << std::endl;

    std::cout << "Total: $" << item1Total + item2Total << std::endl;
}

void ExecuteMenu(char option, ShoppingCart& theCart)
{
    // Output shopping cart
    if (option == 'o')
    {
        std::cout << "OUTPUT SHOPPING CART" << std::endl;
        theCart.PrintTotal();
    }

    // Output items' descriptions
    else if (option == 'i')
    {
        std::cout << "OUTPUT ITEMS' DESCRIPTIONS" << std::endl;
        theCart.PrintDescriptions();
    }

    // Add item to cart
    else if (option == 'a')
    {
        std::cout << "ADD ITEM TO CART" << std::endl;

        std::string itemName;
        std::string itemDescription;
        int itemPrice;
        int itemQuantity;

        std::cout << "Enter the item name:" << std::endl;
        std::getline(std::cin, itemName);
        std::cout << "Enter the item description:" << std::endl;
        std::getline(std::cin, itemDescription);
        std::cout << "Enter the item price:" << std::endl;
        std::cin >> itemPrice;
        std::cout << "Enter the item quantity:" << std::endl;
        std::cin >> itemQuantity;
        std::cout << std::endl;

        ItemToPurchase item(itemName, itemDescription, itemPrice, itemQuantity);
        theCart.AddItem(item);
    }

    // Remove item from cart
    else if (option == 'd')
    {
        std::cout << "REMOVE ITEM FROM CART" << std::endl;
        std::cout << "Enter name of item to remove:" << std::endl;

        std::string itemName;
        std::getline(std::cin, itemName);

        theCart.RemoveItem(itemName);
    }

    // Change item quantity
    else if (option == 'c')
    {
        std::cout << "CHANGE ITEM QUANTITY" << std::endl;

        std::string itemName;
        int quantity;

        std::cout << "Enter the item name:" << std::endl;
        std::getline(std::cin, itemName);
        std::cout << "Enter the new quantity:" << std::endl;
        std::cin >> quantity;

        ItemToPurchase item;
        item.SetName(itemName);
        item.SetQuantity(quantity);
        theCart.ModifyItem(item);
    }

}


void PrintMenu()
{
    bool quit = false;
    while (!quit)
    {
        std::cout << "MENU" << std::endl;
        std::cout << "a - Add item to cart" << std::endl;
        std::cout << "d - Remove item from cart" << std::endl;
        std::cout << "c - Change item quantity" << std::endl;
        std::cout << "i - Output items' descriptions" << std::endl;
        std::cout << "o - Output shopping cart" << std::endl;
        std::cout << "q - Quit" << std::endl;
        std::cout << std::endl;

        char option = ' ';

        // Get user input for a valid option:
        std::cout << "Choose an option:" << std::endl;
        std::cin >> option;
        while (option != 'a' && option != 'd' && option != 'c' && option != 'i' && option != 'o' && option != 'q')
        {
            std::cout << "Choose an option:" << std::endl;
            std::cin >> option;
        }

        std::cin.ignore();

        // Quit
        if (option == 'q')
        {
            quit = true;
            break;
        }

        ExecuteMenu(option, cart);
    }
}


void part2()
{
    // Input trackers:
    std::string name;
    std::string date;


    std::cout << "Enter customer's name:" << std::endl;
    std::getline(std::cin, name);
    std::cout << "Enter today's date:" << std::endl;
    std::getline(std::cin, date);
    std::cout << std::endl;


    std::cout << "Customer name: " << name << std::endl;
    std::cout << "Today's date: " << date << std::endl;
    std::cout << std::endl;

    cart = ShoppingCart(name, date);

    PrintMenu();
}


int main()
{
    part2();

    return 0;
}





