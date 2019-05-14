#pragma once
#include<iostream>
#include<vector>

using namespace std;

template<typename Object>
class MaxHeap
{
private:
	vector<Object>heap;
	int currentSize;
public:
	MaxHeap();
	void insert(Object);
	void delete_max();
	void percolateDown(int);
	Object findmax();
	bool isEmpty();
	int getHeapSize();
	void display();
};

