This repository contains Arduino and Processing sketches to accompany the "Infrared Pulse Sensor" project at:

makezine.com/projects/IR-pulse-sensor

A pulse wave is the change in the volume of a blood vessel that occurs when the heart pumps blood, and a detector that monitors this volume change is called a pulse sensor.
First, there are four main ways to measure heart rate: electrocardiogram, photoelectric pulse wave, blood pressure measurement, and phonocardiography.
Reflection-Type Pulse Sensor (Optical Sensor for Heart Rate Monitor)
Reflection-type pulse sensors (Optical Sensors for Heart Rate Monitor) emit infrared, red, or green light (~550nm) towards the body and measure the amount of light reflected using a photodiode or phototransistor. Oxygenated hemoglobin present in the blood of the arteries has the characteristic of absorbing incident light, so by sensing the blood flow rate (change in blood vessel volume) that changes following heart contractions over time we are able to measure the pulse wave signal.
Also, since reflected light is measured, the range of suitable areas is not limited as with transmission-type pulse sensors.
Pulse wave measurement using red or infrared light can be affected by infrared rays contained in sunlight (i.e. outdoors), preventing stable operation. For this reason, usage indoors or semi-indoors is recommended.
For pulse wave measurement outdoors (i.e. by smart watches), a green light source which has a high absorption rate in hemoglobin and less susceptibility to ambient light is preferred, so ROHM utilizes green LEDs as transmission light sources.
