#ifndef DOUBLESUBSCRIPTEDARRAY_H

#define DOUBLESUBSCRIPTEDARRAY_H
#include "DoubleSubscriptedArray.h"
#include <iostream>



using namespace std;

class DoubleSubscriptedArray

{
    friend ostream &operator<<(ostream&, const DoubleSubscriptedArray&);

	friend istream &operator>>(istream&, DoubleSubscriptedArray&);


public:

	explicit DoubleSubscriptedArray(int = 10, int = 10);



	const DoubleSubscriptedArray& operator=(const DoubleSubscriptedArray&);

	int operator()(int, int) const;

	bool operator==(const DoubleSubscriptedArray&) const;

	bool operator!=(const DoubleSubscriptedArray& right) const;


private:

	size_t rows;

	size_t columns;

	int* ptr;

};
#endif
