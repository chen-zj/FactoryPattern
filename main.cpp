#include "abstractfactory.h"  
#include "abstractfactorya.h"  
#include "abstractfactoryb.h"  
#include "product.h"  
  
int main(int argc, char **argv)  
{  
    AbstractFactory *factory = new AbstractFactoryA;  
    Product *product = factory->createProductA();  
    product->operationA();  
    product = factory->createProductB();  
    product->operationB();  
  
    return 0;  
} 
