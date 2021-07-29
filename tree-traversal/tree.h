#ifndef TREE_H_
#define TREE_H_

#include <algorithm>
#include <queue>
#include <iostream>

using namespace std;

struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode() : val(0), left(nullptr), right(nullptr) {}
     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

TreeNode* create(int data) {
    TreeNode* newNode = new TreeNode();
    if (!newNode) {
        return nullptr;
    }
    newNode->val = data;
    newNode->left = newNode->right = nullptr;
    return newNode;
}


     TreeNode* insert(TreeNode* tree, int data) {
         if (!tree) {
             tree = new TreeNode(data);
             return tree;
         }

         queue<TreeNode* > q;
         q.push(tree);

         while (!q.empty()) {
             TreeNode* temp = q.front();
             q.pop();

             if (temp->left) {
                 q.push(temp->left);
             }
             else {
                 temp->left = insert(tree->left, data);
                 return tree;
             }

             if (temp->right) {
                 q.push(temp->right);
             }
             else {
                 temp->right = insert(tree->right, data);
                 return tree;
             }
             
         }

     }

     void printTree(TreeNode* tree) {
         if (!tree) return;
         printTree(tree->left);
         std::cout << tree->val << " ";
         printTree(tree->right);
     }

#endif