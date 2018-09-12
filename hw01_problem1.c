int main(){
  int answer = 0;
  for(int x=0; x<1000; x++){
    if(x%3=0 || x%5=0){
      answer += x;
    }
  }
  return answer;
}
