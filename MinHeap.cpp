#include "MinHeap.h"

template<typename Object>
MinHeap<Object>::MinHeap()
{
	currentSize = 0;
	heap.resize(100);
}


template<typename Object>
void MinHeap<Object>::insert(Object x)
{
	if (currentSize == heap.size() - 1)
		heap.resize(heap.size() * 2);

	currentSize++;
	int i = currentSize;

	while (x < heap[i / 2] && i / 2 >= 1) {
		heap[i] = heap[i / 2];
		i /= 2;
	}
	heap[i] = x;
}

template<typename Object>
void MinHeap<Object>::delete_min()
{
	if (isEmpty()) throw "Heap is empty!!";
	heap[1] = heap[currentSize];
	currentSize--;
	percolateDown(1);
}

template<typename Object>
void MinHeap<Object>::percolateDown(int i)
{
	int leftchild = 2 * i;
	int rightchild = 2 * i + 1;

	if (leftchild > currentSize) return;

	int min = i;

	if (heap[leftchild] < heap[i])
		min = leftchild;

	if (heap[rightchild] < heap[min])
		min = rightchild;

	if (min != i) {
		swap(heap[min], heap[i]);
		percolateDown(min);
	}
}

template<typename Object>
bool MinHeap<Object>::isEmpty()
{
	return currentSize == 0;
}

template<typename Object>
void MinHeap<Object>::display()
{
	for (int i = 1; i <= currentSize; i++)
		cout << heap[i] << " ";
}

template<typename Object>
int MinHeap<Object>::getHeapSize()
{
	return currentSize;
}

template<typename Object>
int MinHeap<Object>::find_min()
{
	return heap[1];
}
