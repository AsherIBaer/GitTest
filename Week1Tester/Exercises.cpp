#include <iostream>
#include <string>
#include "Header.h"

using namespace std;

//Declarations of Variables
template<typename T>
T Sum(T v1, T v2, T v3);

template<typename T>
T Average(T v1, T v2, T v3);

template<typename T>
T Cube(T nom);



/*
Question: I want to be able to use a "template" so that I can declare the variables inside void challenge world as I please
*/


//Want this to run for the first challenge, instead of something in main.
void ChallengeW2D1_1()
{
    float v1;
    float v2;
    float v3;


    cout << "Let's Sum!" << endl;
    cout << "Give three numbers" << endl; 
    cin >> v1 >> v2 >> v3;
  

    cout << "The sum is " << Sum(v1, v2, v3) << endl;
    cout << "The Average is " << Average(v1, v2, v3) << endl;

}

//Code for challenge day 2
//Declare functions
template<typename T>
T Cube(T nom);

//Function used for input (call in Main)
template<typename T>
void ChallengeW2D1_2(){

    T v1;
  

    cout << "Give number to hungry triangle " << endl;
    cin >> v1;

   cout << Cube(v1) << " was the cube!" << endl;

}


//Define functions

template<typename T>
T Sum(T v1, T v2, T v3) {
    return v1 + v2 + v3;
}

template<typename T>
T Average(T v1, T v2, T v3) {
    return Sum(v1, v2, v3) / (T)3;
}

template<typename T>
T Cube(T nom) {
    return nom * nom * nom;

}