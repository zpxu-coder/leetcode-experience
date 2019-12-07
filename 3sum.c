/*
 * 给定一个包含 n 个整数的数组 nums，判断 nums 中是否存在三个元素 a，b，c ，使得 a + b + c = 0 ？找出所有满足条件且不重复的三元组。
 *
 * 注意：答案中不可以包含重复的三元组。
 *
 * 例如, 给定数组 nums = [-1, 0, 1, 2, -1, -4]，
 *
 * 满足要求的三元组集合为：
 * [
 *   [-1, 0, 1],
 *     [-1, -1, 2]
 *     ]
 *
 *     来源：力扣（LeetCode）
 *     链接：https://leetcode-cn.com/problems/3sum
 *     著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
 * */



/**
 *  * Return an array of arrays of size *returnSize.
 *   * The sizes of the arrays are returned as *returnColumnSizes array.
 *    * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 *     */

#include "util.h"

int** threeSum(int* nums, int numsSize, int* returnSize, int** returnColumnSizes){
	int** 2Darray = malloc(sizeof(int**));
	int size = 0;
	int i, j, k;
	sort(nums, numsSize, sizeof(int), compFromSmall);
	
	for(i = 0, j = i + 1, k = numsSize -1; i < numsSize; i++) {
		int smallFlag = 0, biggerFlag = 0;

		while(-nums[i] != nums[++j] + nums[--k]) {
				
			if (-nums[i] < nums[j] + nums[k]) {
				j++;
				smallFlag = 1;
				biggerFlag = 0;
			} else if (-nums[i] > nums[j] + nums[k]) {
				k--:
				biggerFlag = 1;
				smallFlag = 0;
			} 
		}
		if(smallFlag || biggerFlag)
		while(j < k) {
			if (-nums[i] == nums[j] + nums[k]) {
				int* column = malloc(sizeof(int) * 3);
				column[0] = nums[i];
				column[1] = nums[j];
				column[2] = nums[k];
		        2Darray[size++] = column;
			} else if (-nums[i] < nums[j] + nums[k] && smallFlag) {
				j++;
				biggerFlag = 0;
			} else if (-nums[i] > nums[j] + nums[k] && biggerFlag) {
				k--;
				smallFlag = 0;
			}
		}
	}

	for(i = 0; i < sizes)
	if(!size)
		return NULL;
	return 2Darray;
}

int main() {
	return 0;
}
