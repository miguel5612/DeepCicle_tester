# DeepCicle_tester
deep cycle battery tester created using arduino and open source componentes
# Components
1. 12V @ 200A Battery.
2. Ks0185 keyestudio ACS712-30A Current Sensor
3. Arduino Uno
4. 2 Resistances for Voltage divisor
# Objective
Discharge the C10 battery to test if are Ok internally.
# Calculations
200Ah -> C10 Categorie -> 20Ah on 10 hours.
Resistance = Voltage/Current = 12/20 = 0.6
Power = V^2/R = 12^2/0.6 = 240 Watts
Its can be represented between:
1 -> 0.6 Ohms 240 Watt resistance
2 -> 1.2 Ohms 120 Watt resistance
4 -> 2.4 Ohms 60 Watt resistance
8 -> 4.8 Ohms 30 Watt resistance
16 -> 9.6 Ohms 15 Watt resistance
Or comercially i was found:
14 Resistances 20 Ohms 20 watts = 1.76 Ohms 
14 Resistances 20 Ohms 10 Watts = 1.76 Ohms
Total = 0.88 Ohms
Current = Volt/Res = 12 / 0.88 = 13.63 Ampers 
Ah = 13.63 * 1 hour = 13.63 Ah
Time = 200Ah/13.63Ah = 14.67 Hours if battery was OK
