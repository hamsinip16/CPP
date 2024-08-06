# Types of Variables
Global Variables
--
Variables which are declared outside any class or function is called global variables.
They can be accessed or modified by all functions in the program.
Memory is allocated when the program starts and deallocates only when the program ends.
Declaring many global variables causes memory issues. __global scope__

Static Variables
--
__static__ keyword is used to declare.
Variables which has the property of preserving the value even after they are out of scope. 
They can be declared inside or outside the main function.
They can only be accessed or modified within the function.
Memory allocated remains till the end of the program.
They are shared among all the objects of the class in which they are declared.
__file scope__

Const Variables
--
Variables once declared cannot be modified after initialization. 
They must be initialized at the point of declaration else ERROR.
__const__ keyword is used to declare.

