function longestPeak(array) {
	let maxPeakLength = 0;
	let currentPeakLength = 0;
	
	// first and Last element can't be a peak
	for(let i = 1; i < array.length-1; i++){ 
		// consider each integer as a peak
		let current = array[i];
		currentPeakLength = 0
		// When a peak is found, count the length
		if(array[i-1] < current && array[i+1] < current) {
			console.log(current)
			currentPeakLength = 1;
			let j = i-1;
			while(j >= 0 && array[j] < array[j+1]){
				currentPeakLength++;
				j--;
			}
			let k = i+1;
			while(k < array.length && array[k] < array[k-1]){
				currentPeakLength++;
				k++;
			}
			if(currentPeakLength > maxPeakLength){
				maxPeakLength = currentPeakLength;
			}
		}
	}
	return maxPeakLength;
}

// Do not edit the line below.
exports.longestPeak = longestPeak;
