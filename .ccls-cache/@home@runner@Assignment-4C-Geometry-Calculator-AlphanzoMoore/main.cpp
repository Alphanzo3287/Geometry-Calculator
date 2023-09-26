// Alphanzo Moore

//CIS-5 Online

// September 15, 2023

// Lab 4C: Alphanzo Moore - <Geometry Calculator with Switch >

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
   // Constant for pi
   const double PI = 3.14159; 

   // Constants for menu choices
   const int CIRCLE_CHOICE = 1;
   const int RECTANGLE_CHOICE = 2;
   const int TRIANGLE_CHOICE = 3;
   const int QUIT_CHOICE = 4;

   int choice;    // User's shape choice
   double radius; // Radius of a circle
   double length; // Length of a rectangle
   double width;  // Width of a rectangle
   double base;   // Base of a triangle
   double height; // Height of a triangle
   double area;   // Area of the selected shape

   // Display the menu and get a choice.
   cout << "Geometry Calculator\n\n";
   cout << "1. Calculate the area of a Circle\n";
   cout << "2. Calculate the area of a Rectangle\n";
   cout << "3. Calculate the area of a Triangle\n";
   cout << "4. Quit\n";
   cout << "Enter your choice (1-4): ";
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
            // Use setprecision to round to 2 decimal places
            area = PI * radius * radius;
            cout << fixed << setprecision(2);
            cout << "\nThe area is " << area << endl;
         }
         break;

      case RECTANGLE_CHOICE:
         cout << "\nEnter the rectangle's length: ";
         cin >> length;
         cout << "Enter the rectangle's width: ";
         cin >> width;
         if (length < 0 || width < 0)
            cout << "\nLength and width cannot be less than zero.\n";
         else
         {
            area = length * width;
            cout << fixed << setprecision(2);
            cout << "\nThe area is " << area << endl;
         }
         break;

      case TRIANGLE_CHOICE:
         cout << "\nEnter the triangle's base: ";
         cin >> base;
         cout << "Enter the triangle's height: ";
         cin >> height;
         if (base < 0 || height < 0)
            cout << "\nBase and height cannot be less than zero.\n";
         else
         {
            area = 0.5 * base * height;
            cout << fixed << setprecision(2);
            cout << "\nThe area is " << area << endl;
         }
         break;

      case QUIT_CHOICE:
         cout << "Goodbye!\n";
         break;

      default: 
         cout << "Invalid choice. Please select a valid option (1-4).\n";
   }

   return 0;
}

