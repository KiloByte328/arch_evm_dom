


int sc_memoryInit ()
{
    int ram[100];
    for (int i = 0; i < 100; i++)
    {
	ram[i] = 0;
    }
    return ram;
}

int sc_memorySet (int address, int value)
{

}

int sc_MemoryGet (int address, int *value)
{

}

int sc_memorySave (char *filename)
{

}

int sc_memoryLoad (char *filename)
{

}

int sc_regInit ()
{

}

int sc_regSet (int register, int value)
{

}

int regGet (int regiser, int *value)
{

}

int sc_commandEncode (int command, int operand, int *value)
{

}

int sc_commandDecode (int value, int *command, int *operand)
{

}
