//
//  main.cpp
//  3.72
//
//  Created by RenHaowen on 2017/9/9.
//  Copyright © 2017年 RenHaowen. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;

double inches_to_m ( int inches, int feet)
{
    double height_inches;
    height_inches = feet / 12.0 + inches;
    const double index_inches_to_m = 0.0254;
    double height_m;
    height_m = height_inches * index_inches_to_m;
    return height_m;
    
}

double pound_to_kg( double weight_pound)
{
    double weight_kg;
    const double index_kg_to_pound = 2.2;
    weight_kg = weight_pound / index_kg_to_pound ;
    return weight_kg;
    
}

double calcule_BIM(int inches, int feet, double pound )
{
    double bim;
    double height;
    double weight;
    height = inches_to_m(inches, feet);
    weight = pound_to_kg(pound);
    bim = weight / height;
    bim = pow(bim, 2);
    return bim;
    
}


int main()
{
    cout << "Enter the your weight: ___ inches\b\b\b\b\b\b\b";
    int inches;
    cin >> inches;
    cout << " ___ feet\b\b\b\b\b\b\b\b";
    int feet;
    cin >> feet;
    cout << "Enter your weight: ___ pound \b\b\b\b\b\b\b\b\b";
    double pound;
    cin >> pound;
    double bim;
    bim = calcule_BIM(inches, feet, pound);
    cout << "Your BIM is : " << bim << endl;
    
}
