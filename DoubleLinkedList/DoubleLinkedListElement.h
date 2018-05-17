#pragma once
template <typename Type>
class DoubleLinkedListElement
{
	Type value;
public:
	DoubleLinkedListElement<Type> *next, *prev;
	DoubleLinkedListElement(const Type & value) 
	{
		this->value = value;
		next = prev = nullptr;
	}
	~DoubleLinkedListElement() 
	{

	}
};
