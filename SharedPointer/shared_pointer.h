#pragma once
template <class T>
class shared_pointer
{
	T *data;
public:
	shared_pointer(T *);
	~shared_pointer();
};

template<class T>
inline shared_pointer<T>::shared_pointer(T * data)
{
	this->data = data;
}

template<class T>
inline shared_pointer<T>::~shared_pointer()
{
	delete data;
}
