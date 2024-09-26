/*****************************************************************************
*
*  Names:           Aniah Myles and Prof. Terry Griffin
*  Email:           aamyles1222@my.msutexas.edu
*  Label:           06-P01
*  Title:           Fraction Class
*  Course:          CMPS 2143
*  Semester:        Fall 2024
*
*  Description:
*       This program will perform mathematical operations on fractions. It will receive two fractions separated
*  by a mathematical operator, then perform the operations, and provide the simplified fraction.
*
*  Files:
*       Fraction.cpp   : driver program
*       input.txt      : input file
*****************************************************************************/

#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
#include "Fraction.h"

using namespace std;

// Opening the input file
void openFiles(ifstream& infile)
{
    char inFileName[40];

    cout << "Enter the input file name: ";
    cin >> inFileName;
    infile.open(inFileName); // open the input file

    if (!infile)
    {
        cout << "Error opening file!" << endl;
        exit(-1);
    }
}

int main(int argc, char const* argv[]) {
    // TODO: Design an input file that matches the format x/y operator i/j
    // Example: 1/2 + 3/4 should output 5/4 or 1 and 1/4, depending on how you format the output.


    // access and open the infile streams
      ifstream infile;
      openFiles(infile);
     
    // Example usage (students should implement actual logic)
      Fraction frac1, frac2;
      char oper;

      while (infile >> frac1 >> oper >> frac2)
      {
          cout << frac1 << oper << frac2;
          Fraction result;

          if (oper == '+')
          {
              result = frac1 + frac2;  // This should call the overloaded + operator
              cout << result << endl;
          }
          else if (oper == '-')
          {
              result = frac1 - frac2;
              cout << result << endl;
          }
          else if (oper == '*')
          {
              result = frac1 * frac2;
              cout << result << endl;
          }
          else if (oper == '/')
          {
              result = frac1 / frac2;
              cout << result << endl;
          }
          else
              cout << "Operator does not exist." << endl;
      }

    

   infile.close();
    return 0;
}