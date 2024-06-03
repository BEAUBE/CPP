#include "PmergeMe.hpp"

void PmergeMe::printBefore() {
	std::cout << "Before: " << std::flush;

	for (std::vector<int>::const_iterator it = vector.begin(); it != vector.end(); it++)
		std::cout << *it << " " << std::flush;
	std::cout << std::endl;
}

void PmergeMe::printAfter() {
	std::cout << "After: " << std::flush;

	for (std::vector<int>::const_iterator it = vector.begin(); it != vector.end(); it++)
		std::cout << *it << " " << std::flush;
	std::cout << std::endl;
}

static std::vector<int>::iterator binarySearchVector(std::vector<int> &A, int target) {
	int	mid;
	int	left = 0;
	int	right = (A.size() - 1);

	while (left <= right) {
		mid = (left + right) / 2;
		if (A[mid] < target)
			left = mid + 1;
		else if (A[mid] > target)
			right = mid - 1;
		else
			return A.begin() + mid;
	}
	return A.begin() + left;
}

std::vector<int> PmergeMe::vectorAlgo(std::vector<int> arg) {
	std::vector<int>		rtrn;
	std::vector<std::pair<int, int> > Pairs;

	if (arg.size() == 1)
		return (arg);
	for (std::vector<int>::const_iterator it = arg.begin(); it != arg.end(); it += 2) {
		if (it + 1 == arg.end())
			break;
		std::pair<int, int> pair;
		if (*it > *(it + 1)) {
			pair.first = *it;
			pair.second = *(it + 1);
		}
		else {
			pair.first = *(it + 1);
			pair.second = *it;
		}
		Pairs.push_back(pair);
		rtrn.push_back(pair.first);
	}
	rtrn = vectorAlgo(rtrn);

	for (std::vector<std::pair<int, int> >::iterator it = Pairs.begin(); it != Pairs.end(); ) {
		if (it->first == rtrn.front()) {
			rtrn.insert(rtrn.begin(), it->second);
			it = Pairs.erase(it);
			break;
		}
		it++;
	}

	for (std::vector<std::pair<int, int> >::iterator it = Pairs.begin(); it != Pairs.end(); it++) {
		rtrn.insert(binarySearchVector(rtrn, it->second), it->second);
	}

	if (arg.size() % 2)
		rtrn.insert(binarySearchVector(rtrn, arg.back()), arg.back());

	return (rtrn);
}

//deque

static std::deque<int>::iterator binarySearchdeque(std::deque<int> &A, int target) {
	int	mid;
	int	left = 0;
	int	right = (A.size() - 1);

	while (left <= right) {
		mid = (left + right) / 2;
		if (A[mid] < target)
			left = mid + 1;
		else if (A[mid] > target)
			right = mid - 1;
		else
			return A.begin() + mid;
	}
	return A.begin() + left;
}

std::deque<int> PmergeMe::dequeAlgo(std::deque<int> arg) {
	std::deque<int>		rtrn;
	std::deque<std::pair<int, int> > Pairs;

	if (arg.size() == 1)
		return (arg);
	for (std::deque<int>::const_iterator it = arg.begin(); it != arg.end(); it += 2) {
		if (it + 1 == arg.end())
			break;
		std::pair<int, int> pair;
		if (*it > *(it + 1)) {
			pair.first = *it;
			pair.second = *(it + 1);
		}
		else {
			pair.first = *(it + 1);
			pair.second = *it;
		}
		Pairs.push_back(pair);
		rtrn.push_back(pair.first);
	}
	rtrn = dequeAlgo(rtrn);

	for (std::deque<std::pair<int, int> >::iterator it = Pairs.begin(); it != Pairs.end(); ) {
		if (it->first == rtrn.front()) {
			rtrn.insert(rtrn.begin(), it->second);
			it = Pairs.erase(it);
			break;
		}
		it++;
	}

	for (std::deque<std::pair<int, int> >::iterator it = Pairs.begin(); it != Pairs.end(); it++) {
		rtrn.insert(binarySearchdeque(rtrn, it->second), it->second);
	}

	if (arg.size() % 2)
		rtrn.insert(binarySearchdeque(rtrn, arg.back()), arg.back());

	return (rtrn);
}

bool find_doubles(std::vector<int> vector) {
	for (unsigned long i = 0; i < vector.size(); i++) {
		std::vector<int>::iterator first = std::find(vector.begin(), vector.end(), vector[i]);
		first++;
		std::vector<int>::iterator second = std::find(first, vector.end(), vector[i]);
		if (second != vector.end())
			return (1);
	}
	return (0);
}

PmergeMe::PmergeMe(int ac, char **av) {
	std::string strTmp;
	int	iTmp;

	for (int i = 1; i < ac; i++) {
		strTmp = av[i];
		if (strTmp.find_first_not_of("0123456789") != std::string::npos)
			throw Error();
		iTmp = std::strtod(av[i], NULL);
		if (iTmp < 0 || iTmp > 2147483647)
			throw Error();
		vector.push_back(iTmp);
		deque.push_back(iTmp);
	}
	if (find_doubles(vector))
		throw Error();
}

PmergeMe::PmergeMe(const PmergeMe &Model) {
	*this = Model;
}

PmergeMe &PmergeMe::operator=(const PmergeMe &Model) {
	if (this == &Model)
		return (*this);
	vector = Model.vector;
	deque = Model.deque;
	return (*this);
}

PmergeMe::~PmergeMe() {
	
}

const char *PmergeMe::Error::what() const throw() {
	return ("Error");
}
