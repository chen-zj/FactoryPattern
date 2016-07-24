    #include <QDebug>  
    #include "abstractoryfactory.h"  
      
    AbstractFactory::AbstractFactory()  
    {  
        qDebug()<<"construct AbstractFactory";  
    }  
      
    Product *AbstractFactory::createProductA()  
    {  
        return new Product;  
    }  
      
    Product *AbstractFactory::createProductB()  
    {  
        return new Product;  
    }  
