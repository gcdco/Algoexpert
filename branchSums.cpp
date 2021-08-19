using namespace std;

// This is the class of the input root. Do not edit it.
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

vector<int> branchSums(BinaryTree *root) {
	// your code goes below
	if (root->left == nullptr && root->right == nullptr){
		return {root->value};
	}
	vector<int> leftBranches;
	vector<int> rightBranches;
	vector<int> totalBranches; 
	if(root->left != nullptr){ leftBranches = branchSums(root->left); }
	if(root->right != nullptr){ rightBranches = branchSums(root->right); }
	for(auto l : leftBranches){
		totalBranches.push_back(l + root->value);
	}
	for(auto r : rightBranches){
		totalBranches.push_back(r + root->value);
	}
  return totalBranches;
}
