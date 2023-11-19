/**
 * @file main.ino
 * @brief Main code of the lamp microcontroller
 * @date 2023-10-25
 * 
 */

///@todo Add pins. Remember to add channels to the PWM clock mentioned below.

//clock 1
int HWpin = 
int Rpin = 
//clock 2
NWpin = 
Gpin = 
//clock 3
CWpin =
Bpin =

///@todo Depending on version similar function to every button switch is needed

/**
 * @brief Color mode switch
 * Function is called from main loop to check if Color mode button is pressed.
 * If so it changes it.
 * @return @p true  - if RGB mode is active
 *         @p false - if white mode is active
 */
bool color_mode()

/**
 * @brief Cast one Hue value into brightness value of PWM channel
 * Function that takes info about current color mode, called channel and
 * single (linear) hue value. It returns value of the brightness in range
 * (0-255) of the channel passed as an argument.
 * 
 * @todo It is HIGHLYY recommended to get help from some internet source to
 *       make color change smooth and linear when any potentiometer is
 *       turned. That might NOT neccesarily mean that brightness values will
 *       be linear as well
 */
int hue(bool mode, LED_channel channel, int hue)

void setup() {
  pinMode(PotPin, INPUT);

  //light channels
  pinMode(HWpin, OUTPUT);
  pinMode(NWpin, OUTPUT);
  pinMode(CWpin, OUTPUT);
  pinMode(Rpin, OUTPUT);
  pinMode(Gpin, OUTPUT);
  pinMode(Bpin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

}
