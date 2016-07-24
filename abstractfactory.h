#ifndef ABSTRACTFACTORY_H  
#define ABSTRACTFACTORY_H  

#include "product.h"  

class AbstractFactory  
{  
public:  
    AbstractFactory();  
     
public:  
    virtual Product *createProductA();  
    virtual Product *createProductB();  
};  
#endif // ABSTRACTFACTORY_H
