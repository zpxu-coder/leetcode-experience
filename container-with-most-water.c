/*
 给定 n 个非负整数 a1，a2，...，an，每个数代表坐标中的一个点 (i, ai) 。在坐标内画 n 条垂直线，垂直线 i 的两个端点分别为 (i, ai) 和 (i, 0)。找出其中的两条线，使得它们与 x 轴共同构成的容器可以容纳最多的水。

 来源：力扣（LeetCode）
 链接：https://leetcode-cn.com/problems/container-with-most-water
 著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
 
 */
#include <stdio.h>

int min(int a, int b) {
	return a < b ? a : b;
}

int maxArea(int* height, int heightSize){
    int maxArea = 0, currectArea = 0;
	int low = 0, high = heightSize - 1;

	while(low < high) {
		currectArea = (high - low) * min(height[low], height[high]);
		if (maxArea < currectArea) 
			maxArea = currectArea;
		height[low] <= height[high] ? low++ : high--;
	}

	return maxArea;
}

int main() {
	int array[] = {1,8,6,2,5,4,8,3,7};
	printf("%d", maxArea(array, 9));
	return 0;
}
