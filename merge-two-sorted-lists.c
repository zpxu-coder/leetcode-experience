/*
 * 将两个有序链表合并为一个新的有序链表并返回。新链表是通过拼接给定的两个链表的所有节点组成的。 
 *
 * 示例：
 *
 * 输入：1->2->4, 1->3->4
 * 输出：1->1->2->3->4->4
 *
 * 来源：力扣（LeetCode）
 * 链接：https://leetcode-cn.com/problems/merge-two-sorted-lists
 * 著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
 *
 * PASS
 * */


#include "util.h"

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 **/


struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2){
	int firstEnd = 0, secondEnd = 0;
	struct ListNode* l3;
	struct ListNode* cur;
	if(!l1)
		return l2;
	else if(!l2)
		return l1;
	if(l1->val <= l2->val) {
		l3 = l1;
		l1 = l1->next;
	} else {
		l3 = l2;
		l2 = l2->next;
	}
	cur = l3;
	while(l1) {
		if(!l2) {
			cur->next = l1;
			break;
		}
		if (l1->val <= l2->val) {
			cur->next = l1;
			l1 = l1->next;
		} else {
			cur->next = l2;
			l2 = l2->next;
		}
		cur = cur->next;
		printf("l1\n");
	}
	if (l2) {
		cur->next = l2;
	}
	return l3;
}

int main() {
	struct ListNode* l1 = (struct ListNode*)malloc(sizeof(struct ListNode));
	struct ListNode* l2 = (struct ListNode*)malloc(sizeof(struct ListNode));
	struct ListNode* l3 = (struct ListNode*)malloc(sizeof(struct ListNode));
	struct ListNode* l4 = (struct ListNode*)malloc(sizeof(struct ListNode));
	struct ListNode* l5 = (struct ListNode*)malloc(sizeof(struct ListNode));
	struct ListNode* l6 = (struct ListNode*)malloc(sizeof(struct ListNode));
	struct ListNode* l7 = (struct ListNode*)malloc(sizeof(struct ListNode));
	l1->val = 1;
	l1->next = l2;
	l2->val = 2;
	l2->next = l3;
	l3->val = 4;
	l3->next = NULL;
	l4->val = 1;
	l4->next = l5;
	l5->val = 3;
	l5->next = l6;
	l6->val = 4;
	l6->next = l7;
	l7->val = 5;
	l7->next = NULL;
	struct ListNode* firstLinkedList = l1;
	struct ListNode* secondLinkedList = l4;
	printfLinkedList(firstLinkedList);
	printf("\n");
	printfLinkedList(secondLinkedList);
	printf("\n");
	struct ListNode* thirdLinkedList = mergeTwoLists(firstLinkedList, secondLinkedList);
	printfLinkedList(thirdLinkedList);
	return 0;
}
