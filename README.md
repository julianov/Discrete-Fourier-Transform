# Discrete-Fourier-Transform

/* 
*****************************************This code was created by Oviedo Julian**********************************************************
********************************************************JAOdev***************************************************************************
                                              definition of dft.h and dft.c
*****************************************************************************************************************************************
Following Nyquist theorem, the discrete fourier transform output for a real signal array of N componets is N/2 + the continous value. 

frecuency sample rate = N/ Td where N is the input array lenght and Td is the sample time rate

The frecuency resolution is given by: Delta f = sample frecuency / input array length

Only if the sample frecuency is equal to the input array length, the output resolution will be 1 Hz.
*****************************************************************************************************************************************

the arrays input, amplitudeOutput and phaseOutput has to be manage externally. Created, allocate memory and de-allocate memory. 

amplitudeOutput and phaseOutput length is equal to input (length/2 +1)

*/
