Balanced Parentheses Checking Using Stack in C
(a) Explanation of how the data structures are defined
In this program, a stack data structure is used to check whether an expression has balanced parentheses. The stack is implemented using a character array of fixed size. The size of the stack is defined using a constant. A variable named top is used to keep track of the top position of the stack. When the stack is empty, the value of top is −1.

The stack follows the Last In First Out (LIFO) principle, which is suitable for matching opening and closing brackets.

The stack stores only opening symbols such as (, {, and [. Closing symbols are compared with the most recent opening symbol stored in the stack.


(b) Description of the functions implemented and their purpose

-The isFull() function is used to check whether the stack is full. It returns true when the stack has reached its maximum size.

-The isEmpty() function checks whether the stack is empty. It is used before performing pop operations to avoid underflow.

-The push_stack() function inserts an opening bracket into the stack. If the stack is already full, it displays a stack overflow message.

-The pop_stack() function removes and returns the top element from the stack. If the stack is empty, it returns a null character.

-The match_checking() function checks whether an opening bracket and a closing bracket are of the same type. It ensures correct matching of parentheses, braces, and brackets.

-The Checking_balance() function is the main logic of the program. It scans the expression character by character. Opening brackets are pushed into the stack, and closing brackets are checked against the top of the stack. If a mismatch occurs or the stack becomes empty unexpectedly, the expression is marked as unbalanced.


(c) Overview of how the main() method is organized
The main() function declares three different expressions to test the program. Each expression is passed to the Checking_balance() function one by one. The result for each expression is displayed on the screen. The main function acts as a driver to demonstrate the working of the stack-based parentheses checking logic.


(d) Sample output of a complete run of the program
EXPRESSION: a+(b-c)*(d
UNBALANCED
EXPRESSION: m+[a-b*(c+d*{m)]
UNBALANCED
EXPRESSION: a+(b-c)
BALANCED