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

## Exercises Section 1.2

### Exercise 1.3:

Write a program to print Hello, World on the standard
output.

```c++
#include <iostream>

using namespace std;

int main()
{
    cout << "Hello, World" << endl;
    return 0;
}
```

```console
C:\Users\SG-04\Desktop\github\c\C++ Primer>make
g++ -Wall -o build\main main.cpp && build\main.exe
Hello, World

```

### Exercise 1.4:

Our program used the addition operator, +, to add two
numbers. Write a program that uses the multiplication operator, \*, to print
the product instead.

```c++
#include <iostream>

using namespace std;

int main()
{
    int v1, v2;
    cout << "Enter two numbers:" << endl;
    cin >> v1 >> v2;
    cout << "The product of " << v1 << " and " << v2 << " is " << v1 * v2 << endl;
    return 0;
}
```

```console
C:\Users\SG-04\Desktop\github\c\C++ Primer>make
g++ -Wall -o build\main main.cpp && build\main.exe
Enter two numbers:
2
3
The product of 2 and 3 is 6

```

### Exercise 1.5:

We wrote the output in one large statement. Rewrite the
program to use a separate statement to print each operand.

```c++
#include <iostream>

using namespace std;

int main()
{
    int v1, v2;
    cout << "Enter two numbers:" << endl;
    cin >> v1 >> v2;
    cout << "The product of ";
    cout << v1;
    cout << " and ";
    cout << v2;
    cout << " is ";
    cout << v1 * v2;
    cout << endl;
    return 0;
};
```

```console
C:\Users\SG-04\Desktop\github\c\C++ Primer>make
g++ -Wall -o build\main main.cpp && build\main.exe
Enter two numbers:
2
2
The product of 2 and 2 is 4

```
