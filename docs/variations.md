# Possible variations of circuit configuration and thus neccesary code

1) LED levels vs Hue
    - [ ] 3 potentiometers: one controlling each of the 3. light channels in every mode.
        - More flexibility in color selection
        - Easier to implement
    - [ ] 2 potentiometers: one controlling the brightness and second controlling the hue. (temperature of white light or literal hue in RGB) 
        - Much more intuitive and faster to operate
    - [ ] Hybrid of two above: you can change 'mode' with button and steer in each of modes above
        - More work
        - more possibilities
   
2) Modes:
    - [ ] 2 independent modes - when you switch mode all lights lit in the previous one go off.
        - probably worse overall
        - might be neccessary due to power constraints
    - [ ] 2 modes with "save" - when you switch mode brightness of lit lights is preserved, you just switch the controls
        - Allows greater flexibility, mainly white light with tint of some colour.
    - [ ] 3 modes - 2 as one above and additional mode with pre-programmed animations
  
3) Dumb/smart RGB strip:
    - [X] simple RGB strip
        - cheaper built
    - [ ] adresable RGB strip
        - much more flexibility in operation
        - superset of simple RGB functions - functionalities can be added later

4) Analog/digital steering:
    - [ ] potentiometers
    - [ ] encoders
  
5) Indicator set:
    - [ ] LED diodes - mode indicator,input indicator
    - [ ] LCD 16x2 display