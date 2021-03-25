#include <iostream>

#include <string>
#include <vector>


int main()
{

 int num = 5;
 int num2 = 10;

int * ptr = &num;
ptr = &num2;
 *ptr +=2;

 const int* ptr2 = &num;
 ptr2 = &num2;
 *ptr2 +=2;

 int * const ptr3 = &num;
 ptr3 = &num2;
 *ptr3 += 2;
}