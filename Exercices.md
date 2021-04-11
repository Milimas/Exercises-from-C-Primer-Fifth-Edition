# Exercises from C++ Primer Fifth Edition

## Exercises Section 1.1.1

### Exercise 1.1:

Review the documentation for your compiler and determine
what file naming convention it uses. Compile and run the main program from
page 2.

```c++
int main()
{
    return 0;
}
```

```console
C:\Users\SG-04\Desktop\github\c\C++ Primer>make
g++ -Wall -o build\main main.cpp && build\main.exe

```

### Exercise 1.2:

Change the program to return -1. A return value of -1 is
often treated as an indicator that the program failed. Recompile and rerun
your program to see how your system treats a failure indicator from main.

```c++
int main()
{
    return -1;
}
```

```console
C:\Users\SG-04\Desktop\github\c\C++ Primer>make
g++ -Wall -o build\main main.cpp && build\main.exe
make: *** [makefile:8: main] Error -1

```
