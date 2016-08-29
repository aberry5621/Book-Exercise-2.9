//
//  main.cpp
//  Book Exercise 2.7
//
//  Created by ax on 8/28/16.
//  Copyright © 2016 COMP130. All rights reserved.
//
//  Physics: calculate acceleration of object
//

#include <iostream>
using namespace std;

int main() {

    // insert code here...
    cout << "Calculate Acceleration\n";
    
    // Data
    double v0 = 0.0;
    double v1 = 0.0;
    double t = 0.0;
    double calc_acceleration = 0.0;
    
    // I
    cout << "Enter v0, v1, and t: ";
    cin >> v0 >> v1 >> t;
    
    // P
    calc_acceleration = (v1 - v0) / t;
    
    // O
    cout << "The average acceleration is " << calc_acceleration << endl;
    
    return 0;
}
