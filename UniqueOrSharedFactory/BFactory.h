#include <memory>
class B;
 
//Factory.h
struct BFactory
{
  std::unique_ptr<B> createUnique() const;
  std::shared_ptr<B> createShared() const;
  
};
