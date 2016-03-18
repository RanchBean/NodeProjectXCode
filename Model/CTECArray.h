/*
 * CTECArray.h
 *
 *  Created on: Mar 2, 2016
 *      Author: ethr5627
 */

#ifndef MODEL_CTECARRAY_H_
#define MODEL_CTECARRAY_H_
#include "ArrayNode.h"

template <class Type>
class CTECArray
{
private:
	int size;
	ArrayNode<Type> * head;
public:
	CTECArray(int size);
	virtual ~CTECArray();
	int getSize();
	Type get(int position);
	void set(const Type& value, int position);
    int indexOf(Type searchValue);
    int nextIndexOf(int startingIndex, Type searchValue);

};

#endif /* MODEL_CTECARRAY_H_ */
