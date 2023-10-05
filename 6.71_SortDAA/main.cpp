#include <iostream>

/**
 * Write a Swap function that swap first and second value
 * @param xp a pointer to the first value
 * @param yp a pointer to the second value
 * No return value
 */
 void Swap(int* xp, int* yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

/**
* Write BubbleSort function: sort the DAA in place
* @param x is a dynamic allocated array (DAA)
* @param n DAA size
* No return
* Note: Look up a bubble sort algorithm that use swap function
* Note: use the swap function to swap values as described in the bubble sort algorithm.
*
*/
void BubbleSort(int* x, int n)
{
    int i, j;
    bool swapped;
    for (i = 0; i < n; i++) {
        swapped = false;
        for (j = 0; j < n - i - 1; j++) {
            if (x[j] > x[j + 1]) {
                Swap(&x[j], &x[j + 1]);
                swapped = true;
            }
        }

        // If no two elements were swapped
        // by inner loop, then break
        if (!swapped)
            break;
    }
}

/**
 * Write a GetUserValues function to ask user to enter number of inputs and return a new DAA
 * @param numValues number of inputs
 * @return a dynamic allocated array
 * Note: the parameter is the number of inputs that the user will enter
 */
int* GetUserValues(int numValues)
{
    int* arr = new int[numValues];

    for (int i = 0; i < numValues; ++i)
    {
        std::cin >> arr[i];
    }

    return arr;
}

/**
* MergeSorted function: merge two sorted DAA and return a new sort DAA
* @param a first DAA
* @param n first DAA size
* @param b second DAA
* @param m second DAA size
* @return a merged sorted DAA
*/
int* MergeSorted(const int* a, int n, const int*b, int m)
{
    int size = n + m;
    int* arr = new int[size];

    for (int i = 0; i < n; ++i)
    {
        arr[i] = a[i];
    }

    for (int i = 0; i < m; ++i)
    {
        arr[i + n] = b[i];
    }

    BubbleSort(arr, size);
    return arr;
}

/**
 * PrintArray function: to print a DAA
 * @param arr DAA to be printed
 * @param size size of DAA
 * No return
 */
void PrintArray(int* arr, int size)
{
    for (int i = 0; i < size; ++i)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

using namespace std;

int main()
{
    // Vectors and variable
    int n, m;
    //
    cout << "Enter the first list of inputs begins with an integer indicating the number of integers that follow: " << endl;
    cin >> n;

    //TODO: Call GetUserValues to fill up the first DAA using n as the size for the array
    int* a1 = GetUserValues(n);

    cout << "Print array1: " << endl;
    PrintArray(a1, n);

    cout << "Enter the second list of inputs begins with an integer indicating the number of integers that follow: " << endl;
    cin >> m;

    //TODO: Call GetUserValues to fill up the second DAA using m as the size for the array
    int* a2 = GetUserValues(m);

    cout << "Print array2: " << endl;
    PrintArray(a2, m);

    // TODO: call bubble sort function to sort the two DAA individually.
    BubbleSort(a1, n);
    BubbleSort(a2, m);

    // TODO: merge two sorted array
    // Note: merge sort function returns a merge DAA array
    int* c = MergeSorted(a1, n, a2, m);
    int k = n + m;


    // Print results
    cout << "Result of merge sort of a1 and a2 is " << endl;
    PrintArray(a1, n);  // print the first DAA
    PrintArray(a2, m);  // print the second DAA
    PrintArray(c, k);   // print the merged DAA
    cout << endl;

    return 0;
}
