# Introduction #

All the changes in the code are marked with a EEEPC\_BUILD1 build flag. The codes were done in a quick & dirty way because I want to keep the original structure of the program.

Added Fuel Efficiency Gauge, available in MPG and L/100Km. The fuel efficiency is calculated using Mass Air Flow, Vehicle Speed and Short Term Fuel Trim.

# Details #

Mass Air Flow (MAF) sensor returns the Mass of Air that flows through the intake system x 100. So in order to get the unit, gram per second, the value is divided by 100.

Modern ECUs try to keep the Air / Fuel mixture ratio within the combustion chamber around 14.7 because it is the most efficiency ratio. This only applies when the system is in "closed loop", meaning that the speed stays quite constant.

From the Air / Fuel mixture ratio, the mass of fuel consumed can be calculated. Divide the mass by the density of fuel, the volume can be estimated. To be more accurate, this is adjusted with the short term fuel trim.

Fuel Efficiency in L/100Km = Volume of fuel consumed (L/Hour) / vehicle speed (Km/Hour) x 100

This is just an estimated fuel efficiency, and should only be accurate in "closed loop" and at a consistent speed. Some cars, such as mine, only has narrow-band O2 sensor. I'm not sure how much that would affect the error.

I tested this on my 2004 Mazda 3 2.0L Automatic. The result was about 8 L/100Km at 50 Km/h. This value was not adjusted with O2 sensor output. As a comparison, Mazda 3 2.3L has a fuel efficiency of 9.2L/100Km. The 1.2L/100Km difference may come from the engine size, BuddyClub Condenser, and after-market 16" lightweight rims. Each of those rims is 7 lbs. lighter than 2.3L's stock 17" alloy rim.

Here is a screen shot, taken with a camera. Sorry for the blurry picture, it's hard to focus when the road is bumpy.

![http://scantool-eeepc.googlecode.com/files/fuel_efficiency.jpg](http://scantool-eeepc.googlecode.com/files/fuel_efficiency.jpg)

The fuel density is set in scantool.cfg, default is set to 711.5 (90% gasoline + 10% ethanol). If you use 100% gasoline, try 702.5. I don't think this would work with diesel because it works differently.