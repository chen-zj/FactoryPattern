#include <QDebug>  
#include "producta.h"  
  
ProductA::ProductA()  
{  
    qDebug()<<"construct ProductA";  
}  
  
void ProductA::operationA()  
{  
    qDebug()<<"ProductA operation";  
} 
