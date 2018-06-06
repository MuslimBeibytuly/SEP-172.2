#include "GroupOfPupils.h"

GroupOfPupils::GroupOfPupils()
{
	pupils.push_back(Pupil(175, 65, 21, "Muslim"));
	pupils.push_back(Pupil(180, 65, 21, "Muslim"));
	pupils.push_back(Pupil(170, 66, 21, "Muslim"));
	pupils.push_back(Pupil(185, 65, 21, "Muslim"));
	pupils.push_back(Pupil(170, 66, 21, "Muslim"));
}

GroupOfPupils::~GroupOfPupils()
{
}

void GroupOfPupils::sortPupilsWithFunctor()
{
	std::sort(pupils.begin(), pupils.end(), PupilComparer());
}

void GroupOfPupils::sortPupilsWithLambda()
{
	std::sort
	(
		pupils.begin(),
		pupils.end(),
		[](const Pupil & a, const Pupil & b)
	{
		return a.height < b.height;
	}
	);
}

std::_Vector_const_iterator
< std::_Vector_val
	< std::_Simple_types
	< 
		Pupil
	>
	>
> GroupOfPupils::minPupilWithFunctor() const 
{
	auto pupil = std::min_element
	(
		pupils.begin(), 
		pupils.end(), 
		PupilComparer()
	);
	return pupil;
}

std::_Vector_const_iterator
< std::_Vector_val
	< std::_Simple_types
	< 
		Pupil
	>
	>
> GroupOfPupils::minPupilWithLambda() const 
{
	auto pupil = std::min_element
	(
		pupils.begin(), 
		pupils.end(), 
		[](const Pupil & a, const Pupil & b)
		{
			return a.height < b.height;
		}
	);
	return pupil;
}

std::_Vector_const_iterator
< 
	std::_Vector_val
	<
		std::_Simple_types 
		<
			Pupil
		>
	>
> GroupOfPupils::findPupilWithLambda(const int & height) const
{
	auto result = std::find_if
	(
		pupils.begin(), 
		pupils.end(),
		[height](const Pupil & pupil)
		{
			return pupil.height == height;
		}
	);
	return result;
}

size_t GroupOfPupils::countPupilWithLambda(const int & height) const
{
	auto cnt = std::count_if
	(
		pupils.begin(),
		pupils.end(),
		[height](const Pupil & pupil)
		{
			return pupil.height == height;
		}
	);
	return cnt;
}

std::vector<Pupil>::iterator GroupOfPupils::partitionByHeightWithLambda(const int & height)
{
	auto bound = std::partition
	(
		pupils.begin(), 
		pupils.end(), 
		[height](Pupil & pupil) 
		{
			return pupil.height <= height;
		}
	);
	return bound;
}

bool GroupOfPupils::isSorted()
{
	return std::is_sorted
	(
		pupils.begin(),
		pupils.end(),
		[](const Pupil & a, const Pupil & b)
		{
			return a.height < b.height;
		}
	);
}

bool GroupOfPupils::nextPermutation()
{
	return std::next_permutation
	(
		pupils.begin(), 
		pupils.end(), 
		[](const Pupil & a, const Pupil & b)
		{
			return a.height < b.height;
		}
	);
}

bool GroupOfPupils::PupilComparer::operator()
(const Pupil & a, const Pupil & b) const
{
	return a.height < b.height;
}
