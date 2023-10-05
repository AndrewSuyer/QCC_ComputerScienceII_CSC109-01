/*
 * Copyright 2023
 * Created by Andrew Suyer
 * 6.72 2D array pointer arithmetic
 */


#ifndef INC_6_72_2DARRAYPOINTERS_TWODARRAY_H
#define INC_6_72_2DARRAYPOINTERS_TWODARRAY_H

#include <string>

/// Stores the array row_vals in the_array at a specified row
/// @param the_array 2D array to modify
/// @param row_num Row number to be replaced
/// @param col_size Column size
/// @param row_vals The replacement row
void set_row(double *the_array , int row_num, int col_size, double *row_vals);


/// Returns a pointer to specified row of a two dimensional array
/// @param the_array 2D array to access
/// @param row_num Row number to be accessed
/// @param col_size Column size
double* get_row(double *the_array, int row_num, int col_size);


/// Sets the specified element of the_array to val
/// @param the_array 2D array to modify
/// @param row_num Row number of element
/// @param col_size Column size
/// @param col_num Column number of element
/// @param val value to replace element with
void set_element(double *the_array, int row_num, int col_size, int col_num, double val);


/// Returns the specified element
/// @param the_array 2D array to access
/// @param row_num Row number of element
/// @param col_size Column size
/// @param col_num Column number of element
double get_element(double *the_array, int row_num, int col_size, int col_num);


/// Returns sum of the values in the array
/// @param the_array 2D array to access
/// @param row_size Number of rows in the array
/// @param col_size Column size
double sum(double *the_array, int row_size, int col_size);


/// Returns the largest value in the array
/// @param the_array 2D array to access
/// @param row_size Number of rows in the array
/// @param col_size Column size
double find_max(double *the_array, int row_size, int col_size);


/// Returns the smallest value in the array
/// @param the_array 2D array to access
/// @param row_size Number of rows in the array
/// @param col_size Column size
double find_min(double *the_array, int row_size, int col_size);


/// Returns a string representing the matrix.
/// @param the_array 2D array to access
/// @param row_size Number of rows in the array
/// @param col_size Column size
std::string to_string(double *the_array, int row_size, int col_size);

// Hint: use ostringstream to create your string and formatting. See Chapter 9.4
// Set width to 10 and use fixed and setprecision to format the output.


#endif // INC_6_72_2DARRAYPOINTERS_TWODARRAY_H
