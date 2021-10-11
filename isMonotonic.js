function isMonotonic(array) {
	if(array.length <= 1) return true;
	
	let increasing = false;
	let decreasing = false;
	
	let prev = array[0];
	for(let i = 1; i < array.length; i++){
		let current = array[i];
		if(prev > current){
			decreasing = true;
		}
		else if(prev < current){
			increasing = true;
		}	
		prev = current;
	}
	return (decreasing === true && increasing === false) || 
					(increasing === true && decreasing === false) ||
					(increasing === false && decreasing === false)
}

// Do not edit the line below.
exports.isMonotonic = isMonotonic;
