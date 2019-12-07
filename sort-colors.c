#include <stdio.h>

void sortColors(int* nums, int numsSize){
	      int i = 0, j = numsSize -1, curr = i;
		         while (curr <= j && i < j) {
					            int temp;
								           if(nums[curr] == 1){
											                  curr++;
															                 continue;
																			            }
										              if (nums[curr] == 0) {
														                 temp = nums[i];
																		                nums[i] = nums[curr];
																						              nums[curr] = temp;
																									                i++;
																													               curr++;
																																             } else if (nums[curr] == 2) {
																																				               temp = nums[j];
																																							                 nums[j] = nums[curr];
																																											               nums[curr] = temp;
																																														                 j--;
																																																		           } 
													        }
				   }
int main() {
	int nums[2] = {0, 0};
	int numsSize = 2, i = 0;
	sortColors(nums, numsSize);
	for (i = 0; i < numsSize; i++) {
		printf("%d\t", nums[i]);
	}
	return 0;
}
