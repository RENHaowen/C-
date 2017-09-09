//
//  main.cpp
//  3.73
//
//  Created by RenHaowen on 2017/9/9.
//  Copyright © 2017年 RenHaowen. All rights reserved.
//

#include <iostream>
using namespace std;

float calcule_latitude(float degrees, float minutes, float seconds)
{
    const int index_degree_minutes = 60.0;
    const int index_minute_seconds = 60.0;
    float latitude;
    latitude = seconds / index_minute_seconds / index_degree_minutes + minutes / index_degree_minutes + degrees;
    return latitude;
}

int main ()
{
    cout << "Enter a latitude in degrees, minutes, seconds: \n";
    cout << "First, enter the degrees: ";
    float degrees;
    cin >> degrees;
    cout << "Next, enter the minutes of arc: ";
    float minutes;
    cin >> minutes;
    cout << "Finally, enter the second of arc: ";
    float seconds;
    cin >> seconds;
    float latitude;
    latitude = calcule_latitude(degrees, minutes, seconds);
    cout << degrees << " degrees, " << minutes << " minutes, " << seconds << " seconds = " << latitude << " degrees\n" ;
    
    
}
