#include <iostream>
 
using namespace std;
 
class Box {
   double width;
   
   public:
      friend void printWidth( Box box );
      void setWidth( double wid );
};


void Box::setWidth( double wid ) {// Member function definition
   width = wid;
}

// Note: printWidth() is not a member function of any class.
void printWidth( Box box ) {
   /* Because printWidth() is a friend of Box, it candirectly access any member of this class */
   cout << "Width of box : " << box.width <<endl;
}
 
// Main function for the program
int main() {
   Box box;   
box.setWidth(10);// set box width without member function
   
  
   printWidth( box ); // Use friend function to print the wdith.
 
   return 0;
}