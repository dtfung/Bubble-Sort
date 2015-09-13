//
//  main.c
//  problem22
//
//  Created by Donald Fung on 5/20/15.
//  Copyright (c) 2015 Donald Fung. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int myArray[6] = {2,1,5,3,4};
    char temp;
    
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5 - 1; j++) {
            
            if (myArray[j] > myArray[j + 1]) {
                 temp = myArray[j];
                myArray[j] = myArray[j + 1];
                myArray[j + 1] = temp;
            }
        }
   }
    for (int i = 0; i < 5; i ++) {
          printf("%i", myArray[i]);
    }
  
    return 0;
}
