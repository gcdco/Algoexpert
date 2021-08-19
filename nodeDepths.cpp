using namespace std;

class BinaryTree {
public:
  int value;
  BinaryTree *left;
  BinaryTree *right;

  BinaryTree(int value) {
    this->value = value;
    left = nullptr;
    right = nullptr;
  }
};

int calculateNodeDepth(BinaryTree *root, int depth);

int nodeDepths(BinaryTree *root) {
  // Write your code here.
  int depth = calculateNodeDepth(root, 0);
	return depth;
}

int calculateNodeDepth(BinaryTree *root, int depth){
	if (root == nullptr){ return 0; }
	int totalAtNode = depth;
	if(root->left != nullptr){
		totalAtNode += calculateNodeDepth(root->left, depth + 1);
	}
	if(root->right != nullptr){
		totalAtNode += calculateNodeDepth(root->right, depth + 1);
	}
	return totalAtNode;
}
