//
// Created by Andrew Suyer on 9/7/23.
// Ch 7.2 + 7.3
//

#include "Restaurant.h"

#include <iostream>

const std::string& Restaurant::getName() const
{
    return m_name;
}


void Restaurant::setName( const std::string& name )
{
    m_name = name;
}


double Restaurant::getRating() const
{
    return m_rating;
}


void Restaurant::setRating( double rating )
{
    m_rating = rating;
}

void Restaurant::print() const
{
    std::cout << m_name << ": " << m_rating << std::endl;
}
