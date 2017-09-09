//
//  main.cpp
//  3.71
//
//  Created by RenHaowen on 2017/9/9.
//  Copyright © 2017年 RenHaowen. All rights reserved.
//

#include <iostream>
using namespace std;


double cm_to_inches(int cm)
{
    float inches;
    const double index = 0.39;
    inches = cm * index;
    return inches;
    
}

int main()
{
    int height_cm;
    cout << "Enter your height(cm) : ___\b\b\b";
    cin >> height_cm;
    float height_inches;
    height_inches = cm_to_inches(height_cm);
    cout << "You are " << height_inches << " inches.\n";
    
}
