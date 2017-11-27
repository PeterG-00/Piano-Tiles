void buttons(){
       if ((voltageButtonsPlayerOne >= 275) && (voltageButtonsPlayerOne <= 375))  { buttonState1 = 1; } // 319 - red-red-black-red         //  22K ohm
  else if ((voltageButtonsPlayerOne >= 450) && (voltageButtonsPlayerOne <= 550))  { buttonState2 = 1; } // 511 - brown-black-black-red     //  10K ohm
  else if ((voltageButtonsPlayerOne >= 650) && (voltageButtonsPlayerOne <= 750))  { buttonState3 = 1; } // 695 - yellow-violet-black-brown // 4.7K ohm 
  else if ((voltageButtonsPlayerOne >= 950) && (voltageButtonsPlayerOne <= 1023)) { buttonState4 = 1; } // 999 - orange-orange-black-black //  330 ohm
  else { buttonState1 = 0; buttonState2 = 0; buttonState3 = 0; buttonState4 = 0;}
}

void buttonTest(){ 
  if ((ledState[3][3] == 1) && (newLedOn == 1))      { buttonActive1 = 1; newLedOn = 0; }
  if ((ledState[3][3] == 1) && (buttonState1  == 1)) { buttonActive1 = 0;     }
  if ((ledState[3][3] == 0) && (buttonActive1 == 1)) { gameAlive     = false; }
  if ((newLedOn == 1)       && (buttonState1  == 1)) { gameAlive     = false; }

  if ((ledState[3][2] == 1) && (newLedOn == 1))      { buttonActive2 = 1; newLedOn = 0; }
  if ((ledState[3][2] == 1) && (buttonState2  == 1)) { buttonActive2 = 0;     }
  if ((ledState[3][2] == 0) && (buttonActive2 == 1)) { gameAlive     = false; }
  if ((newLedOn == 1)       && (buttonState2  == 1)) { gameAlive     = false; }

  if ((ledState[3][1] == 1) && (newLedOn == 1))      { buttonActive3 = 1; newLedOn = 0; }
  if ((ledState[3][1] == 1) && (buttonState3  == 1)) { buttonActive3 = 0;     }
  if ((ledState[3][1] == 0) && (buttonActive3 == 1)) { gameAlive     = false; }
  if ((newLedOn == 1)       && (buttonState3  == 1)) { gameAlive     = false; }

  if ((ledState[3][0] == 1) && (newLedOn == 1))      { buttonActive4 = 1; newLedOn = 0; }
  if ((ledState[3][0] == 1) && (buttonState4  == 1)) { buttonActive4 = 0;     }
  if ((ledState[3][0] == 0) && (buttonActive4 == 1)) { gameAlive     = false; }
  if ((newLedOn == 1)       && (buttonState4  == 1)) { gameAlive     = false; }
}


