extern void transmit(char * st);
extern multiplier;
void transpose(void)
{
    float whole = 1.12246204831;
    float wholes = 1.37459001586;

    if (multiplier == 1) 
    {
        multiplier = whole;
        transmit("Tranposed a whole step");
    }
    if (multiplier == whole)
    {
        multiplier = wholes;
        transmit("Tranposed two whole steps");
        
    }
    if (multiplier == wholes)
    {
        multiplier = 1;
        transmit("Transpose is off");
    }
}