#include <iostream>
#include "Pair.h"

int main()
{
    Pair<int> intPair;
    Pair<int> intOtherPair;
    intPair.Input();
    intOtherPair.Input();
    intPair.ShowComparison(&intOtherPair);

    Pair<double> doublePair;
    Pair<double> doubleOtherPair;
    doublePair.Input();
    doubleOtherPair.Input();
    doublePair.ShowComparison(&doubleOtherPair);

    Pair<std::string> wordPair;
    Pair<std::string> wordOtherPair;
    wordPair.Input();
    wordOtherPair.Input();
    wordPair.ShowComparison(&wordOtherPair);

    return 0;
}
