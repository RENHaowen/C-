//
//  main.cpp
//  4.10
//
//  Created by RenHaowen on 2017/9/10.
//  Copyright © 2017年 RenHaowen. All rights reserved.
//

#include <iostream>
# include "string"
using namespace std;

int main()
{
    double grade[3];
    cout << "Enter 3 grades of the 50m." << endl;
    int times=0;
    double grade_average=0;

    for (int i=0; i < 3; i++) {
        times = i + 1;
        cout << times << " : " ;
        cin >> grade[i];
        grade_average += grade[i];
    }
    grade_average = grade_average / 3.0;
    cout << "You have " << times << " grades" << endl;
    cout << "The average of the "<< times << " grades is: " << grade_average << endl;
    
}
