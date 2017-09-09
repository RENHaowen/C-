//
//  main.cpp
//  3.75
//
//  Created by RenHaowen on 2017/9/9.
//  Copyright © 2017年 RenHaowen. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    long long popolation_world, population_us;
    float percentage;
    cout << "Enter the world\'s population: ";
    cin >> popolation_world;
    cout << "Enter the population of the US: ";
    cin >> population_us;
    percentage = population_us * 100.0/ popolation_world;
    cout << "The population of the US is " << percentage << " % of the world population.\n";
    return 0;
    
}
//6898758899
//310783781
