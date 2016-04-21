#include "BFactory.h"
#include "B.h"

//Factory.cpp - OK - defintion of B available
std::unique_ptr<B> BFactory::createUnique() const
{
  return std::unique_ptr<B>(new B);
}

std::shared_ptr<B> BFactory::createShared() const
{
  return std::make_shared<B>();
}
