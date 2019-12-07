/*
 *给定一个由整数组成的非空数组所表示的非负整数，在该数的基础上加一。

 最高位数字存放在数组的首位， 数组中每个元素只存储一个数字。

 你可以假设除了整数 0 之外，这个整数不会以零开头。

 示例 1:

 输入: [1,2,3]
 输出: [1,2,4]
 解释: 输入数组表示数字 123。
 示例 2:

 输入: [4,3,2,1]
 输出: [4,3,2,2]
 解释: 输入数组表示数字 4321。

 来源：力扣（LeetCode）
 链接：https://leetcode-cn.com/problems/plus-one
 著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
 *
 * */

#include "util.h"
/**
 *  * Note: The returned array must be malloced, assume caller calls free().
 *   */
int* plusOne(int* digits, int digitsSize, int* returnSize){
	int i = 0;
	int temp = 1;
	int* result = malloc(digitsSize * sizeof(int));
	int start = 0;
	*returnSize = digitsSize;
	for (i = digitsSize - 1; i >= 0; i--) {
		if (temp) {
			digits[i]++;
			if (digits[i] == 10) {
				digits[i] = 0;
			} else {
				temp = 0;
				break;
			}
		}
	}
	if (i < 0 && temp) {
		result = malloc((digitsSize + 1) * sizeof(int));
		*returnSize = digitsSize + 1;
		result[0] = 1;
		start = 1;
	}
	for(i = 0; i < digitsSize; i++) 
		result[start++] = digits[i];
	printfArray(result, *returnSize);
	return result;
}

int main() {
//	int a[3] = {1, 2, 3};
//	int a[4] = {4, 3, 2, 1};
	int digits[1] = {9};	
	
//	int digitsSize = 3;
//	int digitsSize = 4;
	int digitsSize = 1;

	int returnSize = 0;

	printfArray(plusOne(digits, digitsSize, &returnSize), returnSize);
	
	return 0;
}
