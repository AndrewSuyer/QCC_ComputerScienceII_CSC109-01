/*
 * Copyright 2023
 * Created by Andrew Suyer
 * 10.11 Appointment
 */

#ifndef MONTHLY_H
#define MONTHLY_H

#include <iostream>
#include "Appointment.h"
#include "Time.h"

class Monthly : public Appointment
{
public:

   /**
      Constructs a monthly appointment 
   */
   Monthly();

   /** Constructs a month appointment.
      @param desc the description of a daily appointment
      @param d the day of the appointment
      @param s the start time of the appointment
      @param e the end time of the appointment
    * 
    */
   Monthly(const std::string& desc, int d, Time s, Time e);


   /**
    read in the appointment in the following format
    * Enter start_hours start_mins end_hours end_mins descript:
    * 5 0 6 0 dentist  
    * Enter day:
    * 5
    */
   void read();

    /**
    * save the monthly appointment with a header
    * appointment type
    * day
    * start_hours start_mins end_hours end_mins descript; for example:
    * 
    * Monthly
    * 5
    * 5 0 6 0 dentist    
    */   
   void save(std::ostream& out) const override;

    /**
    * load the monthly appointment with a header
    * appointment type
    * day
    * start_hours start_mins end_hours end_mins descript; for example:
    */   
   void load(std::istream& in) override;


   /**
   Determines if the appointment occurs on the given day.
   @param year a year value
   @param month a month value of 1 for Jan, to 12 for Dec
   @param day a day value
   @return true if the appointment occurs on the given day
   */
   bool occurs_on(int year, int month, int day) const override;

private:

   int day;  // day of the appointment
};


#endif /* MONTHLY_H */

