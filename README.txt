this program uses three files

the main.cpp is where we run the main program,

the add.cpp is where we store our add() function,

and the add.h file gives us a way to use the add()
fucntion in different files.


--Things to keep in mind

- I gave the directions to all the files in task.json.
  "${workspaceFolder}/main.cpp",
  "${workspaceFolder}/add.cpp",
  "${workspaceFolder}/add.h",
(I couldn't make "${workspaceFolder}\\**.cpp/h" work)

- #inclde the header file of the function you are using
in the function file as well not just where you are
using it so if there is something wrong with the function
it would give you an error when compiling rather than
when linking. (ex. I #included the add.h file in add.cpp)

- make sure you always use header guards in the header files.
(I explained how they work in the add.h file)

- when arranging the #include files arrange them in 
alphabetical order.