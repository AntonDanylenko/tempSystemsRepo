int main(){
  int sumSquares = 0;
  int squareSums = 0;
  for (int x=1; x<101; x++){
    sumSquares+=x*x;
    squareSums+=x;
  }
  squareSums*=squareSums;
  int answer = squareSums-sumSquares;
  printf("Answer: %d\n", answer);
  return answer;
}
