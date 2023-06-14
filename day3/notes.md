One thing I do not get about this is why if I remove the resistor connecting input 2 to GROUND does the LED turn on? How is it reading an input of HIGH
just because it isn't directly connected to GROUND?

AI response (take with a grain of salt, it's AI not a professional) :
If you remove the resistor connecting input 2 to ground, the behavior you described is unexpected. The LED should not turn on simply due to the absence of the resistor.

Without the pull-down resistor, the voltage level at pin 2 of the Arduino can float or be influenced by external factors, such as electromagnetic interference or the internal impedance of the pin. As a result, the voltage at pin 2 can be in an indeterminate state (neither high nor low), causing unpredictable behavior.

In a properly configured circuit, a pull-down resistor is used to ensure a defined state for the input pin when the switch is open. When the switch is open, the pull-down resistor provides a path for the current to flow from the input pin to ground, effectively pulling the voltage at pin 2 to a low level (0V) and ensuring that it is interpreted as a logical LOW state.

Without the pull-down resistor, the voltage at pin 2 may not be reliably LOW when the switch is open, and it can be influenced by various factors, potentially causing unexpected behavior.

Therefore, it is advisable to include the pull-down resistor to maintain a stable and defined state for the input pin when the switch is open.
