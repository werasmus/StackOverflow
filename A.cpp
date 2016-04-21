#include "A.h"
#include "B.h"

A::A(std::shared_ptr<B> b):b_(b){}
A::~A(){}
