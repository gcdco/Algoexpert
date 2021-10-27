class MinHeap {
  constructor(array) {
    this.heap = this.buildHeap(array);
		//this.length = 0;
  }

  buildHeap(array) {
		const firstParentIdx = Math.floor((array.length-2) / 2);
		for(let currentIdx = firstParentIdx; currentIdx >= 0; currentIdx--){
			this.siftDown(currentIdx, array.length-1, array);
		}
		return array;
  }

  siftDown(currentIdx, endIdx, heap) {
		let childOneIdx = this.getLeftChildIndex(currentIdx)
		while(childOneIdx <= endIdx){
			const childTwoIdx = currentIdx * 2 + 2 <= endIdx ? currentIdx * 2 +2 : -1;
			let idxToSwap;
			if(childTwoIdx !== -1 && heap[childTwoIdx] < heap[childOneIdx]){
				idxToSwap = childTwoIdx;
			}
			else{
				idxToSwap = childOneIdx;
			}
			if(heap[idxToSwap] < heap[currentIdx]){ 
				this.swap(currentIdx, idxToSwap, heap); 
				currentIdx = idxToSwap;
				childOneIdx = currentIdx * 2 + 1;
			}
			else { return; }
		}
  }

  siftUp(index, heap) {
		let parentIdx = Math.floor((index-1) / 2);
		while(this.hasParent(index) && this.parent(index) > this.heap[index]){
			this.swap(index, parentIdx, heap);
			index = parentIdx;
			parentIdx = this.getParentIndex(index);
		}
  }

  peek() {
		return this.heap[0];
  }

  remove() {
		this.swap(0, this.heap.length - 1, this.heap)
		const item = this.heap.pop();
		this.siftDown(0, this.heap.length - 1, this.heap);
		return item;
  }

  insert(value) {
		this.heap.push(value)
		this.siftUp(this.heap.length - 1, this.heap);
  }
	//
	swap(indexOne, indexTwo, heap){
		let temp = heap[indexOne]
		heap[indexOne] = heap[indexTwo]
		heap[indexTwo] = temp;
	}
	getLeftChildIndex(index){
		return index*2 + 1;
	}
	
	getRightChildIndex(index){
		return index*2 + 2;
	}
	
	getParentIndex(index){
		return Math.floor((index-1)/2);
	}
	
	hasLeftChild(index){
		return this.getLeftChildIndex(index) < this.heap.length;
	}
	
	hasRightChild(index){
		return this.getRightChildIndex(index) < this.heap.length;	
	}
	
	hasParent(index){
		return this.getParentIndex(index) >= 0;
	}
	
	leftChild(index){
		return this.heap[this.getLeftChildIndex(index)];
	}
	
	rightChild(index){
		return this.heap[this.getRightChildIndex(index)];
	}
	
	parent(index){
		return this.heap[this.getParentIndex(index)];
	}

}

// Do not edit the line below.
exports.MinHeap = MinHeap;
