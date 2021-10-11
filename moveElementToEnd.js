function moveElementToEnd(array, toMove) {
	let i = 0, j = array.length - 1;
	
	while(i <= j){
		let start = array[i];
		let end = array[j];
		
		if(start === toMove && end != toMove){
			array[j] = start;
			array[i] = end;
			i++;
			j--;
		}
		else if (start === toMove && end === toMove){
			j--;
		}
		else {
			i++;
		}
	}
	return array;
}

// Do not edit the line below.
exports.moveElementToEnd = moveElementToEnd;
