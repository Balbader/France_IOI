const numRows = 9;
const numColumns = 19;
const letters = {
	/* [starting row, starting column, ending row, ending column] */
	o   : [1, 3, 7, 5],
	'-' : [5, 2, 6, 16],
	u   : [1, 12, 7, 14],
	s   : [2, 1, 2, 16]
};

const grid = [];
for (let rowIndex = 0; rowIndex < numRows; rowIndex++) {
	const row = Array(numColumns);
	for (let columnIndex = 0; columnIndex < numColumns; columnIndex++) {
		let letterToPrint = '.';
		for (const [letter, [startingRow, startingColumn, endingRow, endingColumn]] of Object.entries(letters)) {
			if (rowIndex >= startingRow && rowIndex <= endingRow && columnIndex >= startingColumn && columnIndex <= endingColumn) {
				letterToPrint = letter;
			}
		}
		row[columnIndex] = letterToPrint;
	}
	grid.push(row);
};

for (const row of grid) {
	console.log(row.join(''));
};
