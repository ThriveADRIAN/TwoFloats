//
//  main.c
//  TwoFloats
//
//  Created by Adrian Bruce Cunanan on 4/5/13.
//  Copyright (c) 2013 ThriveStreams. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{

    // Declare first variable of type float
    float firstNumber = 3.14;
    
    // Declare second variable of type float
    float secondNumber = 42.0;
    
    // Declare third variable of type double
    double theSum = firstNumber + secondNumber;
    
    // Print the result to the user
    printf("The result is %f. \n", theSum);

    return 0;
}