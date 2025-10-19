# Project2Cours13
A generic Queue implementation in C++ built using a custom Doubly Linked List class (clsDblLinkedList). This class supports all standard queue operations like enqueue (push), dequeue (pop), front, back, and additional utility functions such as reversing, inserting, updating, and clearing the queue.



🧠 Overview

clsMyQueue is a template-based queue class built on top of a custom clsDblLinkedList.
It provides a flexible and reusable structure that can handle any data type (int, string, float, custom objects, etc.).


Reverse() → Reverse the order of the queue.

InsertAtFront(T) / InsertAtBack(T) → Direct insertion methods.

InsertAfter(int index, T value) / UpdateItem(int index, T value) → Modify specific elements.

🧩 Requirements

C++17 or later

clsDblLinkedList.h (custom doubly linked list header You)
