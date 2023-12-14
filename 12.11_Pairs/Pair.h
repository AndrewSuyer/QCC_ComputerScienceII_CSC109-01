/*
 * Copyright 2023
 * Created by Andrew Suyer
 * 12.11 Pairs
 */


#ifndef INC_12_11_PAIRS_PAIR_H
#define INC_12_11_PAIRS_PAIR_H

template<typename TheType>
class Pair
{
public:
    void Input();
    void Output();
    char CompareWith(Pair<TheType>* otherPair) ;
    void ShowComparison(Pair<TheType>* otherPair);

private:
    TheType firstVal;
    TheType secondVal;
};


// Return '<', '=', or '>' according to whether the Pair is less than,
// equal to, or greater than the argument Pair
template<typename TheType>
char Pair<TheType>::CompareWith(Pair<TheType>* otherPair)
{
    if (firstVal < otherPair->firstVal)
        return '<';

    else if (firstVal > otherPair->firstVal)
        return '>';

    else
    {
        // first values are equal, compare second pairs:
        if (secondVal < otherPair->secondVal)
            return '<';

        else if (secondVal > otherPair->secondVal)
            return '>';

        else
            return '=';
    }
}


// Input values into a pair
template<typename TheType>
void Pair<TheType>::Input()
{
    std::cin >> firstVal;
    std::cin >> secondVal;
}


// Output a Pair
template<typename TheType>
void Pair<TheType>::Output()
{
    std::cout << '[' << firstVal << ", " << secondVal << ']';
}


// Output both pairs with a comparison symbol in between
template<typename TheType>
void Pair<TheType>::ShowComparison(Pair<TheType>* otherPair)
{
    this->Output();
    std::cout << ' ' << this->CompareWith(otherPair) << ' ';
    otherPair->Output();
    std::cout << '\n';
}


#endif //INC_12_11_PAIRS_PAIR_H
