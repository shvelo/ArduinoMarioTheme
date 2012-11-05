ArduinoMarioTheme
=================

Assignment 9. ARDUINO PROGRAMMING - INTO

Authors:  
 Freyr Bergsteinsson <freyrb12@ru.is>  
 Egill Bjornsson <egillb12@ru.is>

<a rel="license" href="http://creativecommons.org/licenses/by-nc-sa/3.0/deed.en_US"><img alt="Creative Commons License" style="border-width:0" src="http://i.creativecommons.org/l/by-nc-sa/3.0/88x31.png" /></a><br />This work is licensed under a <a rel="license" href="http://creativecommons.org/licenses/by-nc-sa/3.0/deed.en_US">Creative Commons Attribution-NonCommercial-ShareAlike 3.0 Unported License</a>.

INTO_Skil9_EgillOgFreyr_Mario
-----------------------------

This is a supplemental project for potential creativity points.  
It makes the Arduino play the Mario Bros theme song when the button is pressed.

[Video showing the assembled Arduino running this code](http://youtu.be/tkouyq9pasc).


Arduino Assembly
----------------

    Pin | Connected to  
    ----+------------------------------------------------------  
      0 | Seven segment display pin 7  
      1 | Seven segment display pin 6  
      2 | Seven segment display pin 4  
      3 | Seven segment display pin 2  
      4 | Seven segment display pin 1  
      5 | Seven segment display pin 9  
      6 | Seven segment display pin 10  
      7 | 330 ohm resistor -> Seven segment display pins 3 & 8  
      8 | Button pin  
      9 | 330 ohm resistor -> RGB led red light pin  
     10 | 330 ohm resistor -> RGB led green light pin  
     11 | 330 ohm resistor -> RGB led blue light pin  
     12 | 10k ohm resistor -> Buzzer pin  
     13 | Not used  
    ----|------------------------------------------------------  
     5v | Buzzer voltage pin  
    ----|------------------------------------------------------  
    Gnd | RGB led ground pin  
    Gnd | Button ground pin  
    Gnd | Buzzer ground pin
