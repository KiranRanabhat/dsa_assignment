(a) Explanation of how the data structures are defined
The program uses two stacks implemented as arrays. The first stack is a character stack used to store operators and parentheses during the conversion from infix to postfix.

The second stack is an integer stack used to evaluate the postfix expression. Each stack uses a variable to track the top position. The character stack follows the Last In First Out principle to manage operator precedence and parentheses. The integer stack stores operands for evaluation.


(b) Description of the functions implemented and their purpose
The push function inserts an element into the stack and increments the top pointer. The pop function removes the top element from the stack and decrements the top pointer

-The peek function returns the top element without removing it. The isOperator function checks whether a character is an operator (+, -, *, /). The precedence function returns the precedence value of an operator to handle order of operations.

-The infixToPostfix function converts an infix expression to postfix using the character stack. It scans the infix expression from left to right. Operands are sent directly to the postfix string. Operators are pushed onto the stack according to their precedence. Parentheses are handled by pushing '(' and popping operators until '(' when ')' is encountered. Remaining operators are popped at the end to complete the postfix expression.

-The evaluatePostfix function evaluates a postfix expression using the integer stack. Operands are pushed onto the stack as numbers. When an operator is encountered, two operands are popped, the operation is applied, and the result is pushed back. The top of the stack at the end is the final evaluation result.


(c) Overview of how the main method is organized
The main function prompts the user to enter an infix expression with single-digit operands. It calls infixToPostfix to convert the expression and prints the resulting postfix expression. Then it calls evaluatePostfix to calculate the value of the postfix expression and displays the final result. The main function serves as the driver of the program to demonstrate both conversion and evaluation.


(d) Sample output of a complete run of the program
Enter an infix expression (single-digit numbers only): 2+34
Postfix expression: 234+
Evaluation result: 14
Enter an infix expression (single-digit numbers only): (1+2)(3+4)
Postfix expression: 12+34+
Evaluation result: 21