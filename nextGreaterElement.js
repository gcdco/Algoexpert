function nextGreaterElement(array) {
	let result = Array(array.length).fill(-1);
	console.log(result)
	let stack = []

	for(let i = 0; i < 2 * array.length; i++){
		const idx = i % array.length;
		while(stack.length > 0 && array[stack[stack.length-1]] < array[idx]){
			const top = stack.pop();
			result[top] =  array[idx];
		}
		stack.push(idx);
	}
	
  return result;
}

// Do not edit the line below.
exports.nextGreaterElement = nextGreaterElement;
