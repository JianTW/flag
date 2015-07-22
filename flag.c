#include <stdio.h>
#include <string.h>
int main(int argc, char **argv)
{
	if(strncmp(argv[0], "flag", 4) && strncmp(argv[0], "./flag", 6))
		printf("you should use flag as program name.\n");
        else if(argc==1)
		printf("you should set flag flag.\n");
	else if(strncmp(argv[1], "--flag", 6))
		printf("you should set flag flag.\n");
	else if(strncmp(argv[1], "--flag=flag", 11))
		printf("you should set flag as flag flag.\n");
	else
	{
		printf("Congratulation! you understand what flag means\n");
printf("     `.                                  \n");  
printf("    `,:  :;,......:`                     \n");  
printf("    `, ';;;;.....,,,::                   \n");  
printf("   ``;;;;;;;,,.,,,,,:;;;:            ;   \n");  
printf("     :;;;;;;,,,,,,,,,;;'''''.      `++   \n");  
printf("     :;;;;;;,,,,,,,,,;;''''''''+++++++   \n");  
printf("     ,';;;;;,,,,,,,,,;;''''''''+++++++`  \n");  
printf("     ,';;;;;,,,,,,,,:;;''''''''+++++++:  \n");  
printf("     ,;;;;;;:,,,,,,::;;''''''''++++++++  \n");  
printf("     .;;;;;;;,,,,,:::;;''''''''+++++++#  \n");  
printf("     .;;;;;;;,,,,:::::;''''''''++++++++  \n");  
printf("     `;;;;;;;,,,::::::;''''''''++++++++  \n");  
printf("     `:;;;;;;:::::::::;''''''''++++++++  \n");  
printf("     `:;;;;;;:::::::::;''''''''++++++++` \n");  
printf("     `:;;;;;;::::::::;;''''''''++++++++: \n");  
printf("      :;;;;;;;::::::;;;''''''''+++++++++ \n");  
printf("      ,;;;;;;;:::::;;;;''''''''++++++++# \n");  
printf("      ,;;;;;;;::::;;;;;''''''''++++++++# \n");  
printf("      ,;;;;;;;:::;;;;;;''''''''++++++++# \n");  
printf("     `.;;;;;;;::;;;;;;;''''''''+++++++++ \n");  
printf("      .:;;;;;;::;;;;;;;''''''''+++++++++ \n");  
printf("      `:;;;;;;::;;;;;;;''''''''+++++++++,\n");  
printf("      `:;;;;;;::;;;;;;;''''''''+++++++++'\n");  
printf("      `:;;;;;;::;;;;;;;;'''''''+++++++++#\n");  
printf("      `:;'`    `;;;;;;;''''''''+++++++++#\n");  
printf("      `,           .'';''''''''+++++++++#\n");  
printf("      `,              :+'''''''++++++++##\n");  
printf("      `,.                ;#+'''++++++#+  \n");  
printf("      `,:                    .:''':`     \n");  
printf("       .:                                \n");  
printf("       .:                                \n");  
printf("       .,                                \n");  
printf("       `,                                \n");  
printf("       `.                                \n");  
printf("       `.                                \n");  
printf("       ```                               \n");  
printf("        ``                               \n");  
printf("        ``                               \n");  
printf("        ``                               \n");  

	}
	return 0;
}
