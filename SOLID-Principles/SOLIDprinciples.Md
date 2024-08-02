SOLID Design Principles

>> Component here can be either a Class or Function or Method or Module

# Single Responsibility Principle:
Every software component should have one and only one responsibility.  


# Open-Closed Principle
Software components should be closed for modification, but open for extension.  


# Liskov Substitution Principle
Objects should be replaceable with their subtypes without affecting the correctness of the program.

1. The subclass should have all the properties and methods of the superclass.
2. The subclass should not have any new properties or methods that are not in the superclass.
3. The subclass should not reduce the visibility of any properties or methods in the superclass.
4. The subclass should not change the behavior of any properties or methods in the superclass in a way that would break existing code that uses the superclass.


# Interface Segregation Principle
No client should be forced to depend on methods it doesnot use.


# Dependency Injection Principle
High level modules should not depend on low-level modules, both should depend on abstractions.
Abstractions should not depend on details. Details should depend on Abstractions.


