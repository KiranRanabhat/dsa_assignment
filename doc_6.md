# Implementation of Min Heap and Max Heap Using Array

## Explanation of how the data structures are defined
The program uses an array to represent both the min heap and the max heap. A heap is a complete binary tree that is stored in an array form. For any element at index i, the left child is located at index 2i + 1 and the right child is located at index 2i + 2. Separate arrays are used to store the min heap and max heap so that both can be built from the same unsorted input data without interference.


## Description of the functions implemented and their purpose
-The swap function exchanges the values of two array elements and is used during heap construction.

-The minHeapify function ensures that the subtree rooted at a given index satisfies the min heap property, where the smallest element is at the root.

-The maxHeapify function ensures that the subtree rooted at a given index satisfies the max heap property, where the largest element is at the root.

-The buildMinHeap function constructs a min heap from an unsorted array by calling the minHeapify function starting from the last non leaf node up to the root.

-The buildMaxHeap function constructs a max heap from an unsorted array by calling the maxHeapify function starting from the last non leaf node up to the root.

-The display function prints all elements of the heap array.


## Overview of how the main method is organized
The main function defines an unsorted array of integers. Two separate arrays are created to store the min heap and max heap. The buildMinHeap function is called to create the min heap, and the buildMaxHeap function is called to create the max heap. The resulting heaps are then displayed on the screen.


## Sample output of a complete run of the program
Min Heap:
1 4 3 10 5
Max Heap:
10 5 3 4 1