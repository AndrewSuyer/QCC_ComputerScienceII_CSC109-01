#include <iostream>

void forLoop(int i);

void whileLoop(bool condition);





int main()
{




    return 0;
}


void forLoop(int i)
{
    if (i == 0)
        return;


    // do stuff

    forLoop(i - 1);
}


void whileLoop(bool condition)
{
    if (!condition)
        return;

    // do stuff that modifies the condition

    whileLoop(condition);
}
