# Programing Project - 1st Milestone
# Flight Simulator 2020

[Link to project's repository](https://github.com/adiM3344/ex3)

An Interpenter coded in C++ for FlightGear's Flight Simulator

# WHAT IS IT ABOUT ?

Our project connects to a flight simulator and sends it commands that make an airplain fly.

# HOW DOES IT WORK ?

We simulate communication between server and client as both parts are programmed by us.
We send commands to the server while running another thread that reads the information from the server.
At first we intrerprate the text from the simulator to commands and act accordingly to its demands.
This communication between both sides yields wonderful flight results so the clients is satisfied.

# HOW CAN I USE IT ?

In order to use our program you need to work on a linux operating System in your computer and download the
Flight Simulator gui.

First install flight gear

Then, in the additional settings section write the following lines:

--telnet=socket,in,10,127.0.0.1,5402,tcp

--generic=socket,out,10,127.0.0.1,5400,tcp,generic_small

In addition, create a .txt file with a set of commands for the interpreter. Also create a xml file of the data the simulator will send and put it in the protocol folder of the simulator.

Compile the code with the following line: "g++ -std=c++14 *.cpp -Wall -Wextra -Wshadow -Wnon-virtual-dtor -pedantic -o a.out -pthread". 

Run the code with: "./a.out file_name". (where "file_name" is the name of the .txt file).

After you run our code you may push the button "fly" in the simulator and wait for the communication between
the client and server.

# WORKSPACE

Our project designed on a Linux operating system in C++ language.

# TEAM

NAME: Ortal Lankri
ID: 209281674

NAME: Adi Meirman
ID: 208177204

