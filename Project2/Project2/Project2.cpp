#include <iostream>
#include "clsMyQueue.h"


int main()
{

	clsMyQueue<int> MyQueue;

	MyQueue.push(5);
	MyQueue.push(1);
	MyQueue.push(2);
	MyQueue.push(3);

	

	MyQueue.PrintList();
	cout << "\n\n";
	cout << "\n=====> : " << MyQueue.GetItem(2);

	cout << "\n\n";
	MyQueue.InsertAfter(2,12);
	MyQueue.UpdateItem(2,900);
	MyQueue.PrintList();

	cout << "\n\n";
	
	MyQueue.InsertAtFront(18);
	MyQueue.InsertAtBack( 20);
	
	MyQueue.PrintList();
	cout << "\n\n";
	MyQueue.pop();
	MyQueue.PrintList();

	
}
