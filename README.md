Hello, 

Let me introduce you to the fascinating world of algorithms. Here we have a "game" or a project for l'ecole 42.
The goal is to sort some integers with the least amount of limited instructions:

Code	| Instruction	                        |          Action                                            |
---------------------------------------------------------------------------------------------------------|
sa    | swap a	                            | swaps the 2 top elements of stack a                        |
sb	  | swap b	                            | swaps the 2 top elements of stack b                        |
ss	  | swap a + swap b	                    | both sa and sb                                             |     
pa	  | push a	                            | moves the top element of stack b at the top of stack a     | 
pb	  | push b	                            | moves the top element of stack a at the top of stack b     |
ra	  | rotate a	                          | shifts all elements of stack a from bottom to top          |
rb	  | rotate b	                          | shifts all elements of stack b from bottom to top          |
rr	  | rotate a + rotate b	                | both ra and rb                                             | 
rra	  | reverse rotate a	                  | shifts all elements of stack a from top to bottom          |
rrb	  | reverse rotate b	                  | shifts all elements of stack b from top to bottom          |
rrr	  | reverse rotate a + reverse rotate b	| both rra and rrb                                           |    


There ar a lot of interestings methods out of here:
but i choose to explore one in particular : the RADIX_SORT, because of its simplicity.

here some articles for you to understand it better:
https://medium.com/nerd-for-tech/push-swap-tutorial-fa746e6aba1e
https://brilliant.org/wiki/radix-sort/

How does mine works: 
As i parse arguments, i allocate them in nodes with indexes (from the smallest int to the biggest: as Radix_sort works with non-negatives ints) in a structure,
to create a linked list to reproduce a "stack" (the project ask you to work with only two stacks).
I then sort each index with bits operators (>> 1 : move 1 bit to the right) / ('x' & 1 : if x = 0, its give me 0, x = 1 will give me 1).
In resume i push 0 or 1 to the second stack, then i merge both stacks together and i redo the processus from the least significant bit to the most (or the number of bits that constitute the biggest int):

example: 
001 101 100 110 011 -> 001 101 011 (stack_1) / 100 110 (stack_2) -> 001 101 011 100 110 etc 
will do sort for the third bit, then the second and finally the first.
