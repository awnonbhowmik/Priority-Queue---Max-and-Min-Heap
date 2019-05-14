#pragma once
#include<iostream>
#include<vector>

using namespace std;

template<typename Object>
class MinHeap
{
private:
	vector<Object>heap;
	int currentSize;
public:
	MinHeap();
	void insert(Object);
	void delete_min();
	void percolateDown(int);
	bool isEmpty();
	void display();
	int getHeapSize();
	int find_min();
};