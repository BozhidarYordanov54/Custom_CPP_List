#pragma once

#ifndef LIST_H
#define LIST_H

#include <iostream>

template <typename T>
class List
{
public:
	List();
	~List();

	int get_count();
	void add(const T& item);
	bool remove(const T& item);
	bool contains(const T& item);
	std::string equals(const T& item1, const T& item2);
	void reverse();
	T index_of(const T& item);
	int sum();
	double average();
	void print();
	void print_index(int index);
	T* print_from(int startIndex, int endIndex);
	void clear();

private:
	T* data;
	int size;
	int capacity;

	void resize(int newCapacity);
};

#endif
