# Doubly Linked Lsit

## Explanation of how the data structures are defined
The program uses a doubly linked list data structure. Each node is defined using a structure that contains three members: an integer data field, a pointer to the previous node, and a pointer to the next node. The previous pointer allows backward traversal, while the next pointer allows forward traversal. The list is managed using a head pointer that points to the first node of the list. Dynamic memory allocation is used to create new nodes during runtime.


## Description of the functions implemented and their purpose
-The createNode function is used to allocate memory for a new node and initialize its data, previous, and next pointers.

-The insertEnd function inserts a new node at the end of the doubly linked list. It is mainly used to create the initial list for demonstration.

-The insertAfter function inserts a new node after a given node value. The function searches for the node containing the specified value and adjusts the previous and next pointers of the surrounding nodes to correctly insert the new node.

-The deleteNode function deletes a node with a given value from the doubly linked list. It updates the previous and next pointers of adjacent nodes and frees the memory of the deleted node.

-The display function traverses the list from the head and prints all node values in forward direction to show the current state of the list.


## Overview of how the main method is organized
The main function initializes an empty doubly linked list. It inserts initial elements into the list using the insertEnd function. The list is displayed to show the initial state. Then a new node is inserted after a specified node using the insertAfter function and the updated list is displayed. Finally, a node is deleted using the deleteNode function and the final list is displayed. The main function demonstrates all the operations performed on the doubly linked list.


## Sample output of a complete run of the program
Initial doubly linked list:
10 <-> 20 <-> 30 <-> NULL
After inserting 25 after 20:
10 <-> 20 <-> 25 <-> 30 <-> NULL
After deleting 10:
20 <-> 25 <-> 30 <-> NULL