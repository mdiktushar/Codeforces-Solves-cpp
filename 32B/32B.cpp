#include<bits/stdc++.h>
#include<cstdlib>
#include <algorithm>
#include <functional>
#include <vector>


#define ll long long
#define l long

using namespace std;
/**
    First, there are patterns to our every day lives. The universe operates
    in a somewhat predictable way; For example — day and night, seasons, sunrise
    and sunset. People go through routines such as rising in the morning, going to school
    or to work. We get instructions from other people such as our superiors at work.
    How we cook certain recipes can be explained in finite steps.

    Second, every time we use smart devices, some code is running in the background.
    Moving a mouse pointer from one part of your computer screen
    to the other may seem like a simple task,
    but in reality, so many lines of code just ran. An act as simple as typing
    letters into Google Docs leads to lines of code being executed in
    the background. It is all code everywhere.
**/

int Sum(int n){
    if(n == 1)
        return 1;
    else return n+Sum(n-1);
}

int findSum(int A[], int N) {
    if (N <= 0)
        return 0;
    return (findSum(A, N - 1) + A[N - 1]);
}

//md.imrul kayes
int main()
{
    string s;cin>>s;
    int n = s.size();

    for(int i=0; i<n; i++){
        if(s[i] == '.')
            cout<<0;
        else{
            if(s[i+1]== '.'){
                cout<<1;
                i++;
            }
            else{
                cout<<2;
                i++;
            }
        }
    }cout<<endl;

    return 0;
}

/**
    Compilers function differently. They convert the source code in its entirety via a compilation process to binary. The binary is then executed. If there were errors in the source code, they are detected during the compilation time and flagged. This interrupts the compilation process, and no binary is generated.

    Interpreters translate line by line and execute the line before going on to the next line. Compilers translate all lines of a program to a file (binary) and execute the whole file.

    Remember the definition of computer program? It is a sequence of instructions that is executed by a computer.

    An executing program is usually called a process. Such programs use certain resources on the computer system or smartphone such as memory, disk space and the file system. An executing program can also be said to be running.

    We use the word ‘run’ when we execute a computer program. The time it takes to run such programs is known as the run-time of the program.

    It is common to see programs referred to as Apps. We also associate programs with the platforms or environment in which they run, or are designed for. There are web apps, which run on web browsers, such as Google Spreadsheet. There are mobile apps, which run on smartphones such as CandyCrush. There are also desktop apps such as the Evernote desktop app.

    Again, interpreted source code is executed directly from the source file. Compiled source code is converted to a binary file. The binary file is then executed. Compiled source code may fail during run-time even after successfully compiling
**/

