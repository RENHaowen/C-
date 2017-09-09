//
//  main.cpp
//  2.77
//
//  Created by RenHaowen on 2017/9/9.
//  Copyright © 2017年 RenHaowen. All rights reserved.
//

#include <iostream>
using namespace std;

void show_time(int hours, int minutes)
{
    cout << "Time: " << hours << ":" << minutes <<  endl;
    
}

int main()
{
    int hours;
    int minutes;
    cout << "Enter the number of hours: ";
    cin >> hours;
    cout << "Enter the number of minutes: ";
    cin >> minutes;
    show_time(hours, minutes);
    return 0;
    
}
