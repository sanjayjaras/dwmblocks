//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/	 	/*Update Interval*/	/*Update Signal*/
    //{" 🐧 ", "~/applications/dwmblocks-distrotube/scripts/kernel",		    360,		        2},
	//Uptime
	//{" 🔺 ", "~/applications/dwmblocks-distrotube/scripts/upt",		        60,		            2},

	//{" 📦 ", "~/applications/dwmblocks-distrotube/scripts/pacupdate",		360,		        9},

	
	{"^c#ff2add^", "~/applications/dwmblocks/scripts/play_prev",	        3600,		            11},

	{"^c#7ccbff^", "~/applications/dwmblocks/scripts/play_pause",	        5,		            12},

	{"^c#ff2add^  ", "~/applications/dwmblocks/scripts/play_next",	        3600,		            13},

	{"^c#7ccbff^  ", "~/applications/dwmblocks/scripts/cpu",	        5,		            1},
	
	{"^c#ff2add^  ", "~/applications/dwmblocks/scripts/memory",	        5,		            2},

	{"^c#7ccbff^  ", "~/applications/dwmblocks/scripts/gpu-temp",        10,		            3},

	//Refresh interval is hardcoded shell script if changed here need to change in file
	{"^c#ff2add^ ", "~/applications/dwmblocks/scripts/net",	        5,		            4},

	{"^c#7ccbff^ ", "~/applications/dwmblocks/scripts/volume",			5,		            5},

	{"^c#ff2add^  ", "~/applications/dwmblocks/scripts/pacupdate",			600,		            6},

	{"^c#7ccbff^  ", "~/applications/dwmblocks/scripts/clock",			10,		            7},

	
//	{"^c#7ccbff^  ", "~/applications/dwmblocks/scripts/show_playing &",	        10,		            0}
	//{" ", "~/applications/dwmblocks/scripts/show_song_info", 5, 14},

	//{"\x08  ", "", -1, 10},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = '\0';
