#include "BFactory.h"
#include "A.h"

int main()
{
  BFactory f;
  // A a(f.createUnique());// --fails - requires definition of B... even for move...
  A a(f.createShared());// --compiles fine
  return 0;
}
