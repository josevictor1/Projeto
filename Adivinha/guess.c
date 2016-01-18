#include <stdlib.h>
#include <stdio.h>
#include <iostream>
using namespace std;

int main ()

{

   int min = 1, max = 100, answer = 0;



   while (answer != 2)
   {

     cout << "Is your number less than " << (min + max)/2 << "?\n";

     cout << "0 for no, 1 for yes, 2 to quit.";

     cin >> answer;



     if (answer == 0)

     {

        min = (max + min)/2;

     }

     else

     {

        if (answer == 1)

        {

          max = (min + max)/2;

        }

        else

        {

           cout << "I win! I deduced your number.";

           break;

        }

     }
     if (max == min)
        cout << "I win! I deduced your number.";
   }

}
