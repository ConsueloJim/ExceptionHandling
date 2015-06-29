
#ifndef EXCEPTION_H
#define	EXCEPTION_H

#include <stdexcept>
#include <iostream>
#include <string>

using namespace std;

class Exception_ID_Not_Found : public exception{
    
public:
    virtual const char* what() const throw(){
        return "Product ID not found";
    } 
};
int getProductID(int ids[], string names[], int numProducts, string target)throw(Exception_ID_Not_Found);

#endif	/* EXCEPTION_H */

