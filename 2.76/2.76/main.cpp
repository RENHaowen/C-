//
//  main.cpp
//  2.76
//
//  Created by RenHaowen on 2017/9/9.
//  Copyright © 2017年 RenHaowen. All rights reserved.
//

#include <iostream>
using namespace std;

double light_to_astro ( double light_year)
{
    double astro;
    astro = light_year * 63240;
    return astro;
}

int main()
{
    double light_year;
    double astro_units;
    cout << "Enter the number of light years: ";
    cin >> light_year;
    astro_units = light_to_astro(light_year);
    cout << light_year << " light years = " << astro_units << " astronomical units.\n";
    
}
