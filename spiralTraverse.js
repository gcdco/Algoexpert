function spiralTraverse(array) {
  const ans = [];
	let yend = array.length-1;
	let xend = array[0].length-1;
	let ystart = 0;
	let xstart = 0;
	
	while(xstart <= xend && ystart <= yend){
		//right ===>
		for(let x = xstart; x <= xend; x++){
			ans.push(array[ystart][x])
		}
		ystart++;
		// down
		for(let y = ystart; y <= yend; y++){
			ans.push(array[y][xend]);
		}
		xend--;
		//left <===
		if(ystart <= yend){
			for(let x = xend; x >= xstart; x--){
				ans.push(array[yend][x]);
			}
			yend--;	
		}
		
		//up ^
		if(xstart <= xend){
			for(let y = yend; y >= ystart; y--){
				ans.push(array[y][xstart]);
			}
			xstart++;	
		}
	}
	return ans;
}

// Do not edit the line below.
exports.spiralTraverse = spiralTraverse;
