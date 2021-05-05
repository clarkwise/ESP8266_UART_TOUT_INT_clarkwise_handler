/*
 ESP8266_UART_TOUT_INT_clarkwise_handler.ino - Demo of handling 
 returned data from clarkwise touch screen.
 Copyright (c) 2021 clarkwise.cc  All right reserved.
 This library is free software; you can redistribute it and/or
 modify it under the terms of the Apache License 2.0

 Usage:
 Call install_uart_tout(); in setup.
 Rewrite clarkwise_returns_handler() in your code. The returned data is stored as rMsg
 */

#include "ESP8266_UART_TOUT_INT_clarkwise_handler.h"

void setup() {
  Serial.begin(115200);
  // put your setup code here, to run once:
  
  install_uart_tout();
}

void loop() {
  // put your main code here, to run repeatedly:
}

void clarkwise_returns_handler(){
  Serial.println(rMsg.control_id);
  Serial.println(rMsg.varInt);
  Serial.println(rMsg.varFloat);
  Serial.println(rMsg.varString);
}
