#include <QDebug>  
#include "abstractfactorya.h"  
 
AbstractFactoryA::AbstractFactoryA()  
{  
    qDebug()<<"construct AbstractFactoryA";  
}  
 
ProductA *AbstractFactoryA::createProductA()  
{  
    return new ProductA;  
}  
 
ProductB *AbstractFactoryA::createProductB()  
{  
    return new ProductB;  
}  
