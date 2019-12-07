#include "util.h"

int compFromSmall(const void* a, const void* b) {
	return *(int*)a - *(int*)b;
}

int compFromBig(const void* a, const void* b) {
	return *(int*)b - *(int*)a;
}

bool equalArray(int* column, int columnSize, int* column_b, int columnSize_b) {
	int i = 0;
	if (columnSize != columnSize_b) 
		return FALSE;
    sort(column, columnSize, sizeof(int), compFromSmall);
	sort(column_b, columnSize_b, sizeof(int), compFromSmall);
    for (i = 0; i < columnSize; i++) {
	    if (column[i] != column_b[i])
		    return FALSE;
	}
	return TRUE;
}

int aInArray(int a, int* column, int columnSize) {
	int i = 0;
	sort(column, columnSize, sizeof(int), compFromSmall);
	for (i = 0; i < columnSize; i++) {
		if (column[i] == a)
			return i;
	}
	return -1;
}

int in2DArray(int* column, int columnSize, int** columns, int* columnsSize, int columns_Size) {
	int i = 0, j = 0;
	for(i = 0; i < columns_Size; i++) {
		if (equalArray(column, columnSize, columns[i], columnsSize[i]))
		    return i;
	}
	return -1;
}

void printfLinkedList(struct ListNode* first) {
	while(first) {
		printf("%d\t", first->val);
		first = first->next;
	}
}

void printfArray(int* array, int size) {
	int i = 0;
	for (i = 0; i < size; i++)
		printf("%d\t", array[i]);
}
