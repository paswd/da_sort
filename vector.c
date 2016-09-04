#include <iostream>
#include <stdlib.h>

Vector::Vector()
{
	this.arr = NULL;
	this.size = 0;
}
Vector::~Vector()
{
	free(this.arr);
}
bool Vector::resize(size_t new_size)
{
	this.size = new_size;
	this.arr = (int *) realloc(this.size * sizeof(int));
}
