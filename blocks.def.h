//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/			/*Update Interval*/	/*Update Signal*/
	{"CPU: ",	"cpu-usage",			5,			0},	

	{"RAM: ", 	"ram-usage",			5,			0},

	{"",		"date '+%Y-%m-%d %R '",		30,			0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = "    ";
static unsigned int delimLen = 5;
