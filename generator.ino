void generator(){
  randNumber = random(1,5); 
  if (randNumber == lastNumber){ generator(); }
  else { lastNumber = randNumber; }
}
