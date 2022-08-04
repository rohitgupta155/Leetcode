

int addDigits(int num){
  if(num<10)
      return num;
    return num-9*abs((num-1)/9);
}