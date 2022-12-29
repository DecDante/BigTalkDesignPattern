#include "Component.h"
#include "Composite.h"
#include "Leaf.h"

int main()
{
  Composite root("root");
  Leaf leafA("Leaf A");
  Leaf leafB("Leaf B");
  root.Add(&leafA);
  root.Add(&leafB);

  Composite compositeX("Composite X");
  Leaf leafXA("Leaf XA");
  Leaf leafXB("Leaf XB");
  compositeX.Add(&leafXA);
  compositeX.Add(&leafXB);

  root.Add(&compositeX);

  Composite compositeXY("Composite XY");
  Leaf leafXYA("Leaf XYA");
  Leaf leafXYB("Leaf XYB");
  compositeXY.Add(&leafXYA);
  compositeXY.Add(&leafXYB);

  compositeX.Add(&compositeXY);

  Leaf leafC("Leaf C");
  root.Add(&leafC);

  Leaf leafD("Leaf D");
  root.Add(&leafD);
  root.Remove(&leafD);

  root.Display(1);

  return 0;
}