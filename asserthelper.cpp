#include <Arduino.h>
// handle diagnostic informations given by assertion and abort program execution:
extern "C" {

void assert_3(const char *__file, int __lineno, const char *__sexp) {
    // transmit diagnostic informations through serial link. 
    // Serial.println(__func);
    Serial.println(" ___ ASSERT FAILED ___ FILE, LINE#, Expression ");
    Serial.println(__file);
    Serial.println(__lineno, DEC);
    Serial.println(__sexp);
    Serial.flush();
    // abort program execution.
    //xxx abort();
    Serial.println(" ___ ASSERT FAILED ___ STOPPING !!!!");
    while( 1 );
}

}
