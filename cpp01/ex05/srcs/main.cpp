#include "Harl.hpp"

int	main()
{
	Harl	complaint;

	complaint.complain("debug");
	complaint.complain("info");
	complaint.complain("warning");
	complaint.complain("error");
	complaint.complain("eor");
	return 0;
}
