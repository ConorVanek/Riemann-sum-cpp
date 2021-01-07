# Riemann-sum-cpp
An implementation of Riemann sum integration in c++ using the cmath library with a tolerance of 0.0001. To increase the degree of accuracy, edit TOLERANCE in line 28 of main.cpp to be a smaller value.
https://en.wikipedia.org/wiki/Riemann_sum

**This is a c++ program which means you need a compiler such as g++ to run it. G++ can be installed through the terminal in Linux or Mac OS, or MinGW for Windows. More information about using g++ can be found in my blog and many other places on the web.**

# How to Use

1) Download the files and create a folder to put them in.

2) Navigate to the folder in a command window.

3) Type the following command:
*g++ main.cpp* 
to compile the program. A new file should appear in the folder called *a.exe* (Windows) or *a.out* (Mac/Linux). This means the program was compiled. (If this doesn't work then you probably don't have g++ installed correctly... I've tested the program thoroughly enough to know it works).

4) Now it's time to run the compiled program. In Windows command prompt use the command 
*a.exe*  
in Mac/Linux use 
*./a.out*

5) You should now see a prompt that says 
*enter function (no spaces):*  
The program is made to accept virtually any combination of numbers and expressions from the cmath function library. This gives you quite a lot of choices. Refer to http://www.cplusplus.com/reference/cmath/ for input options.

6) It should now prompt for lower and upper bounds. The program will approximate the area beneath the curve between these two points. *Disclaimer - I didn't put anything in the program to handle things like vertical asymptotes and undefined values, so I don't really know how the program will handle those things. It will probably not compute an actual answer unless the function is defined at every point between your lower and upper bounds.*

7) At this point the program generates another program called "solve" and runs it, giving you the answer. If you want to run it again, just run a.out/a.exe again.
