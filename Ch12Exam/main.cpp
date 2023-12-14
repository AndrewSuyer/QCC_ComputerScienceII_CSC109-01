/*
 * Access code: 439630
 */

#include <iostream>
#include <string>
#include <cassert>
#include <stdexcept>
#include "MileageTracker.h"
#include "Uber.h"
#include "UberEats.h"
using namespace std;

int main()
{
    // Test cases for MileageTracker
    std::string employee_id_str = "EMP123";
    std::string employee_name_str = "John Doe";
    int employee_id_int = 456;
    double employee_id_double = 789.0;

    MileageTracker<std::string> mileage_tracker_str(employee_id_str, employee_name_str);
    mileage_tracker_str.addMiles(100);
    assert(mileage_tracker_str.getEmployeeId() == employee_id_str);
    assert(mileage_tracker_str.getEmployeeName() == employee_name_str);
    assert(mileage_tracker_str.getTotalMiles() == 100);

    MileageTracker<int> mileage_tracker_int(employee_id_int, employee_name_str);
    mileage_tracker_int.addMiles(150);
    assert(mileage_tracker_int.getEmployeeId() == employee_id_int);
    assert(mileage_tracker_int.getEmployeeName() == employee_name_str);
    assert(mileage_tracker_int.getTotalMiles() == 150);

    MileageTracker<double> mileage_tracker_double(employee_id_double, employee_name_str);
    mileage_tracker_double.addMiles(75.5);
    assert(mileage_tracker_double.getEmployeeId() == employee_id_double);
    assert(mileage_tracker_double.getEmployeeName() == employee_name_str);
    assert(mileage_tracker_double.getTotalMiles() == 75.5);

    // Test cases for Uber
    std::string vehicle_type_str = "Sedan";
    int vehicle_type_int = 2;
    double vehicle_type_double = 4.5;

    Uber<std::string, std::string> uber_driver_str_str(employee_id_str, employee_name_str, vehicle_type_str);
    uber_driver_str_str.addMiles(200);
    assert(uber_driver_str_str.getEmployeeId() == employee_id_str);
    assert(uber_driver_str_str.getEmployeeName() == employee_name_str);
    assert(uber_driver_str_str.getVehicleType() == vehicle_type_str);
    assert(uber_driver_str_str.getTotalMiles() == 200);

    Uber<int, int> uber_driver_int_int(employee_id_int, employee_name_str, vehicle_type_int);
    uber_driver_int_int.addMiles(300);
    assert(uber_driver_int_int.getEmployeeId() == employee_id_int);
    assert(uber_driver_int_int.getEmployeeName() == employee_name_str);
    assert(uber_driver_int_int.getVehicleType() == vehicle_type_int);
    assert(uber_driver_int_int.getTotalMiles() == 300);

    //    UberEats<std::string, std::string, std::string> uber_eats_driver(employee_id, employee_name, vehicle_type, food_type);
//    uber_eats_driver.addMiles(50);
    Uber<double, double> uber_driver_double_double(employee_id_double, employee_name_str, vehicle_type_double);
    uber_driver_double_double.addMiles(150.5);
    assert(uber_driver_double_double.getEmployeeId() == employee_id_double);
    assert(uber_driver_double_double.getEmployeeName() == employee_name_str);
    assert(uber_driver_double_double.getVehicleType() == vehicle_type_double);
    assert(uber_driver_double_double.getTotalMiles() == 150.5);

    // Test cases for UberEats
    std::string food_type_str = "Pizza";
    char food_type_char = 'B';

    UberEats<std::string, std::string, std::string> uber_eats_driver_str(employee_id_str, employee_name_str, vehicle_type_str, food_type_str);

    uber_eats_driver_str.addMiles(50);
    assert(uber_eats_driver_str.getEmployeeId() == employee_id_str);
    assert(uber_eats_driver_str.getEmployeeName() == employee_name_str);
    assert(uber_eats_driver_str.getFoodType() == food_type_str);
    assert(uber_eats_driver_str.getTotalMiles() == 50);

    //    UberEats<std::string, std::string, std::string> uber_eats_driver(employee_id, employee_name, vehicle_type, food_type);
    // template <typename EmployeeIdType, typename VehicleType, typename FoodType>
    UberEats<int, int, char> uber_eats_driver_char(employee_id_int, employee_name_str, vehicle_type_int, food_type_char);
    uber_eats_driver_char.addMiles(75);
    assert(uber_eats_driver_char.getEmployeeId() == employee_id_int);
    assert(uber_eats_driver_char.getEmployeeName() == employee_name_str);
    assert(uber_eats_driver_char.getFoodType() == food_type_char);
    assert(uber_eats_driver_char.getTotalMiles() == 75);

    std::cout << "All test cases passed." << std::endl;

    try {
        uber_eats_driver_char.addMiles(-75);
    } catch (runtime_error& e) {
        string msg = e.what();
        assert(msg == "Mileage can't be negative.");
    }
    return 0;
}