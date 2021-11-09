function minHeightBst(array) {
	return minHeightBstHelper(array, null, 0, array.length-1);
}

function minHeightBstHelper(array, bst, start, end) {
	if(end < start) return;
	
	const middle = Math.floor((start + end) / 2)
	const currentValue = array[middle];
	if(bst === null){
		bst = new BST(currentValue);
	}
	else {
		bst.insert(currentValue);
	}
	minHeightBstHelper(array, bst, start, middle-1);
	minHeightBstHelper(array, bst, middle+1, end);
	return bst;
	
}

class BST {
  constructor(value) {
    this.value = value;
    this.left = null;
    this.right = null;
  }

  insert(value) {
    if (value < this.value) {
      if (this.left === null) {
        this.left = new BST(value);
      } else {
        this.left.insert(value);
      }
    } else {
      if (this.right === null) {
        this.right = new BST(value);
      } else {
        this.right.insert(value);
      }
    }
  }
}

// Do not edit the line below.
exports.minHeightBst = minHeightBst;
