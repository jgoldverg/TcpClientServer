/**
 * @jacobgol_assignment1
 * @author  Jacob Goldverg <jacobgol@buffalo.edu>
 * @version 1.0
 *
 * @section LICENSE
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of
 * the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * General Public License for more details at
 * http://www.gnu.org/copyleft/gpl.html
 *
 * @section DESCRIPTION
 *
 * This contains the main function. Add further description here....
 */
#include <iostream>
#include <stdio.h>
#include <string>
#include <stdlib.h>

#include "../include/global.h"
#include "../include/logger.h"

using namespace std;

/**
 * main function
 *
 * @param  argc Number of arguments
 * @param  argv The argument list
 * @return 0 EXIT_SUCCESS
 */
int main(int argc, char *argv[])
{
	/*Init. Logger*/
	cse4589_init_log(argv[2]);

	/* Clear LOGFILE*/
    fclose(fopen(LOGFILE, "w"));

	/*Start Here*/
	/* In total we recieve two arguments from user 
	1st arg is an s or a c. s= server mode, and c=client mode
	2nd arg is the port number to listen on
	*/
	std::string programName = argv[0];
	int portNumber = atoi(argv[2]);
	cout << programName << "\n";
	cout << argv[1];
	cout << "The port number passed in is " + std::to_string(portNumber) + "\n";
	if(*argv[1] == 'c'){
		//now we enter client mode which is reach out a connection to the TCP server
		cout << "We have entered client mode";
	}else if(*argv[1] == 's'){
		//now we start and enter server mode
		cout << "We are now in server mode";
	}
	return 0;
}
