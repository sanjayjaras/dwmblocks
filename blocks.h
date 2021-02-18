//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/	 	/*Update Interval*/	/*Update Signal*/
    //{" 🐧 ", "~/applications/dwmblocks-distrotube/scripts/kernel",		    360,		        2},
	//Uptime
	//{" 🔺 ", "~/applications/dwmblocks-distrotube/scripts/upt",		        60,		            2},

	//{" 📦 ", "~/applications/dwmblocks-distrotube/scripts/pacupdate",		360,		        9},

	{" \x04\uf2db ", "~/applications/dwmblocks/scripts/cpu",	        6,		            1},
	
	{" \x03\uf538 ", "~/applications/dwmblocks/scripts/memory",	        6,		            1},

	{" \x04\uf76b ", "~/applications/dwmblocks/scripts/gpu-temp",        10,		            1},

	//Refresh interval is hardcoded shell script if changed here need to change in file
	{" \x03 ", "~/applications/dwmblocks/scripts/net",	        10,		            1},

	{" \x04", "~/applications/dwmblocks/scripts/volume",			5,		            10},

	{" \x03\uf2f1 ", "~/applications/dwmblocks/scripts/pacupdate",			600,		            11},

	{" \x04\uf073 ", "~/applications/dwmblocks/scripts/clock",			10,		            0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = '|';
