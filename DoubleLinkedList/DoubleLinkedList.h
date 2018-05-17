#pragma once
#include "DoubleLinkedList.h"
template <typename Type>
class DoubleLinkedList
{
	DoubleLinkedListElement<Type> *head, *tail;
public:
	DoubleLinkedList()
	{
		head = tail = nullptr;
	}
	void addToTail(const Type & value) 
	{

	}
	void addToHead(const Type & value) 
	{

	}
	void deleteFromHead() 
	{

	}
	void deleteFromTail()
	{

	}
	~DoubleLinkedList() 
	{

	}
};
