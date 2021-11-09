// This is an input class. Do not edit.
class BST {
  constructor(value) {
    this.value = value;
    this.left = null;
    this.right = null;
  }
}

function findKthLargestValueInBst(tree, k) {
	let inOrderArray = []
	// Get the nodes inOrder traversal
	inOrderTraversal(tree, inOrderArray);
	return inOrderArray[inOrderArray.length-k]
}

function inOrderTraversal(tree, inOrderArray){
	if(tree === null){ return }
	
	inOrderTraversal(tree.left, inOrderArray)
	inOrderArray.push(tree.value);
	inOrderTraversal(tree.right, inOrderArray)
}

// Do not edit the lines below.
exports.BST = BST;
exports.findKthLargestValueInBst = findKthLargestValueInBst;
// This is an input class. Do not edit.
class BST {
  constructor(value) {
    this.value = value;
    this.left = null;
    this.right = null;
  }
}

function findKthLargestValueInBst(tree, k) {
	let inOrderArray = []
	// Get the nodes inOrder traversal
	inOrderTraversal(tree, inOrderArray);
	return inOrderArray[inOrderArray.length-k]
}

function inOrderTraversal(tree, inOrderArray){
	if(tree === null){ return }
	
	inOrderTraversal(tree.left, inOrderArray)
	inOrderArray.push(tree.value);
	inOrderTraversal(tree.right, inOrderArray)
}

// Do not edit the lines below.
exports.BST = BST;
exports.findKthLargestValueInBst = findKthLargestValueInBst;
