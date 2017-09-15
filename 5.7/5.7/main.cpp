//
//  main.cpp
//  5.7
//
//  Created by RenHaowen on 2017/9/11.
//  Copyright © 2017年 RenHaowen. All rights reserved.
//

#include <iostream>
using namespace std;

struct car
{
    string producer;
    int date_produce;
    
};

int main()
{
    int car_number;
    cout << "How many cars do you wish to catalog? ";
    cin >> car_number;
    car *car_detail = new car [car_number];
    
    for (int i=0; i<car_number; i++) {
        cout << "Car #" << i+1 << ":\n";
        cout << "Please enter the make: ";
        cin.get();
        getline(cin, car_detail[i].producer);
        cout << "Please enter the year made: ";
        cin >> car_detail[i].date_produce;
        
    }
    cout << "Here is your collection:\n";
    for (int i=0; i<car_number; i++) {
        cout << car_detail[i].date_produce << "  " << car_detail[i].producer << endl;
        
    }
    
    return 0;
    
}
