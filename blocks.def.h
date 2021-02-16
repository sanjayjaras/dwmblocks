//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/	 	/*Update Interval*/	/*Update Signal*/
    //{" 🐧 ", "~/applications/dwmblocks-distrotube/scripts/kernel",		    360,		        2},
	//Uptime
	//{" 🔺 ", "~/applications/dwmblocks-distrotube/scripts/upt",		        60,		            2},

	//{" 📦 ", "~/applications/dwmblocks-distrotube/scripts/pacupdate",		360,		        9},

	{" \uf2db ", "~/applications/dwmblocks-distrotube/scripts/cpu",	        6,		            1},
	
	{" \uf538 ", "~/applications/dwmblocks-distrotube/scripts/memory",	        6,		            1},

	{" \uf76b ", "~/applications/dwmblocks-distrotube/scripts/gpu-temp",        10,		            1},

	//Refresh interval is hardcoded shell script if changed here need to change in file
	{" ", "~/applications/dwmblocks-distrotube/scripts/net",	        10,		            1},

	{" ", "~/applications/dwmblocks-distrotube/scripts/volume",			5,		            10},

	{" \uf2f1 ", "~/applications/dwmblocks-distrotube/scripts/pacupdate",			600,		            11},

	{" \uf073 ", "~/applications/dwmblocks-distrotube/scripts/clock",			10,		            0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = '|';
