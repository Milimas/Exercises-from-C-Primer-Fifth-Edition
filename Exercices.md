# Exercises from C++ Primer Fifth Edition

## Exercises Section 1.1.1

### Exercise 1.1:

Review the documentation for your compiler and determine
what file naming convention it uses. Compile and run the main program from
page 2.

**Answer:**

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

**Answer:**

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

**Answer:**

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

**Answer:**

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

**Answer:**

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

### Exercise 1.6:

Explain whether the following program fragment is legal.

```c++
std::cout << "The sum of " << v1;
          << " and " << v2;
          << " is " << v1 + v2 << std::endl;
```

**Answer:**

this program is not legal, each line need a `std::cout` before `<<`

**Fix:**

```c++
std::cout << "The sum of << v1" ;
std::cout << " and " << v2 ;
std::cout << " is " << v1 + v2 << std::endl ;
```

## Exercises Section 1.3

### Exercise 1.7:

Compile a program that has incorrectly nested comments.

**Answer:**

```c++
/*
* comment pairs /* */ cannot nest.
* ''cannot nest'' is considered source code,
* as is the rest of the program
*/
int main()
{
 return 0;
}
```

```console
C:\Users\SG-04\Desktop\github\c\C++ Primer>make
g++ -Wall -o build\main main.cpp && build\main.exe
main.cpp:2:17: warning: "/*" within comment [-Wcomment]
 * comment pairs /* */

main.cpp:4:7: error: empty character constant
     * ''cannot nest'' is considered source code,
       ^~~~~~~~
main.cpp:4:20: error: empty character constant
     * ''cannot nest'' is considered source code,
                    ^~
main.cpp:3:1: error: 'cannot' does not name a type
 cannot nest.
 ^~~~~~
make: *** [makefile:8: main] Error 1
```

### Exercise 1.8:

Indicate which, if any, of the following output statements are
legal:

1.

```c++
std::cout << "/*";
```

2.

```c++
std::cout << "*/";
```

3.

```c++
std::cout << /* "*/" */;
```

4.

```c++
std::cout << /* "*/" /* "/*" */;
```

**Answer:**

1. legal
2. legal
3. illegal
4. illegal

**Fix:**

```c++
std::cout << "/*";
std::cout << "*/";
std::cout << /* */ "*/";
std::cout << /* "*/ " /* " /*" */;
```

## Exercises Section 1.4.1

### Exercise 1.9:

Write a program that uses a while to sum the numbers from 50 to 100.

**Answer:**

```c++
#include <iostream>

using namespace std;

int main()
{
    int sum = 0, value = 50;
    while (value <= 100)
    {
        sum += value;
        value++;
    }
    cout << "Sum of 50 to 100 inclusive is " << sum << endl;
    return 0;
}
```

### Exercise 1.10:

In addition to the ++ operator that adds 1 to its operand, there is a decrement operator (--) that subtracts 1.

Use the decrement operator to write a while that prints the numbers from ten down to zero.

**Answer:**

```c++
#include <iostream>

using namespace std;

int main()
{
    int value = 10;
    while (value >= 0)
    {
        cout << value-- << endl;
    }
    return 0;
}
```
