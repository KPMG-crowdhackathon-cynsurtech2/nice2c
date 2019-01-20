#iclude <iostream>
#include<windows.h>
#include <curlpp/cURLpp.hpp>
#include <curlpp/Options.hpp>
#include <fstream>

curlpp::Cleanup myCleanup;

std::ostringstream os;
os << curlpp::options::Url(std::string("https://apis.bankofcyprus.com/df-boc-org-prd/prod/psd2/v1/payments/accounts/{accountId}"));
//added the fundamentals to ransfer money from the user to the insurance companies


int main(){
	bool paymentok = false;
	string SendPayment = os.str();




	return 0;
}
