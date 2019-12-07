#include <stdio.h>
#include <stdlib.h>

#define sort  qsort
#define TRUE  1
#define FALSE 0
typedef int   bool;


struct ListNode {
    int val;
    struct ListNode *next;
};

struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};

int compFromSmall(const void* a, const void* b);
int compFromBig(const void* a, const void* b);

/*
 * if array a's value is equal to array b
 * */
bool equalArray(int* column, int columnSize, int* column_b, int columnSize_b);

/*
 * if a Integer in the array, return the index, else return -1
 *
 * @param:
 *
 * a		    the integer
 * column       the array need to be searched
 * columnSize	the size of the array
 *
 * @return
 *
 * index		if data in the columns
 * -1			else
 *
 * */
int aInArray(int a, int* column, int columnSize);

/*
 *  if an array in a 2D-Array, return the index, else return -1
 *	
 *  @param:
 *
 *  column			the array which want to find
 *  columnSize		the size of this array
 *  columns			the 2D array being searched
 *  columnsSize		the size of each dimension of the 2D array 
 *  columns_Size		dimensions of this 2D array
 *
 *  return:
 * 
 *	index  if column in the columns
 *  -1     else
 */
int in2DArray(int* column, int columnSize, int** columns, int* columnsSize, int columns_Size);

void printfLinkedList(struct ListNode* first);

/*
 *  printf an array 
 *	
 *  @param:
 *
 *  array		the array which want to printf 
 *  size		the size of the array
 *
 *  return:
 * 
 */
void printfArray(int* array, int size);
