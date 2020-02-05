/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
// Written by Lim Zi Chung 
void main()
{
    int array[10] = {100, 2, 5, 13, 29, 68, 87, 4, 17, 45, 54} ;
    int temp, i;
    for (i = 0 ; i < 10 ; i++)
    {
        for (int j = i + 1 ; j < 10 ; j++)
        {
        if (array[i] > array[j])
          {
            temp = array[i];
            array[i] = array[j];
            array[j] = temp;
        }
        }
    }
    
    for (i = 0 ; i < 10 ; i++)
    {
           printf(" %d", array[i]);
    }
    
}
