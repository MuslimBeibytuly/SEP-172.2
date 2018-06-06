#pragma once
#include "Pupil.h"
#include <vector>
#include <algorithm>
class GroupOfPupils
{
public:
	class PupilComparer
	{
	public:
		bool operator () (const Pupil & a, const Pupil & b) const;
	};
	std::vector<Pupil> pupils;
	GroupOfPupils();
	~GroupOfPupils();
	void sortPupilsWithFunctor();
	void sortPupilsWithLambda();
	std::_Vector_const_iterator
		< std::_Vector_val 
		< std::_Simple_types 
		< Pupil
		> 
		> 
		> minPupilWithFunctor() const;
	std::_Vector_const_iterator
		< std::_Vector_val
		< std::_Simple_types
		< Pupil
		>
		>
		> minPupilWithLambda() const;

	std::_Vector_const_iterator
		< std::_Vector_val
		< std::_Simple_types
		< Pupil
		>
		>
		> findPupilWithLambda(const int & height) const;
	size_t countPupilWithLambda(const int & height) const;
	std::vector<Pupil>::iterator 
		partitionByHeightWithLambda(const int & height);
	bool isSorted();
	bool nextPermutation();
};

