# Classes-and-Objects

Aim:
This repository contains concept about Classes and Objects.

Theory:
Classes and objects are the core concepts of Object-Oriented Programming (OOP).

Object- oriented programming
Object-Oriented Programming (OOP) is a programming paradigm that organizes software design around data, or objects, rather than functions and logic. In OOP, objects are instances of classes, which are templates that define the structure and behavior of the objects. This paradigm is centered on four key principles: Encapsulation, Abstraction, Inheritance, and Polymorphism. These principles help in creating modular, reusable, and maintainable code.

Class:
A class is a blueprint or template for creating objects. It defines a data structure by encapsulating data (known as attributes or member variables) and functions (known as member functions or methods) that operate on the data.

SYNTAX: class Car{---};

Object
An object is an instance of a class. When a class is defined, no memory is allocated until an object of that class is created. Each object has its own set of data (attributes) defined by the class.

SYNTAX: Car myCar;// class is car and myCar is an object of class Car

Methods
Member functions or methods are functions defined inside a class that operates on the attributes of the class. They can be defined inside the class body or outside using the scope resolution operator ::.

SYNTAX: class Circle { public: double radius;

double area() { return 3.14 * radius * radius; } };

Access specifiers
Access specifiers define the access level of class members. C++ has three primary access specifiers:

public: Members are accessible from outside the class.
private: Members are accessible only within the class (default access level).
protected: Members are accessible within the class and by derived classes.
SYNTAX: class Employee { private: int salary;// intializing salary as a private, it cannot be accessed outside the class

public: string name;// initializng name as public, it can be accessed outside the class

};

OUTPUT:
Class definition :
![Screenshot 2024-09-05 151237](https://github.com/user-attachments/assets/a3d51004-181d-4a6c-91d3-b23b46728435)

Function/method inside a class:
![Screenshot 2024-09-05 151441](https://github.com/user-attachments/assets/9920546a-57ab-4851-863c-ea316093efeb)

Access type of classes:
![Screenshot 2024-09-05 151311](https://github.com/user-attachments/assets/ede33940-7289-4e17-9ef7-e74f617645a6)

Class program:
![Screenshot 2024-09-05 151541](https://github.com/user-attachments/assets/e92162f3-ee06-43ce-acf3-c4c130c335fe)


Conclusion:
We learnt about Classes, objects and methods in C++ programming.
