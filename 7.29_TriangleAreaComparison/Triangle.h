/*
 * Copyright 2023
 * Created by Andrew Suyer
 * 7.29 Triangle area comparison
 */

#ifndef INC_7_29_TRIANGLEAREACOMPARISON_TRIANGLE_H
#define INC_7_29_TRIANGLEAREACOMPARISON_TRIANGLE_H

class Triangle
{
private:

    /// Base length
    double base;

    /// Height length
    double height;

public:

    /// Sets the base length for this triangle
    /// @param userBase the base length
    void SetBase(double userBase);

    /// Sets the height length for this triangle
    /// @param userHeight the height length
    void SetHeight(double userHeight);

    /// @returns The area of this triangle
    double GetArea() const;

    /// Prints information about this triangle. This includes the base length,
    /// height length, and the area
    void PrintInfo() const;
};

#endif //INC_7_29_TRIANGLEAREACOMPARISON_TRIANGLE_H
