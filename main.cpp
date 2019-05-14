#include "MinHeap.h"
#include "MaxHeap.h"
#include "MinHeap.cpp"
#include "MaxHeap.cpp"

int main(int argc, const char * argv[])
{
	try {
		MinHeap<int>myMinHeap;

		myMinHeap.insert(26);
		myMinHeap.insert(30);
		myMinHeap.insert(55);
		myMinHeap.insert(18);
		myMinHeap.insert(21);
		myMinHeap.insert(22);
		myMinHeap.insert(20);
		cout << "Min Heap is : ";myMinHeap.display();
		cout << "\nHeap Size : " << myMinHeap.getHeapSize() << endl;
		cout << "Minimum : " << myMinHeap.find_min() << endl;
		myMinHeap.delete_min();
		cout << "MinHeap is : ";myMinHeap.display();
		cout << "\nHeap Size : " << myMinHeap.getHeapSize() << endl;
	}
	catch (const char* msg) {
		cout << "Error : " << msg << endl;
	}

	try {
		MaxHeap<int>myMaxHeap;

		myMaxHeap.insert(18);
		myMaxHeap.insert(26);
		myMaxHeap.insert(30);
		myMaxHeap.insert(55);
		myMaxHeap.insert(21);
		myMaxHeap.insert(22);
		myMaxHeap.insert(13);
		myMaxHeap.insert(9);
		myMaxHeap.insert(14);
		myMaxHeap.insert(20);
		myMaxHeap.insert(17);
		myMaxHeap.insert(11);
		myMaxHeap.insert(19);

		cout << "\n\nMax Heap is :";
		myMaxHeap.display();
		cout << "\nHeap size is : " << myMaxHeap.getHeapSize();
		cout << "\nMaximum : " << myMaxHeap.findmax();

		myMaxHeap.delete_max();
		cout << "\nMax Heap is : ";
		myMaxHeap.display();
		cout << "\nHeap size is : " << myMaxHeap.getHeapSize();
		cout << "\nMaximum : " << myMaxHeap.findmax();
	}
	catch (const char* msg) {
		cout << "Error : " << msg << endl;
	}

	return 0;
}