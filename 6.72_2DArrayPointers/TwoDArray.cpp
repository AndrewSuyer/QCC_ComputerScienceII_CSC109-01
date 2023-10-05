/*
 * Copyright 2023
 * Created by Andrew Suyer
 * 6.72 2D array pointer arithmetic
 */

#include "TwoDArray.h"

#include <iostream>
#include <sstream>      // don't remove this line; use for ostringstream
#include <iomanip>      // use std::setw to set the width for each number


void set_row(double *the_array , int row_num, int col_size, double *row_vals)
{
    // Pointer to the row of interest:
    double* the_row = the_array + row_num * col_size;

    // Set each element of the_row to that in row_vals
    for (int i = 0; i < col_size; ++i)
    {
        *(the_row + i) = *(row_vals + i);
    }
}


double* get_row(double *the_array, int row_num, int col_size)
{
    return the_array + (row_num * col_size);
}


void set_element(double *the_array, int row_num, int col_size, int col_num, double val)
{
    // the_array[row_num][col_num] = val
    *(the_array + (row_num * col_size) + col_num) = val;
}


double get_element(double *the_array, int row_num, int col_size, int col_num)
{
    // the_array[row_num][col_num]
    return *(the_array + (row_num * col_size) + col_num);
}


double sum(double *the_array, int row_size, int col_size)
{
    double sum = 0;
    for (int r = 0; r < row_size; ++r)
    {
        for (int c = 0; c < col_size; ++c)
        {
            sum += *(the_array + (r * col_size) + c);
        }
    }
    return sum;
}


double find_max(double *the_array, int row_size, int col_size)
{
    double max = *the_array;
    for (int r = 0; r < row_size; ++r)
    {
        for (int c = 0; c < col_size; ++c)
        {
            if (*(the_array + (r * col_size) + c) > max)
            {
                max = *(the_array + (r * col_size) + c);
            }
        }
    }
    return max;
}


double find_min(double *the_array, int row_size, int col_size)
{
    double min = *the_array;
    for (int r = 0; r < row_size; ++r)
    {
        for (int c = 0; c < col_size; ++c)
        {
            if (*(the_array + (r * col_size) + c) < min)
            {
                min = *(the_array + (r * col_size) + c);
            }
        }
    }
    return min;
}


std::string to_string(double *the_array, int row_size, int col_size)
{
    // Output string
    std::string arrString;

    for (int r = 0; r < row_size; ++r)
    {
        for (int c = 0; c < col_size; ++c)
        {
            // String buffer for current element
            std::ostringstream oss;

            oss << std::fixed << std::setw(10);         // Set width of buffer to 10
            oss << std::fixed << std::setprecision(2);  // Set decimal precision to 2
            oss << *(the_array + (r * col_size) + c);      // Add array element to buffer

            arrString += oss.str();     // add element buffer to the output string
        }
        arrString += "\n";
    }
    return arrString;
}
