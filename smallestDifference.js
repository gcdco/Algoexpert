function smallestDifference(arrayOne, arrayTwo) {
	arrayOne.sort((a, b) => (a-b));
	arrayTwo.sort((a, b) => (a-b));
	
	let ans = [];
	let diff = Infinity;
	let i = 0, j = 0;
	
	while(i < arrayOne.length && j < arrayTwo.length){
		let numberOne = arrayOne[i];
		let numberTwo = arrayTwo[j];
		let thisDiff = Math.abs(numberOne - numberTwo);
		if(thisDiff < diff){
			diff = thisDiff;
			ans = [numberOne, numberTwo];
		}
		if(numberOne < numberTwo){
			i++;
		}
		else{
			j++;
		}
	}
	
	return ans;
}

// Do not edit the line below.
exports.smallestDifference = smallestDifference;
