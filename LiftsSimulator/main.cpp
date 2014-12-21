#include <QtGui/QApplication>
#include "LiftsSimulator.h"

int main(int argc, char *argv[])
{
  QApplication a(argc, argv);
  LiftsSimulator w;
  w.show();
  
  return a.exec();
}
