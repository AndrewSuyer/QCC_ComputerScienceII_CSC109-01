//
// Created by Andrew Suyer on 9/7/23.
// Ch 7.2 + 7.3
//

#ifndef RESTAURANT_RESTAURANT_H
#define RESTAURANT_RESTAURANT_H


#include <string>

class Restaurant
{
public:

    // Mutator (setter) function.
    // Takes in a const reference (&) to a string to avoid copying
    void setName( const std::string& name );

    // Accessor (getter) function.
    // Returns a constant reference to the restaurants name. This means the recipient
    // of the reference can read and not edit the variable
    const std::string& getName() const;


    // Primitive variables are lightweight so they dont need to take in or return references
    double getRating() const;
    void setRating(double rating);


    void print() const;

private:

    // Private member variables only accessible from inside this class:

    std::string m_name;
    double m_rating;

};


#endif //RESTAURANT_RESTAURANT_H
