//
//  main.cpp
//  2.75
//
//  Created by RenHaowen on 2017/9/9.
//  Copyright © 2017年 RenHaowen. All rights reserved.
//

#include <iostream>
using namespace std;

float change_toF (float celsius)
{
    float fahrenheit;
    fahrenheit = celsius * 1.8 + 32 ;
    return fahrenheit;
}

int main()
{
    float Celsius;
    cout << "Please enter a Celsius value: ";
    cin >> Celsius;
    float Fahrenheit;
    Fahrenheit = change_toF(Celsius);
    cout << Celsius << " degrees Celsius is " << Fahrenheit << " degrees Fahrenheit \n";
    return 0;
}
