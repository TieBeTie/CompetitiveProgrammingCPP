/******************************************************************************

                            Online C# Compiler.
                Code, Compile, Run and Debug C# program online.
Write your code in this editor and press "Run" button to execute it.

*******************************************************************************/
// 6 1
// 5 3
// 4 5
// 3 7
// 2 9
// 1 11
// 0 13

//      i
// 6    0
// 5    1
// 4    2
// 3    3
// 2    4

// 6 - i ->

// ?       i
// 1       0
// 3       1
// 5       2
// 7       3 
// 9       4
// 11      5
// 13      6
// 2 * i + 1
using System;
class HelloWorld {
  static void Main() {
    int n = 7;
    int tab = 16;
    for (int i = 0; i < n; i++) {
        
        for (int j = 0; j < n - 1 - i + tab; j++) {
            Console.Write(" ");
        }
        for (int j = 0; j < 2 * i + 1; j++) {
            Console.Write("*");
        }
        Console.WriteLine();
    }
    for (int i = 3; i < n + 3; i++) {
        
        for (int j = 0; j < n - 1 - i + tab; j++) {
            Console.Write(" ");
        }
        for (int j = 0; j < 2 * i + 1; j++) {
            Console.Write("*");
        }
        Console.WriteLine();
    }
    for (int i = 3; i < n + 5; i++) {
        
        for (int j = 0; j < n - 1 - i + tab; j++) {
            Console.Write(" ");
        }
        for (int j = 0; j < 2 * i + 1; j++) {
            Console.Write("*");
        }
        Console.WriteLine();
    }
    // 7 3
    // 7 3
    for (int i = 0; i < n / 2 + 1; i++) {
        for (int j = 0; j < n - 3 + tab; j++) {
            Console.Write(" ");
        }
        for (int j = 0; j < n / 2 + 2; j++) {
            Console.Write("☻");
        }
            
        Console.WriteLine();
    }
    
  }
}