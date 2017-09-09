//
//  main.cpp
//  3.74
//
//  Created by RenHaowen on 2017/9/9.
//  Copyright © 2017年 RenHaowen. All rights reserved.
//

#include <iostream>
using namespace std;
const long index_minute_seconds = 60;
const long index_hour_minutes = 60 ;
const long index_day_hours = 24;

int main ()
{
    long second, minutes, hours, days;
    long seconds;
    cout << "Enter the number of seconds : ";
    cin >> seconds;
    second = seconds % index_minute_seconds;
    
    long index;
    index = seconds / index_minute_seconds;
    minutes = index % index_hour_minutes;
    
    index = index / index_hour_minutes;
    hours = index % index_day_hours;
    
    days = index / index_day_hours;
    
    cout << seconds << " seconds = " << days << " days, " << hours << " hours, " << minutes << " minutes, " << second << " seconds\n";
    
    
}
