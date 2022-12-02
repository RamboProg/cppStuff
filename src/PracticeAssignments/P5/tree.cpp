#include <iostream>
using namespace std;

typedef struct TreeNode{    
    int data;
    struct TreeNode* left;
    struct TreeNode* right;
}TreeNode;


TreeNode* CreateTreeNode(int data){
    TreeNode* ptr = (TreeNode*) malloc (sizeof(TreeNode));
    (*ptr).data = data ;
    (*ptr).left = NULL ;
    (*ptr).right = NULL ;
    return ptr;
}

void DeleteTreeNode(TreeNode* ptr){
if( ptr == NULL) return;
DeleteTreeNode( (*ptr).right);
DeleteTreeNode( (*ptr).left);
free( ptr ); //this is the actual line in which tree nodes are removed from memory
}

typedef struct{
TreeNode* root;
}Tree;

//Question 1-a
Tree* CreateTree(){
    Tree* ptr = (Tree*) malloc(sizeof(Tree));
    (*ptr).root = NULL;
    return ptr;
}

//Question 1-b
void DeleteTree(Tree* ptr){
    DeleteTreeNode((*ptr).root);
    free(ptr);
}

//Question 1-c
int GetTreeHeight(Tree* treePtr){
    return GetTreeHeightHelper((*treePtr).root);
}

int GetTreeHeightHelper(TreeNode* ptr){
    if(ptr == NULL) return -1;
    int rightHeight = GetTreeHeightHelper((*ptr).right);
    int leftHight = GetTreeHeightHelper((*ptr).left);
    if(rightHeight > leftHight) return 1 + rightHeight;
    return 1 + leftHight;
}


