#include "PID.h"

using namespace std;

/*
* TODO: Complete the PID class.
*/

PID::PID() {}

PID::~PID() {}

void PID::Init(double Kp, double Ki, double Kd) {
    
    this->Kp = Kp;
    this->Ki = Ki;
    this->Kd = Kd;
    
    p_error = 0;
    i_error = 0;
    d_error = 0;
    
    stepsCounter = 0;
}

void PID::UpdateError(double cte) {
    ++stepsCounter;
    // differential error, equals to (previous_error - new_error)/time_diff
    // (time_diff is 1)
    d_error = cte - p_error;
    
    // integral error, equals to the sum of all the errors
    i_error += cte;
    
    //"proportional" error. = current error!
    p_error = cte;
    

}

double PID::TotalError() {
}

