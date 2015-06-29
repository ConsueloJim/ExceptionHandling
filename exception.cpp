
#include <cstdlib>
#include "exception.h"

using namespace std;

int getProductID(int ids[], string names[], int numProducts, string target)
{
    try { 
    
    Exception_ID_Not_Found not_found; 
    
    for(int i=0; i < numProducts; i++){
        if(names[i] == target) {
            return ids[i]; 
        }
    }
    throw not_found;
    }   
    catch(exception & e){
         cerr << e.what() << "\n\n";
    return -1;
    }
}

