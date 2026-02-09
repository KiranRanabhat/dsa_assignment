#Reverse Transversal

## Explanation of how the data structures are defined
The program uses a singly linked list data structure. Each node is defined using a structure that contains an integer data and a pointer next to the next node in the list. 

The list is managed using a head pointer, which points to the first node of the linked list. Nodes are dynamically allocated using memory allocation functions.


# Description of the functions implemented and their purpose
-The createNode function creates a new node with the given value and initializes its next pointer to NULL. 
-The insertEnd function adds a new node at the end of the linked list. It traverses the list until the last node and links the new node.

-The reverseTraversal function is a recursive function that prints the linked list in reverse order. It first recursively calls itself with the next node until it reaches the end of the list. Then, during the return phase of recursion, it prints each node’s data.

-The displayList function is used to display the linked list in normal order. It traverses from the head node to the last node, printing each node’s data.


## Overview of how the main method is organized
The main function creates an empty linked list using a head pointer. Sample nodes are added using the insertEnd function. The program first demonstrates the normal order traversal using displayList and then demonstrates reverse traversal using reverseTraversal. The main function acts as a driver to show how the linked list can be traversed in both normal and reverse order.


## Sample output of a complete run of the program
Linked list in normal order:
10 -> 20 -> 30 -> 40 -> 50 -> NULL
Linked list in reverse order:
50 40 30 20 10