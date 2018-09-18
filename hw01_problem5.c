int not_divisible(int num){
  for(int x=1;x<21;x++){
    if(num%x!=0){
      return 1;
    }
  }
  return 0;
}

int main(){
  int answer = 1;
  while(not_divisible(answer)){
    answer++;
  }
  printf("Answer: %d\n", answer);
  return answer;
}
