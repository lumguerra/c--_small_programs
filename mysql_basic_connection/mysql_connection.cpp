#include <iostream>
#include <mysql.h>

int main()
{
	MYSQL* connect = mysql_init(NULL);
	!connect ? std::cerr << "MySQL not innitialized.\n"
		: std::cout << "MySQL connected.\n";
	mysql_close(connect);
}