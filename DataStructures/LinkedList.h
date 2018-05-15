#pragma once
#include "ElementOfLinkedList.h"
#include <iostream>
template <typename type>
class LinkedList
{
	ElementOfLinkedList<type> * head;
public:
	LinkedList() 
	{
		head = nullptr;
	}
	void addToTail(const type & value)
	{
		if (head == nullptr) 
		{
			head = new ElementOfLinkedList<type>(value);
		}
		else
		{
			ElementOfLinkedList<type> * temp = head;
			while (temp->next != nullptr) 
			{
				temp = temp->next;
			}
			temp->next = new ElementOfLinkedList<type>(value);
		}
	}
	void deleteByValue(const type & value) 
	{
		if (head != nullptr) 
		{
			ElementOfLinkedList<type> * temp = head;
			if (head->value == value) 
			{
				head = head->next;
			}
			else 
			{
				while (temp->next != nullptr)
				{
					if (temp->next->value == value)
					{
						temp->next = temp->next->next;
					}
					temp = temp->next;
				}
			}
		}
	}
	friend std::ostream & operator << (std::ostream & stream, LinkedList<type> & list)
	{
		if (list.head != nullptr)
		{
			ElementOfLinkedList<type> * temp = list.head;
			while (temp != nullptr) 
			{
				stream << temp->value << std::endl;
				temp = temp->next;
			}
		}
		return stream;
	}
	~LinkedList() 
	{
		delete head;
	}
};

