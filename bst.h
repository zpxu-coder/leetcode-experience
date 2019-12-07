#include "util.h"


/**
 * 插入结点
 * @param z 待插入结点
 * @return 根结点
*/
void insert(struct TreeNode* node);

/**
 * 中序遍历二叉搜索树
 * @param node 树中结点
 * @return 无
*/
void inorderTreeWalk(struct TreeNode* node);

/**
 * 二叉搜索树中查找一个具有指定关键字的结点
 * @param node 树中结点
 * @param k 关键字
 * @return 无
*/
struct TreeNode* search(struct TreeNode* node, int k);

/**
 * 二叉搜索树中关键字最小的结点
 * @param x 树中结点
 * @return 关键字最小的结点
*/
struct TreeNode* minimum(struct TreeNode* node);

/**
 * 二叉搜索树中关键字最大的结点
 * @param x 树中结点
 * @return 关键字最大的结点
*/
struct TreeNode* maximum(struct TreeNode* node);

/**
 * 结点的后继（中序遍历）
 * @param x 树中结点
 * @return 结点的后继
*/
struct TreeNode* successor(struct TreeNode* node);

/**
 * 结点的先驱（代码与结点的后继对称）
 * @param x 树中结点
 * @return 结点的先驱
*/
struct TreeNode* predecessor(struct TreeNode* node);

/**
 * 二叉搜索树内移动子树（用另一棵子树替换一棵子树，并成为其父结点的孩子结点）
 * @param u 被替换子树的根结点
 * @param v 替换子树的根结点
 * @return 无
*/
void transplant(struct TreeNode* u, struct TreeNode* v);

/**
 * 删除指定结点
 * @param z 待删除结点
 * @return 无
 * */
void delete(struct TreeNode* node);
