#include <iostream>
#include <exception>
#include <string>

using namespace std;

class invalidMonth : public exception {
	
   const char * what () const throw () 
   {
      return "You've entered an invalid month.'";
   }
};
