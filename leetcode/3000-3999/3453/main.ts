type InputSquare = [number, number, number];

class Square {
  public readonly bottom: number;
  public readonly top: number;
  public readonly square: number;

  constructor([x, y, l]: InputSquare) {
    this.bottom = y;
    this.top = y + l;
    this.square = l * l;
  }

  public getBottomSquare(d: number) {
    if (d <= this.bottom) return 0;
    if (this.top <= d) return this.square;
    return this.square * (d - this.bottom) / (this.top - this.bottom);
  }
}


function separateSquares(inputSquares: InputSquare[]): number {
  const squares = inputSquares.map(inputSquare => new Square(inputSquare));

  const {top, bottom, total} = squares.reduce(
    (acc, s) => ({top: Math.max(s.top, acc.top), bottom: Math.min(s.bottom, acc.bottom), total: s.square + acc.total}), 
    {top: -Infinity, bottom: Infinity, total: 0});


  const binarySearch = (bottom: number, bottomValue: number, top: number, topValue: number) => {
    if (top - bottom < 1E-6) {
      return bottom;
    }
    const middle = (top + bottom) / 2;
    const middleValue = squares.reduce((acc, s) => acc + s.getBottomSquare(middle), 0);
    // console.log(`${bottom} (${bottomValue}) ... ${middle}(${middleValue}) ... ${top} (${topValue})` );
    if (middleValue >= total / 2) {
      return binarySearch(bottom, bottomValue, middle, middleValue);
    } else {
      return binarySearch(middle, middleValue, top, topValue);
    }
  };


  return binarySearch(bottom, 0, top, total);
};
