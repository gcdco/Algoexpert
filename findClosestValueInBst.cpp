class BST {
public:
  int value;
  BST *left;
  BST *right;

  BST(int val);
  BST &insert(int val);
};

int findValue(BST *tree, int target, int closestValue);
int calculateDistance(int target, int value);

int findClosestValueInBst(BST *tree, int target) {
  // Write your code here.
  return findValue(tree, target, tree->value);
}

int calculateDistance(int target, int value){
	return abs(value - target);
}

int findValue(BST *tree, int target, int closestValue){
	int child = tree->value;
	if(target < tree->value && tree->left != nullptr){
		child = findValue(tree->left, target, closestValue);
	}
	else if(target > tree->value && tree->right != nullptr){
		child = findValue(tree->right, target, closestValue);
	}
	
	int childDistance = calculateDistance(target, child);
	int currNodeDistance = calculateDistance(target, tree->value);
	
	if(currNodeDistance < childDistance){
		child = tree->value;
		childDistance = calculateDistance(target, child);
	}
	
	int closestValueDistance = calculateDistance(target, closestValue);
	
	if(childDistance < closestValueDistance){
		closestValue = child;
	}
	cout << tree->value << " ";
	return closestValue;
}
