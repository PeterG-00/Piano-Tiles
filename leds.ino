void ledStatus(){
  switch (playerOneLedRowThree) {
    case 1: ledState[3][3] = 1; ledState[3][2] = 0; ledState[3][1] = 0; ledState[3][0] = 0; break;
    case 2: ledState[3][3] = 0; ledState[3][2] = 1; ledState[3][1] = 0; ledState[3][0] = 0; break;
    case 3: ledState[3][3] = 0; ledState[3][2] = 0; ledState[3][1] = 1; ledState[3][0] = 0; break;
    case 4: ledState[3][3] = 0; ledState[3][2] = 0; ledState[3][1] = 0; ledState[3][0] = 1; break;} 
                            
  switch (playerOneLedRowTwo) {
    case 1: ledState[2][0] = 1; ledState[2][1] = 0; ledState[2][2] = 0; ledState[2][3] = 0; playerOneLedRowThree = 1; break;
    case 2: ledState[2][0] = 0; ledState[2][1] = 1; ledState[2][2] = 0; ledState[2][3] = 0; playerOneLedRowThree = 2; break;
    case 3: ledState[2][0] = 0; ledState[2][1] = 0; ledState[2][2] = 1; ledState[2][3] = 0; playerOneLedRowThree = 3; break;
    case 4: ledState[2][0] = 0; ledState[2][1] = 0; ledState[2][2] = 0; ledState[2][3] = 1; playerOneLedRowThree = 4; break;}   

  switch (playerOneLedRowOne) {
    case 1: ledState[1][3] = 1; ledState[1][2] = 0; ledState[1][1] = 0; ledState[1][0] = 0; playerOneLedRowTwo = 1; break;
    case 2: ledState[1][3] = 0; ledState[1][2] = 1; ledState[1][1] = 0; ledState[1][0] = 0; playerOneLedRowTwo = 2; break;
    case 3: ledState[1][3] = 0; ledState[1][2] = 0; ledState[1][1] = 1; ledState[1][0] = 0; playerOneLedRowTwo = 3; break;
    case 4: ledState[1][3] = 0; ledState[1][2] = 0; ledState[1][1] = 0; ledState[1][0] = 1; playerOneLedRowTwo = 4; break;} 
    
  switch (randNumber) {
    case 1: ledState[0][0] = 1; ledState[0][1] = 0; ledState[0][2] = 0; ledState[0][3] = 0; playerOneLedRowOne = 1; break;
    case 2: ledState[0][0] = 0; ledState[0][1] = 1; ledState[0][2] = 0; ledState[0][3] = 0; playerOneLedRowOne = 2; break;
    case 3: ledState[0][0] = 0; ledState[0][1] = 0; ledState[0][2] = 1; ledState[0][3] = 0; playerOneLedRowOne = 3; break;
    case 4: ledState[0][0] = 0; ledState[0][1] = 0; ledState[0][2] = 0; ledState[0][3] = 1; playerOneLedRowOne = 4; break;} 
}

void colorStatus(){

if (gameAlive == true){  
  for (int i = 0; i < 4; i++) {
    if (ledState[0][i] == 0) { strip.setPixelColor(i, 0x00f9ff); strip.show();}
    if (ledState[0][i] == 1) { strip.setPixelColor(i, 0xff00ed); strip.show();} }
  for (int i = 4; i < 8; i++) {
    if (ledState[0][i] == 0) { strip.setPixelColor(i, 0x00f9ff); strip.show();}
    if (ledState[0][i] == 1) { strip.setPixelColor(i, 0xff00ed); strip.show();} }
  for (int i = 8; i < 12; i++) {
    if (ledState[0][i] == 0) { strip.setPixelColor(i, 0x00f9ff); strip.show();}
    if (ledState[0][i] == 1) { strip.setPixelColor(i, 0xff00ed); strip.show();} }
  for (int i = 12; i < 16; i++) {
    if (ledState[0][i] == 0) { strip.setPixelColor(i, 0x00f9ff); strip.show();}
    if (ledState[0][i] == 1) { strip.setPixelColor(i, 0xff00ed); strip.show();} }
}
}

void colorGameOver(){
  if (gameAlive == false){
    for (int i = 0; i < 16; i++) { strip.setPixelColor(i, 0xFF0000); strip.show(); }
  }  
}
