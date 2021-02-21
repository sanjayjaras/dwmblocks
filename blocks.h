//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/	 	/*Update Interval*/	/*Update Signal*/
    //{" 🐧 ", "~/applications/dwmblocks-distrotube/scripts/kernel",		    360,		        2},
	//Uptime
	//{" 🔺 ", "~/applications/dwmblocks-distrotube/scripts/upt",		        60,		            2},

	//{" 📦 ", "~/applications/dwmblocks-distrotube/scripts/pacupdate",		360,		        9},

	{"\x01 \uf2db ", "~/applications/dwmblocks/scripts/cpu",	        6,		            1},
	
	{"\x02 \uf538 ", "~/applications/dwmblocks/scripts/memory",	        6,		            1},

	{"\x03 \uf76b ", "~/applications/dwmblocks/scripts/gpu-temp",        10,		            1},

	//Refresh interval is hardcoded shell script if changed here need to change in file
	{"\x04 ", "~/applications/dwmblocks/scripts/net",	        10,		            1},

	{"\x05 ", "~/applications/dwmblocks/scripts/volume",			10,		            10},

	{"\x06 \uf2f1", "~/applications/dwmblocks/scripts/pacupdate",			600,		            11},

	{"\x07 \uf073 ", "~/applications/dwmblocks/scripts/clock",			10,		            0},
	{"\x08  ", "", -1, 10},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = '|';
