// This is an input class. Do not edit.
class LinkedList {
  constructor(value) {
    this.value = value;
    this.next = null;
  }
}

function sumOfLinkedLists(linkedListOne, linkedListTwo) {
	// % 10 and for digit
	// add 10 to remainder if greater than 9
	// add the digit to new linked list
	let listOneNode = linkedListOne;
	let listTwoNode = linkedListTwo;
	let carry = 0;
	let sumOfLinkedLists = new LinkedList(-1);
	let head = sumOfLinkedLists;
	while(listOneNode !== null || listTwoNode !== null){
		let numberOne = 0;
		let numberTwo = 0;
		if(listOneNode !== null){
			numberOne = listOneNode.value;			
		}
		if(listTwoNode !== null){
			numberTwo = listTwoNode.value;		
		}
		
		let interimSum = numberOne + numberTwo;
		console.log(interimSum)
		interimSum += carry;
		let digit = interimSum % 10;
		console.log(interimSum, digit)
		if(interimSum > 9){
			carry = 1;
		}
		else{
			carry = 0;
		}
		// add to linked list
		if(head.value === -1){
			head.value = digit;	
		}
		else {
			head.next = new LinkedList(digit);
			head = head.next;
		}
		
		// update linked list
		if(listOneNode !== null){listOneNode = listOneNode.next};
		if(listTwoNode !== null){listTwoNode = listTwoNode.next};
	}
	if(carry === 1){
		head.next = new LinkedList(carry);
		head = head.next;
	}
  return sumOfLinkedLists;
}

// Do not edit the lines below.
exports.LinkedList = LinkedList;
exports.sumOfLinkedLists = sumOfLinkedLists;
