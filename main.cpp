//
//  main.cpp
//  QuadraticFormula
//
//  Created by Ahmad Chaudhry on 2018-05-20.
//  Copyright © 2018 Ahmad Chaudhry. All rights reserved.
//
/*
 This program will be a quadratic equation solver. It will ask the user for three inputs which will act as coefficients in a quadratic equation (ax^2 + bx +c). The user will be asked to choose the a, b, and c values. The program will then use these values to determind the x-intercepts of the equation.
 */

#include <iostream>
#include <math.h>
//create a function to evaluate the root of the function with a larger magnitude number
double bracketsPlus(int a,int b,int c) {
    int discriminant;
    discriminant = b*b - 4*a*c;
    double bracket;
    bracket = sqrt(discriminant);
    double plus;
    plus = (-1*b + bracket) /2*a;
    return plus;
}
//Create a function to evalute the root of the function with a smaller magnitude number
double bracketsMinus(int a, int b, int c){
    int discriminant;
    discriminant = b*b - 4*a*c;
    double bracket;
    bracket = sqrt(discriminant);
    double minus;
    minus = (-1*b - bracket) /2*a;
    return minus;
}

int main(int argc, const char * argv[]) {
    //create three variables a, b, and c to rep. the coefficients in the equation
    int a;
    int b;
    int c;
    //Introduce the purpose of the program as a quadratic solver to the user
    std::cout<<"This program is going to request that you choose three numbers."<<std::endl;
    std::cout<<"These three numbers will act as the coefficiencts in a quadratic equation."<<std::endl;
    std::cout<<"The program will then use your values to determine the x-intercepts of the function."<<std::endl;
    //Ask the user to choose variables to act as coefficients in the equation
    std::cout<<"Please choose a number as the coefficient for the first term."<<std::endl;
    std::cin>> a;
    std::cout<<"Please choose a number as the coefficient for the second term."<<std::endl;
    std::cin>>b;
    std::cout<<"Please choose a number as the coefficient for the third term."<<std::endl;
    std::cin>>c;
    
    //Repeat the equation back to the user including the coefficients
    std::cout<<"Your quadratic equation is f(x) = " << a <<"x^2 + " << b << "x + " << c <<std::endl;
    
    //print the first x-intercept of the function
    std::cout << "The first x-intercept of your function is " << bracketsPlus(a,b,c) << std::endl;
    
    //print the second x-intercept of the function
    std::cout << "The second x-intercept of your function is " << bracketsMinus(a,b,c) << std::endl;

    return 0;
}
