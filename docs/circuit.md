[TODO]
changes to this description will be made once [variations](variations.md) are settled upon.

# Text description of lamp circuit

  ### Microcontroller: Arduino nano (clone/compatibile)

#### Source of light:
Light source is to be Photography-grade LED strips with following channels:
 - HW - Hot white (~2000K)
 - NW - Neutral white (~5500K)
 - CW - Cold white, probably Ice blue [^1] (8000-18000K)
 - R  - Red
 - G  - Green
 - B  - Blue
  
The physical configuration of these LED strips (i.e. whether, for example HW, and NW are in single strip or separate ones) is irrelevant to the code and setup.

#### Connected to microcontroller:
  - 6 MOSFETs, one for each light channel controlling actual LED strips.\
    These are to be connected to pins that allow PWM signal. Since Arduino nano have two of PWM pins connected to the single clock - it's probably a good idea to connect one of white channels and one of RGB channels to each clock for fluid changes.
  - Two-Three potentiometers, depending on [version](variations.md).
  - button for changing the modes
  - couple of indicator LEDs, depending on version. At least 2.



[^1]: probably called "Ice blue" which is still white, just heavily shifted to the blue part of spectrum.