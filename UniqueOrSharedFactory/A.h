#include <memory>

struct B;

struct A
{
  A(std::shared_ptr<B> b);
  ~A();
  std::shared_ptr<B> b_;
};
