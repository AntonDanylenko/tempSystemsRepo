bool not_divisible(int num){
  for(x=1;x<21;x++){
    if(num%x!==0){
      return false;
    }
  }
  return true;
}

int main(){
  int answer = 0;
  while(not_divisible(answer)){
    answer++;
  }
  return answer;
}
