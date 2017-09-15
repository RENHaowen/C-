//
//  main.cpp
//  4.1
//
//  Created by RenHaowen on 2017/9/10.
//  Copyright © 2017年 RenHaowen. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout << "What is your first name ? ";
    char first_name[20];
    cin.get(first_name, 20);
    
    cout << "What is your last name ? ";
    char last_name[20];
    cin.get();
    cin.get(last_name, 20);
    
    cout << "What letter grade do you deserve? ";
    char grade;
    cin >> grade;
    grade = grade + 1;

    
    cout << "What is your age ? ";
    int age;
    cin >> age;
    
    cout << "Name: " << last_name << ", " << first_name << endl;
    cout << "Grade: " << grade << endl;
    cout << "Age: " << age << endl;
    
    return 0;
    
    
    
}
