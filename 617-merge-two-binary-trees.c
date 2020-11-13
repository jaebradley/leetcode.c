struct TreeNode {
  int val;
  struct TreeNode *left;
  struct TreeNode *right;
};

struct TreeNode* mergeTrees(struct TreeNode* t1, struct TreeNode* t2) {
  if (t2 == 0) {
    return t1;
  }

  if (t1 == 0) {
    return t1;
  }

  struct TreeNode mergedNode = {
      .val = t1->val + t2->val,
      .left = mergeTrees(t1->left, t2->left),
      .right = mergeTrees(t1->right, t2->right)
  };

  return &mergedNode;
}
