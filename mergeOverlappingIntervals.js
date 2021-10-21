function mergeOverlappingIntervals(array) {
	array.sort((a, b) => a[0] - b[0]);
	console.log(array)
	let startInterval = array[0][0];
	let endInterval = array[0][1];
	const intervals = [];
	
	// Look ahead so end 1 element early
	for(let i = 0; i < array.length-1; i++){
		if(endInterval < array[i+1][0]){
			intervals.push([startInterval,endInterval]);
			startInterval = array[i+1][0];
			endInterval = array[i+1][1];
		}
		else if(array[i+1][1] > endInterval){
			endInterval = array[i+1][1];
		}
	}
	intervals.push([startInterval,endInterval]);
  return intervals;
}

// Do not edit the line below.
exports.mergeOverlappingIntervals = mergeOverlappingIntervals;
