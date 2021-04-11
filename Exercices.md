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

### Exercise 1.11:

Write a program that prompts the user for two integers.

Print each number in the range specified by those two integers.

**Answer:**

```c++
#include <iostream>

using namespace std;

int main()
{
    int start, end;
    cout << "Enter starting number then ending number" << endl;
    cin >> start >> end;
    cout << "Numbers from " << start << " to " << end << endl;
    while (start <= end)
    {
        cout << start++ << endl;
    }
    return 0;
}
```

## Exercises Section 1.4.2

### Exercise 1.12:

What does the following `for` loop do? What is the final value
of `sum`?

```c++
int sum = 0;
for (int i = -100; i <= 100; ++i)
    sum += i;
```

**Answer:**

- This `for` loop execute the `body` 201 times by incrementing `i` from -100 to 100.
- The final value of `sum` is 0.

### Exercise 1.13:

Rewrite the exercises from § 1.4.1 using for loops

**Answer:**

```c++
#include <iostream>

using namespace std;

int main()
{
    int sum = 0;
    for (int value = 1; value <= 10; value++)
    {
        sum += value; // assigns sum + val to sum
    }
    cout << "Sum of 1 to 10 inclusive is " << sum << endl;
    return 0;
}
```

### Exercise 1.14:

Compare and contrast the loops that used a for with those using a while. Are there advantages or disadvantages to using either form?

**Answer:**

- Advantages:

  - `for` loop:
    - the variable `value` belong to the `for` loop scope we get rid of it after we finish with `for` loop
    - `for` easy to read you have when it start `value = 1` and when it ends `value <= 10` and how much it icrement each loop `value++` in one line
  - `while` loop:
    - better to use with a condition or for infinit loop

- disadvantages:
  - `for` loop:
    - can't be used with only a condition
  - `while` loop:
    - not a good practice to use it with increment

### Exercise 1.15:

Write programs that contain the common errors discussed in the box below. Familiarize yourself with the messages the compiler generates.

```c++
// error: missing ) in parameter list for main
int main ( {
 // error: used colon, not a semicolon, after endl
 std::cout << "Read each file." << std::endl:
 // error: missing quotes around string literal
 std::cout << Update master. << std::endl;
 // error: second output operator is missing
 std::cout << "Write new master." std::endl;
 // error: missing ; on return statement
 return 0
}
```

```c++
#include <iostream>
int main()
{
 int v1 = 0, v2 = 0;
 std::cin >> v >> v2; // error: uses "v" not "v1"
 // error: cout not defined; should be std::cout
 cout << v1 + v2 << std::endl; return 0;
}
```

**Answer:**

```console
C:\Users\SG-04\Desktop\github\c\C++ Primer>make
g++ -Wall -o build\main main.cpp && build\main.exe
main.cpp:2:10: error: cannot declare '::main' to be a global variable
 int main ( {
          ^
main.cpp:4:10: error: 'cout' is not a member of 'std'
     std::cout << "Read each file." << std::endl :
          ^~~~
main.cpp:4:10: note: 'std::cout' is defined in header '<iostream>'; did you forget to '#include <iostream>'?
main.cpp:1:1:
+#include <iostream>
 // error: missing ) in parameter list for main
main.cpp:4:10:
     std::cout << "Read each file." << std::endl :
          ^~~~
main.cpp:4:49: error: found ':' in nested-name-specifier, expected '::'
     std::cout << "Read each file." << std::endl :
                                                 ^
                                                 ::
main.cpp:4:44: error: 'std::endl' has not been declared
     std::cout << "Read each file." << std::endl :
                                            ^~~~
main.cpp:7:18: error: 'Update' was not declared in this scope
               << Update master.
                  ^~~~~~
main.cpp:7:25: error: expected '}' before 'master'
               << Update master.
                         ^~~~~~
main.cpp:2:12: note: to match this '{'
 int main ( {
            ^
main.cpp:7:24: error: expected ')' before 'master'
               << Update master.
                        ^~~~~~~
                        )
main.cpp:2:10: note: to match this '('
 int main ( {
          ^
main.cpp:10:10: error: 'cout' in namespace 'std' does not name a type
     std::cout << "Write new master." std::endl;
          ^~~~
main.cpp:10:5: note: 'std::cout' is defined in header '<iostream>'; did you forget to '#include <iostream>'?
     std::cout << "Write new master." std::endl;
     ^~~
main.cpp:12:5: error: expected unqualified-id before 'return'
     return 0
     ^~~~~~
main.cpp:13:1: error: expected declaration before '}' token
 }
 ^
make: *** [makefile:8: main] Error 1
```

```console
C:\Users\SG-04\Desktop\github\c\C++ Primer>make
g++ -Wall -o build\main main.cpp && build\main.exe
main.cpp: In function 'int main()':
main.cpp:5:17: error: 'v' was not declared in this scope
     std::cin >> v >> v2; // error: uses "v" not "v1"
                 ^
main.cpp:5:17: note: suggested alternative: 'v2'
     std::cin >> v >> v2; // error: uses "v" not "v1"
                 ^
                 v2
main.cpp:7:5: error: 'cout' was not declared in this scope
     cout << v1 + v2 << std::endl;
     ^~~~
main.cpp:7:5: note: suggested alternative:
In file included from main.cpp:1:
C:/Program Files/mingw-w64/x86_64-8.1.0-posix-seh-rt_v6-rev0/mingw64/lib/gcc/x86_64-w64-mingw32/8.1.0/include/c++/iostream:61:18: note:   'std::cout'
   extern ostream cout;  /// Linked to standard output
                  ^~~~
make: *** [makefile:8: main] Error 1
```

**Fix:**

```c++
#include <iostream>

int main()
{
    std::cout << "Read each file." << std::endl;
    std::cout << "Update master." << std::endl;
    std::cout << "Write new master." << std::endl;
    return 0;
}
```

```console
C:\Users\SG-04\Desktop\github\c\C++ Primer>make
g++ -Wall -o build\main main.cpp && build\main.exe
Read each file.
Update master.
Write new master.

```

```c++
#include <iostream>

int main()
{
    int v1 = 0, v2 = 0;
    std::cin >> v1 >> v2;
    std::cout << v1 + v2 << std::endl;
    return 0;
}
```

```console
C:\Users\SG-04\Desktop\github\c\C++ Primer>make
g++ -Wall -o build\main main.cpp && build\main.exe
1
2
3
```

## Exercises Section 1.4.3

### Exercise 1.16:

Write your own version of a program that prints the sum of a set of integers read from cin.

**Answer:**

```c++
#include <iostream>

using namespace std;

int main()
{
    int sum = 0, value = 0;
    cout << "Enter the Set of numbers then press CTRL + Z + Enter to see the sum of the set:" << endl;
    while (std::cin >> value)
        sum += value;
    cout << "Sum is: " << sum << endl;
    return 0;
}
```

## Exercises Section 1.4.4

### Exercise 1.17:

What happens in the program presented in this section if the
input values are all equal? What if there are no duplicated values?

```c++
#include <iostream>
int main()
{
    // currVal is the number we're counting; we'll read new values into val
    int currVal = 0, val = 0;
    // read first number and ensure that we have data to process
    if (std::cin >> currVal)
    {
        int cnt = 1; // store the count for the current value we're processing
        while (std::cin >> val)
        {                       // read the remaining numbers
            if (val == currVal) // if the values are the same
                ++cnt;          // add 1 to cnt
            else
            { // otherwise, print the count for the previous value
                std::cout << currVal << " occurs " << cnt << " times" << std::endl;
                currVal = val; // remember the new value
                cnt = 1;       // reset the counter
            }
        } // while loop ends here
        // remember to print the count for the last value in the file
        std::cout << currVal << " occurs " << cnt << " times" << std::endl;
    } // outermost if statement ends here
    return 0;
}
```

**Answer:**

- if all the input values are all equal we will have an infinit loop
- if there are no duplicated values we will keep geting `(input value) occurs 1 times`

### Exercise 1.18:

Compile and run the program from this section giving it only equal values as input. Run it again giving it values in which no number is repeated.

**Answer:**

```console
C:\Users\SG-04\Desktop\github\c\C++ Primer>make
g++ -Wall -o build\main main.cpp && build\main.exe
1
1
1
1
1
1
1
1
1
^Z
1 occurs 22 times
```

```console
C:\Users\SG-04\Desktop\github\c\C++ Primer>make
g++ -Wall -o build\main main.cpp && build\main.exe
1
2
1 occurs 1 times
3
2 occurs 1 times
4
3 occurs 1 times
5
4 occurs 1 times
6
5 occurs 1 times
7
6 occurs 1 times
8
7 occurs 1 times
9
8 occurs 1 times
^Z
9 occurs 1 times
```
