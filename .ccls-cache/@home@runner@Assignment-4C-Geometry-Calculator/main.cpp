#include <iostream>
using namespace std;

int main()
{
   // Constant for pi
   const double PI = 3.14159; 

   // Constants for menu choices
   const int CIRCLE_CHOICE = 1;
    //finish

   int choice;    // User's shape choice
   double radius; // Radius of a circle
   double area;   // Area of the selected shape
                  // Length of a rectangle
                  // Width of a rectangle
                  // Base of a triangle
                  // Height of a triangle
                 
   

   // Display the menu and get a choice.
   cout << "Geometry Calculator\n\n";
   cout << "1. Calculate the area of a Circle\n";
  //finish
   cin >> choice;

   // Respond to the user's menu selection.
   switch (choice)
   {
      case CIRCLE_CHOICE: 
         cout << "\nEnter the circle's radius: ";
         cin  >> radius;
         if (radius < 0)
            cout << "\nThe radius can not be less than zero.\n";
         else
         {
           //use setprecision to round to 2 decimal
            area = PI * radius * radius;
            cout << "\nThe area is " << area << endl;
         }
         break;
      //finish switches
      default: 
         cout << "The valid choices are 1 through 4. Run the\n"
             << "program again and select one of those.\n";
   }

   return 0;
}