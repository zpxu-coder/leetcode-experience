/*
 * 给定一个无重复元素的数组 candidates 和一个目标数 target ，找出 candidates 中所有可以使数字和为 target 的组合。
 *
 * candidates 中的数字可以无限制重复被选取。
 *
 * 来源：力扣（LeetCode）
 * 链接：https://leetcode-cn.com/problems/combination-sum
 * 著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
 * 
 * 回溯法写法思路：
 * 1. 定义全局结果数组
 * 2. 调用递归函数
 * 3. 返回全局结果数组
 * 4. 定义递归函数
 *   1) 参数，动态变化，一般为分支结果、限制条件等
 *     2) 终止条件，将分支结果添加到全局数组
 *       3) 剪枝条件
 *         4) 调用递归逐步产生结果，回溯搜索下一结果
 * */

/**
 *  * Return an array of arrays of size *returnSize.
 *   * The sizes of the arrays are returned as *returnColumnSizes array.
 *    * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 *     */

#include <stdio.h>

int* find(int* candidates, int candidatesSize, int target, int* column, int* columnSize) {
    int i = 0;
	int new_target = target;
	int* new_column = malloc((columnSize + 1) * sizeof(int));
	memcpy(new_column, column, columnSize * sizeof(int));
	if (target == 0)
		return column;
	for (i = 0; i < candidatesSize; i++) {
		new_target = target - candidates[i];
		if (new_target >= 0) {
			new_column[columnSize++] = candidates[i];
			find(candidates, candidatesSize, new_target, new_column, columnSizes);
		}
	}
}
int** combinationSum(int* candidates, int candidatesSize, int target, int* returnSize, int** returnColumnSizes){
	int** res = malloc(sizeof(int*));
	find
}

int main() {
	int candidates[] = {2,3,6,7};
	int candidatesSize = 4;
	int target = 7;
	//int candidates[] = {2,3,5};
	//int candidatesSize = 3;
	//int target = 8;
	int returnSize = 0;
	int** returnColumnSizes;
	returnColumnSizes = combinationSum(candidates, candidatesSize, target, &returnSize, returnColumnSizes);

	return 0;
}
