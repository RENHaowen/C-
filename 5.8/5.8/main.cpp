//
//  main.cpp
//  5.8
//
//  Created by RenHaowen on 2017/9/11.
//  Copyright © 2017年 RenHaowen. All rights reserved.
//

#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char read_chars[100];
    const char Done[] = "done";
    
    int num_word=0;
    cout << "Enter words ( to stop, type the word done):\n";
    cin >> read_chars;
    
    while ( strcmp(read_chars, Done) != 0 )
    {
        
        num_word++;
        cin >> read_chars;
    }
    
    
    cout << "You rntered a total of " << num_word <<" words.\n";
    return 0;
    
}
