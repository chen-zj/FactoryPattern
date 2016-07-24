#include <QDebug>  
#include "abstractfactoryb.h"  

AbstractFactoryB::AbstractFactoryB()  
{  
   qDebug()<<"construct AbstractFactoryB";  
}  

ProductA *AbstractFactoryB::createProductA()  
{  
   return new ProductA;  
}  

ProductB *AbstractFactoryB::createProductB()  
{  
    return new ProductB;  
}  
