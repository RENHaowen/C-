//
//  main.cpp
//  3.76
//
//  Created by RenHaowen on 2017/9/10.
//  Copyright © 2017年 RenHaowen. All rights reserved.
//

#include <iostream>
using namespace std;
const double index_100km_mile = 62.14 ;
const double index_gallon_l = 3.837;

int main()
{
    double oil_europe;
    cout << "Enter the europeen oil consumption(L/100KM ): ";
    cin >> oil_europe;
    double gallon;
    gallon = oil_europe / index_gallon_l;
    double oil_us;
    oil_us = index_100km_mile / gallon;
    cout << "The americain oil consumption(miles/gallons): " << oil_us << endl;
    
}
