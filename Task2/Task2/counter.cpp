#include "counter.h"

counter::counter() : counter(1){}
counter::counter(int _count) : count(_count){}

int counter::equal() { return this->count; }
int counter::plus() { return this->count++; }
int counter::minus() { return this->count--; }
