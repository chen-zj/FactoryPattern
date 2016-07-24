#ifndef ABSTRACTFACTORYB_H  
#define ABSTRACTFACTORYB_H  

#include "abstractfactory.h"  
#include "producta.h"  
#include "productb.h"  

class AbstractFactoryB : public AbstractFactory  
{  
public:  
   AbstractFactoryB();  

public:  
   ProductA *createProductA();  
   ProductB *createProductB();  
};  
#endif // ABSTRACTFACTORYB_H  
