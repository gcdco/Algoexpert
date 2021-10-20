function firstDuplicateValue(array) {
  let hasNumber = new Set();
	
	for(let i = 0; i < array.length; i++){
		if(hasNumber.has(array[i])){
			return array[i];
		}
		hasNumber.add(array[i]);	
	}
	return -1;
}

// Do not edit the line below.
exports.firstDuplicateValue = firstDuplicateValue;
