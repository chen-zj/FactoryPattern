#ifndef ABSTRACTFACTORYA_H  
#define ABSTRACTFACTORYA_H  
      
#include "abstractfactory.h"  
#include "abstractproducta.h"  
#include "abstractproductb.h"  

class AbstractFactoryA : public AbstractFactory  
{  
public:  
    AbstractFactoryA();  
 
public:  
   AbstractProductA *createProductA();  
   AbstractProductB *createProductB();  
};  
 
#endif // ABSTRCTFACTORYA_H  
