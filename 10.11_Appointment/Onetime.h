/*
 * Copyright 2023
 * Created by Andrew Suyer
 * 10.11 Appointment
 */



#ifndef ONETIME_H
#define ONETIME_H
#include "Appointment.h"
#include "Date.h"

class Onetime : public Appointment
{
public:

    /**
      Constructs a Onetime appointment
   */
    Onetime();

    /** Constructs a Onetime appointment.
       @param desc the description of a daily appointment
       @param d the date of the appointment
       @param s the start time of the appointment
       @param e the end time of the appointment
     *
     */
    Onetime(const std::string& desc, Date d, Time s, Time e);


    /**
     read in the appointment in the following format
     * Enter start_hours start_mins end_hours end_mins descript:
     * 5 0 6 0 dentist
     * Enter date:
     * 2018 5 10
     */
    void read();

    /**
     * save the monthly appointment with a header
     * appointment type
     * date
     * start_hours start_mins end_hours end_mins descript; for example:
     *
     * Onetime
     * 2018 5 10
     * 5 0 6 0 dentist
     */
    void save(std::ostream& out) const override;

    /**
     * load the monthly appointment with a header
     * appointment type
     * date
     * start_hours start_mins end_hours end_mins descript; for example:
     */
    void load(std::istream& in) override;


    /**
    Determines if the appointment occurs on the given date.
    @param year a year value
    @param month a month value of 1 for Jan, to 12 for Dec
    @param day a day value
    @return true if the appointment occurs on the given date
    */
    bool occurs_on(int year, int month, int day) const override;

private:

    Date when;  // date of onetime appointment
};



#endif /* ONETIME_H */

