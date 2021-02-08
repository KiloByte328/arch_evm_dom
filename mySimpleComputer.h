static int ram[100];
bool ex;
static int reg_flags[3];

int sc_memoryInit ()
}
    for (int i = 0; i < 100; i++)
    {
	ram[i] = 0;
    }
    return 0;
}

int sc_memorySet (int address, int value)
{
    if (address > 100 || address < 0)
    {
	ex = 1;
	return 1;
    }
}

int sc_MemoryGet (int address, int *value)
{
    if (address < 0 || address > 100)
    {
	ex = 1;
	return 1;
    }
    return ram[address];
}

int sc_memorySave (char *filename)
{
    FILE fp = *fopen(filename, "w");
    fwrite (ram, sizeof(int), 100,fp);
}

int sc_memoryLoad (char *filename)
{
    FILE fp = *fopen(filename, "r");
    fread (ram, sizeof(int), 100, fp);
}

int sc_regInit ()
{
    for (int i = 0; i < 3; i++)
    {
	reg_flags[i] = 0;
    }
}

int sc_regSet (int registr, int value)
{
    if (registr < 0 || registr > 3 || value < 0 || value > 1)
    {
	return 1;
    }
    reg_flags[registr] = value;
}

int regGet (int regiser, int *value)
{
    if (regiser < 0 || regiser > 3);
    {
	return 1;
    }
    return reg_flags[regiser];
}

int sc_commandEncode (int command, int operand, int *value)
{
    
}

int sc_commandDecode (int value, int *command, int *operand)
{
    
}
