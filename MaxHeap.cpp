#include "MaxHeap.h"

template<typename Object>
MaxHeap<Object>::MaxHeap()
{
	currentSize = 0;
	heap.resize(100);
}

template<typename Object>
void MaxHeap<Object>::insert(Object x)
{
	if (currentSize == heap.size() - 1)
		heap.resize(heap.size() * 2);

	currentSize++;
	int i = currentSize;

	while (x > heap[i / 2] && i > 1) {
		heap[i] = heap[i / 2];
		i /= 2;
	}
	heap[i] = x;
}

template<typename Object>
void MaxHeap<Object>::delete_max()
{
	if (isEmpty()) throw "Heap is empty!!";
	heap[1] = heap[currentSize];
	currentSize--;
	percolateDown(1);
}

template<typename Object>
void MaxHeap<Object>::percolateDown(int i)
{
	int leftchild = 2 * i;
	int rightchild = 2 * i + 1;

	if (rightchild > currentSize)
		return;

	int max = i;
	if (heap[leftchild] > heap[i])
		max = leftchild;
	if (heap[rightchild] > heap[max] && rightchild <= currentSize)
		max = rightchild;

	if (max != 1) {
		swap(heap[max], heap[i]);
		percolateDown(max);
	}
}

template<typename Object>
Object MaxHeap<Object>::findmax()
{
	return heap[1];
}

template<typename Object>
bool MaxHeap<Object>::isEmpty()
{
	return currentSize == 0;
}

template<typename Object>
int MaxHeap<Object>::getHeapSize()
{
	return currentSize;
}

template<typename Object>
void MaxHeap<Object>::display()
{
	for (int i = 1; i <= currentSize; i++)
		cout << heap[i] << " ";
}
