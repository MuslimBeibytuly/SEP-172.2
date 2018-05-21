#pragma once
#include <ostream>
template <typename Type>
class DoubleLinkedList
{
	template <typename Type>
	class DoubleLinkedListElement
	{
	public:
		Type value;
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
	DoubleLinkedListElement<Type> *head, *tail;
public:
	DoubleLinkedList()
	{
		head = tail = nullptr;
	}
	void addToTail(const Type & value)
	{
		if (tail == nullptr)
		{
			head = tail = new DoubleLinkedListElement<Type>(value);
			tail->prev = head;
			head->next = tail;
		}
		else
		{
			DoubleLinkedListElement<Type> * temp =
				tail;
			tail->next = new DoubleLinkedListElement<Type>(value);
			tail = tail->next;
			tail->prev = temp;
		}
	}
	void addToHead(const Type & value)
	{
		if (head == nullptr)
		{
			tail = head = new DoubleLinkedListElement<Type>(value);
			tail->prev = head;
			head->next = tail;
		}
		else
		{
			DoubleLinkedListElement<Type> * temp = head;
			head->prev = new DoubleLinkedListElement<Type>(value);
			head = head->prev;
			head->next = temp;
		}
	}
	void deleteFromHead()
	{
		head = head->next;
		delete head->prev;
		tail->prev = nullptr;
	}
	void deleteFromTail()
	{
		tail = tail->prev;
		delete tail->next;
		tail->next = nullptr;
	}
	friend std::ostream & operator <<(
		std::ostream & os,
		const DoubleLinkedList<Type> & l
		)
	{
		for (
			DoubleLinkedListElement<Type> * temp = l.head;
			temp != nullptr;
			temp = temp->next
			)
		{
			os << temp->value << std::endl;
		}
		return os;
	}
	~DoubleLinkedList()
	{
	}
};
