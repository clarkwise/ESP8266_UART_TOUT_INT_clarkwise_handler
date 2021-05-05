
# ESP8266_UART_TOUT_INT_clarkwise_handler
The clarkwise touch screen UART RX time out handler for ESP8266.

This is a particular application for clarkwise touch screen. If you want to see the general code, please visit 
[https://clarkwise.cc/tips/esp8266-uart-rx-interrupt-on-arduino/](https://clarkwise.cc/tips/esp8266-uart-rx-interrupt-on-arduino/)

## Usage 
Include the header file in your code

    #include "ESP8266_UART_TOUT_INT_clarkwise_handler.h"
Call the installation function in setup()

    install_uart_tout();
Rewrite the handler function, and the parsed result stored at variable rMsg

    void clarkwise_returns_handler(){
      Serial.println(rMsg.control_id);
      Serial.println(rMsg.varInt);
      Serial.println(rMsg.varFloat);
      Serial.println(rMsg.varString);
    }
## Important

 1. **Keep the handler function short. Make sure it runs less than 1ms**
 2. **Must not call `delay()` or `yield()`, or call any routines which internally use `delay()` or `yield()` either**

If it does take some time to process the rMsg, setup a flag varaible and process it in the loop()

## Original post
https://clarkwise.cc/uncategorized/esp8266-uart-rx-interrupt-with-clarkwise-touch-screen-the-actual-application/

## Product link
[clarkwise Arduino touch screen](https://clarkwise.cc/product/arduino-touchscreen/)

## Follow us on
[Twitter](https://twitter.com/clarkwiseglobal) | [Facebook](https://www.facebook.com/clarkwise.global) | [Instagram](https://www.instagram.com/clarkwise_global) | [YouTube](https://www.youtube.com/channel/UClFm3fZ9NXnu5KDlegg50Aw)
