#include <QDebug>  
#include "product.h"  

Product::Product()  
{  
   qDebug()<<"construct Product";  
}  

void Product::operationA()  
{  
    qDebug()<<"Product OperationA";  
}  

void Product::operationB()  
{  
    qDebug()<<"Product OperationB";  
}  
