/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
class Solution {
  public:
    int height(Node* node) {
        // code here
        if(node==nullptr)return -1;
        int l=1+ height(node->left);
        int r=1+ height(node->right);
        return max(l,r);
    }
};