#include <iostream>
#include <utility>
#include <vector>
#include "Item.h"

/*
 * Recursion can be used to explore all possible combinations of a collection of items.
 * Diagram explaining ScrambleLetters (can be used to understand general cases):
 * https://qccmass-my.sharepoint.com/:u:/r/personal/asuyer_student_qcc_edu/_layouts/15/Doc.aspx?sourcedoc=%7B611205AA-D3C3-4055-83E8-94EDDA616ED2%7D&file=AllPermutationsForRecursion.vsdx&action=edit&mobileredirect=true&or=PrevEdit
 * Also see lab 11.16 which deals with vectors
 */


/**
 * Prints all possible combinations of the letters of remainingLetters. The second parameter to this function is used
 * recursively and can be ignored on the original call to this function.
 * @param remainingLetters - String to scramble
 * @param scramLetters - Used internally to store the current permutation of remainingLetters
 */
void ScrambleLetters(std::string remainingLetters, std::string scramLetters = "");

const static int MAX_ITEMS_IN_SHOPPING_BAG = 3;

/**
 * Prints all MAX_ITEMS_IN_SHOPPING_BAG item combinations of the Items in remainingItems. Keeps track of the smallest costing
 * combination and returns it. Also fills allBags with each bag combination.
 * @param currBag - The current shopping bag (used internally, send in empty initially)
 * @param remainingItems - Items to be processed
 * @param allBags - List will be filled with all bag combinations
 * @param smallestCost - Tracker of the lowest costing combination of items (used internally)
 * @return The cheapest combination of MAX_ITEMS_IN_SHOPPING_BAG items within remainingItem<Item> remainingItems, std::vector<Item> leastExpensiveCombination)
 */
int ShoppingBagCombinations(std::vector<Item> currBag, std::vector<Item> remainingItems, std::vector<std::vector<Item>>& allBags,
                            std::vector<Item>& cheapestBag, std::vector<Item>& mostExpensiveBag,  int smallestCost = -1, int largestCost = -1);



void ScrambleLettersPureRecursion(std::string remainingLetters, std::string scrambledLetters = "");


void ShoppingBagCombinationsPureRecursion(std::vector<Item> currBag, std::vector<Item> remainingItems);


std::vector<Item> MostExpensiveShoppingBagCombination(std::vector<Item> currBag, const std::vector<Item>& remainingItem, std::vector<Item> mostExpensiveCombination = std::vector<Item>());


std::vector<Item> LeastExpensiveShoppingBagCombination(std::vector<Item> currBag, std::vector<Item> remainingItems, std::vector<Item> leastExpensiveCombination = std::vector<Item>());


std::vector<std::vector<Item>> AllShoppingBagCombinations(std::vector<Item> remainingItems, std::vector<Item> currBag = std::vector<Item>(), std::vector<std::vector<Item>> bagList = std::vector<std::vector<Item>>());


std::vector<std::vector<Item>> AllShoppingBagCombinationsSorted(std::vector<Item> remainingItems, std::vector<Item> currBag = std::vector<Item>(), std::vector<std::vector<Item>> bagList = std::vector<std::vector<Item>>());


int main()
{
    ScrambleLetters("ABC");
    std::cout << "\n\n\n";
    ScrambleLettersPureRecursion("ABC");
    std::cout << "\n\n\n";

    std::vector<Item> items;
    items.emplace_back("Apples", 15);
    items.emplace_back("Oranges", 40);
    items.emplace_back("Blueberries", 6);
    items.emplace_back("Grapes", 32);

    std::vector<std::vector<Item>> allCombinations;
    std::vector<Item> cheapestCombination, mostExpensiveCombination;
    int cheapest = ShoppingBagCombinations(std::vector<Item>(), items, allCombinations, cheapestCombination, mostExpensiveCombination);
    std::cout << "Cheapest combination: $" << cheapest << '\n';
    std::cout << "Contains items: ";
    for (const Item& i : cheapestCombination)
    {
        std::cout << i.itemName << ' ';
    }

    std::cout << '\n' << "Most expensive combination: ";
    for (const Item& i : mostExpensiveCombination)
    {
        std::cout << i.itemName << ' ';
    }

    std::cout << "\n\n";

    int totalCost = 0;
    for (const std::vector<Item>& v : allCombinations)
    {
        for (const Item& i : v)
        {
            std::cout << i << ' ';
            totalCost += i.priceDollars;
        }
        std::cout << '\n';
    }
    std::cout << "Total cost of all combinations: $" << totalCost << '\n';
    std::cout << "\n\n";


    ShoppingBagCombinationsPureRecursion(std::vector<Item>(), items);

    std::cout << "\n";

    mostExpensiveCombination = MostExpensiveShoppingBagCombination(std::vector<Item>(), items, std::vector<Item>());

    std::cout << "MostExpensiveShoppingBagCombination():\n";
    for (const Item& i : mostExpensiveCombination)
    {
        std::cout << i << "  ";
    }
    std::cout << '\n';
    std::cout << '\n';


    std::vector<Item> leastExpensiveCombination = LeastExpensiveShoppingBagCombination(std::vector<Item>(), items);

    std::cout << "LeastExpensiveShoppingBagCombination():\n";
    for (const Item& i : leastExpensiveCombination)
    {
        std::cout << i << "  ";
    }
    std::cout << '\n';


    allCombinations.clear();
    allCombinations = AllShoppingBagCombinations(items);
    std::cout << "\nAllShoppingBagCombinations():\n";

    for (const std::vector<Item>& v : allCombinations)
    {
        for (const Item& i : v)
        {
            std::cout << i << ' ';
        }
        std::cout << '\n';
    }


    return 0;
}


void ScrambleLetters(std::string remainingLetters, std::string scramLetters)
{
    using std::string, std::cout, std::endl;
    string tmpString; // Temp word combination

    // Base case: All letters used
    if (remainingLetters.empty())
    {
        cout << scramLetters << '\n';
    }
    else
    {
        // Recursive case: move a letter from remaining to scrambled letters
        for (unsigned int i = 0; i < remainingLetters.size(); ++i)
        {
            // Move letter to scrambled letters
            tmpString = remainingLetters.substr(i, 1);
            remainingLetters.erase(i, 1);
            scramLetters += tmpString;

            ScrambleLetters(remainingLetters, scramLetters);

            // Put letter back in remaining letters
            remainingLetters.insert(i, tmpString);
            scramLetters.erase(scramLetters.size() - 1, 1);
        }
    }
}


int ShoppingBagCombinations(std::vector<Item> currBag, std::vector<Item> remainingItems, std::vector<std::vector<Item>>& allBags,
                            std::vector<Item>& cheapestBag, std::vector<Item>& mostExpensiveBag, int smallestCost, int largestCost)
{
    using std::cout, std::endl;

    int bagValue;        // Cost of items in shopping bag
    Item tmpGroceryItem; // Grocery item to add to bag

    // Base case: Shopping bag full
    if (currBag.size() == MAX_ITEMS_IN_SHOPPING_BAG)
    {
        bagValue = 0;
        allBags.push_back(currBag);

        for (auto& i : currBag)
        {
            bagValue += i.priceDollars;
            cout << i.itemName << "  ";
        }

        // Set value of the cheapest shopping bag
        if (bagValue < smallestCost || smallestCost == -1)
        {
            smallestCost = bagValue;
            cheapestBag = currBag;
        }
        if (bagValue > largestCost || largestCost == -1)
        {
            largestCost = bagValue;
            mostExpensiveBag = currBag;
        }

        cout << "= $" << bagValue << endl;
    }
    else
    {
        // Recursive case: move one item into the bag
        for (unsigned int i = 0; i < remainingItems.size(); ++i)
        {
            // Move item into bag
            tmpGroceryItem = remainingItems.at(i);
            remainingItems.erase(remainingItems.begin() + i);
            currBag.push_back(tmpGroceryItem);

            smallestCost = ShoppingBagCombinations(currBag, remainingItems, allBags, cheapestBag, mostExpensiveBag, smallestCost, largestCost);

            // Take item out of bag
            currBag.pop_back();
            remainingItems.insert(remainingItems.begin() + i,tmpGroceryItem);
        }
    }

    return smallestCost;
}

// ----- Pure recursive Scramble letters ----- //

/// Simulates the for loop that is used in ScrambleLetters
void ScrambleLettersHelper(int iteration, int limit, std::string remainingLetters, std::string scrambledLetters)
{
    // Reached ending condition of loop
    if (iteration == limit)
        return;

    std::string temp = remainingLetters.substr(iteration, 1);
    remainingLetters.erase(iteration, 1);
    scrambledLetters += temp;

    ScrambleLettersPureRecursion(remainingLetters, scrambledLetters);

    remainingLetters.insert(iteration, temp);
    scrambledLetters.erase(scrambledLetters.size() - 1, 1);

    ScrambleLettersHelper(iteration + 1, limit, remainingLetters, scrambledLetters);
}


void ScrambleLettersPureRecursion(std::string remainingLetters, std::string scrambledLetters)
{
    if (remainingLetters.empty())
    {
        std::cout << scrambledLetters << '\n';
        return;
    }

    // Move a letter from remainingLetters into scrambled letters then send again.
    // Once returned, move letter back into remainingLetters.
    ScrambleLettersHelper(0, remainingLetters.size(), remainingLetters, scrambledLetters);

}


// ----- Pure recursive Shopping Bag Combinations ----- //

/// Helper: replaces the for loop that prints all the items in bag
int PrintBagReturnPrice(std::vector<Item> bag)
{
    if (bag.empty())
        return 0;

    int itemPrice = bag.front().priceDollars;
    std::cout << bag.front().itemName << "  ";
    bag.erase(bag.begin());

    return itemPrice + PrintBagReturnPrice(bag);
}

/// Helper: replaces the for loop that moves an item from remainingItems to currBag and creates a recursive exploration.
void MoveItemHelper(int iteration, int limit, std::vector<Item> currBag, std::vector<Item> remainingItems)
{
    if (iteration == limit)
        return;

    Item tmpGroceryItem = remainingItems.at(iteration);

    // Move item into bag
    remainingItems.erase(remainingItems.begin() + iteration);
    currBag.push_back(tmpGroceryItem);

    ShoppingBagCombinationsPureRecursion(currBag, remainingItems);

    // Take item out of bag
    currBag.pop_back();
    remainingItems.insert(remainingItems.begin() + iteration,tmpGroceryItem);

    MoveItemHelper(iteration + 1, limit, currBag, remainingItems);
}

/**
 * Prints all possible shopping bag combinations consisting of MAX_ITEMS_IN_SHOPPING_BAG items.
 * @param currBag - used internally (send in empty)
 * @param remainingItems - Items that need to be considered (put original list here)
 */
void ShoppingBagCombinationsPureRecursion(std::vector<Item> currBag, std::vector<Item> remainingItems)
{
    if (currBag.size() == MAX_ITEMS_IN_SHOPPING_BAG)
    {
        int bagPrice = PrintBagReturnPrice(currBag);
        std::cout << "= $" << bagPrice << '\n';
        return;
    }

    MoveItemHelper(0, remainingItems.size(), currBag, remainingItems);
}


// ----- Pure recursive finding the most expensive Item combination ----- //

/// @returns The price of the shopping bag
int PriceOf(std::vector<Item> bag)
{
    if (bag.empty())
        return 0;

    int currPrice = bag.back().priceDollars;
    bag.pop_back();

    return currPrice + PriceOf(bag);
}

/// Helper: replacement for the for loop that moves an item from currBag to remainingItems. Keeps a reference to the most expensive bag which may be updated
/// during the call back to MostExpensiveCombination. This must be a reference since that function has ownership over the bag.
void MoveItemHelper2(int iteration, int limit, std::vector<Item> currBag, std::vector<Item> remainingItems, std::vector<Item>& mostExpensiveCombination)
{
    if (iteration == limit)
        return;

    Item tmpGroceryItem = remainingItems.at(iteration);

    // Move item into bag
    remainingItems.erase(remainingItems.begin() + iteration);
    currBag.push_back(tmpGroceryItem);

    mostExpensiveCombination = MostExpensiveShoppingBagCombination(currBag, remainingItems, mostExpensiveCombination);

    // Take item out of bag
    currBag.pop_back();
    remainingItems.insert(remainingItems.begin() + iteration,tmpGroceryItem);

    MoveItemHelper2(iteration + 1, limit, currBag, remainingItems, mostExpensiveCombination);
}


std::vector<Item> MostExpensiveShoppingBagCombination(std::vector<Item> currBag, const std::vector<Item>& remainingItems, std::vector<Item> mostExpensiveCombination)
{
    if (currBag.size() == MAX_ITEMS_IN_SHOPPING_BAG)
    {
        int bagPrice = PriceOf(currBag);

        if (bagPrice > PriceOf(mostExpensiveCombination))
        {
            mostExpensiveCombination = currBag;
        }

    }
    else
    {
        MoveItemHelper2(0, remainingItems.size(), currBag, remainingItems, mostExpensiveCombination);
    }

    return mostExpensiveCombination;
}


// ----- Pure recursion finding least expensive combination ----- //

void MoveItemForLoop(int iteration, int limit, std::vector<Item> currBag, std::vector<Item> remainingItems, std::vector<Item>& leastExpensiveCombination)
{
    if (iteration == limit)
        return;

    Item temp = remainingItems.at(iteration);

    remainingItems.erase(remainingItems.begin() + iteration);
    currBag.push_back(temp);

    leastExpensiveCombination = LeastExpensiveShoppingBagCombination(currBag, remainingItems, leastExpensiveCombination);

    currBag.pop_back();
    remainingItems.insert(remainingItems.begin() + iteration, temp);

    MoveItemForLoop(iteration + 1, limit, currBag, remainingItems, leastExpensiveCombination);
}

std::vector<Item> LeastExpensiveShoppingBagCombination(std::vector<Item> currBag, std::vector<Item> remainingItems, std::vector<Item> leastExpensiveCombination)
{
    if (currBag.size() == MAX_ITEMS_IN_SHOPPING_BAG)
    {
        int price = PriceOf(currBag);

        if (price < PriceOf(leastExpensiveCombination) || leastExpensiveCombination.empty())
        {
            leastExpensiveCombination = currBag;
        }
    }
    else
    {
        MoveItemForLoop(0, remainingItems.size(), currBag, remainingItems, leastExpensiveCombination);
    }

    return leastExpensiveCombination;
}


// ----- Pure recursion creating list of all possible shopping bag combinations ----- //

void MoveItemWithAllCombinations(int iterator, int limit, std::vector<Item> remainingItems, std::vector<Item> currBag, std::vector<std::vector<Item>>& bagList)
{
    if (iterator == limit)
        return;

    Item temp = remainingItems.at(iterator);

    // Move i'th item from remainingItems to currBag
    remainingItems.erase(remainingItems.begin() + iterator);
    currBag.push_back(temp);

    bagList = AllShoppingBagCombinations(remainingItems, currBag, bagList);

    // Move i'th item back into remainingItems
    currBag.pop_back();
    remainingItems.insert(remainingItems.begin() + iterator, temp);

    MoveItemWithAllCombinations(iterator + 1, limit, remainingItems, currBag, bagList);
}


std::vector<std::vector<Item>> AllShoppingBagCombinations(std::vector<Item> remainingItems, std::vector<Item> currBag, std::vector<std::vector<Item>> bagList)
{
    if (currBag.size() == MAX_ITEMS_IN_SHOPPING_BAG)
    {
        bagList.push_back(currBag);
    }
    else
    {
        MoveItemWithAllCombinations(0, remainingItems.size(), remainingItems, currBag, bagList);
    }

    return bagList;
}


// ----- Sorted all bag combinations ------ //


bool AddBagWithoutDuplicates(std::vector<std::vector<Item>>& bagList, std::vector<Item> bag, int iterator = 0)
{
    if (iterator == bagList.size())
    {
        return true;
    }

    std::vector<Item> currBag = bagList.at(iterator);

}

std::vector<std::vector<Item>> AllShoppingBagCombinationsSorted(std::vector<Item> remainingItems, std::vector<Item> currBag, std::vector<std::vector<Item>> bagList)
{
    if (currBag.size() == MAX_ITEMS_IN_SHOPPING_BAG)
    {

    }
}


