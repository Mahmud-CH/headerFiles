#ifndef ADD_H
#define ADD_H 

int add(int num1, int num2);

#endif


// when defining something always use capital letters
// and underscore for spaces

// the header guards make it so that
// you can write #include 'add.h' twice and
// the code will still run just fine

// the way it does is 
// #ifndef ADD_H checks if ADD_H was defined before
// if it wasn't then it would run the code until the #endif

// what it does when it runs the code is that it defines 
// ADD_H with #define ADD_H so that when you call the header
// file again #ifndef ADD_H would see that ADD_H is
// defined and would comment out the code until the #endif statement
