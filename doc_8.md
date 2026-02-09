# Sorting Randomly Generated Numbers Using Different Algorithms


## Explanation of how the data structures are defined
The program uses a one dimensional integer array to store a list of randomly generated numbers. The size of the array is provided by the user at run time. Two global variables are used to count the number of comparisons and swaps performed during the sorting process.


## Description of the functions implemented and their purpose
-The swap function is used to exchange two elements in the array and to count the number of swaps performed.

-The bubbleSort function sorts the array by repeatedly comparing adjacent elements and swapping them if they are in the wrong order.

-The selectionSort function sorts the array by repeatedly selecting the smallest element from the unsorted portion and placing it at the correct position.

-The insertionSort function builds the sorted array one element at a time by inserting each element into its proper position.

-The mergeSort function sorts the array using the divide and conquer approach by dividing the array into smaller subarrays and merging them in sorted order.

-The merge function is used by merge sort to combine two sorted subarrays into a single sorted array.

-The display function prints all the elements of the array.


## Overview of how the main method is organized
The main function first asks the user for the number of elements to be generated. It then generates random numbers in the range of one to one thousand and stores them in an array. The array is printed before sorting. The user is then asked to choose a sorting algorithm. Based on the choice, the corresponding sorting function is called. After sorting, the sorted array is printed along with the total number of comparisons and swaps performed.


## Sample output of a complete run of the program
Enter number of elements: 5
Array before sorting:
432 98 715 210 56
Choose sorting algorithm:
1 Bubble Sort
2 Selection Sort
3 Insertion Sort
4 Merge Sort
Array after sorting:
56 98 210 432 715
Total comparisons: 8
Total swaps: 6