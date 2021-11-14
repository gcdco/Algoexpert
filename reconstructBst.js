// This is an input class. Do not edit.
class BST {
  constructor(value, left = null, right = null) {
    this.value = value;
    this.left = left;
    this.right = right;
  }
}

function reconstructBst(preOrderTraversalValues) {
  
	// Base case
	if(preOrderTraversalValues.length === 0){
		return null;
	}
	const currValue = preOrderTraversalValues[0];
	let rightSubtreeIdx = preOrderTraversalValues.length;
	for(let i = 1; i < preOrderTraversalValues.length; i++){
		if(preOrderTraversalValues[i] >= currValue){
			rightSubtreeIdx = i;
			break;
		}
	}
	
	const leftSubtree = reconstructBst(preOrderTraversalValues.slice(1, rightSubtreeIdx));
	const rightSubtree = reconstructBst(preOrderTraversalValues.slice(rightSubtreeIdx));
	
	let bst = new BST(currValue, leftSubtree, rightSubtree);

  return bst;
}

// Do not edit the lines below.
exports.BST = BST;
exports.reconstructBst = reconstructBst;
