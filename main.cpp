#include "driver.hpp"
#include <iostream>
#include <json/json.h>


int main(void){
	int d;
	webdriver wd;
	auto msg = wd.start_session();//("https://google.com");
	// std::cout << msg << std::endl;
	// std::cout << wd.status() << std::endl;
	// std::cout << wd.get_timeouts() << std::endl;
	// std::cout << "Setting timeouts...\n" << wd.set_timeouts(0,150000,15000) << std::endl;
	// std::cout << wd.get_timeouts() << std::endl;
	// std::cout << "Waiting on input" << std::endl;
	std::cout << wd.navigate_to("https://google.com") << std::endl;
	// std::cout << wd.get_url() << std::endl;
	// std::cout << wd.navigate_to("https://example.com") << std::endl;
	// std::cin >> d;
	// std::cout << wd.go_back() << std::endl;
	// std::cin >> d;
	// std::cout << wd.go_forward() << std::endl;
	// std::cin >> d;
	// std::cout << wd.refresh() << std::endl;
	// std::cout << wd.title() << std::endl;
	auto current_handle = wd.get_window_handle().asString();
	std::cout << current_handle << std::endl;
	auto new_handle = wd.new_window()["handle"].asString();
	std::cout << new_handle << std::endl;
	std::cout << wd.switch_to_window(new_handle) << std::endl;
	std::cout << wd.get_window_handles() << std::endl;
	std::cin >> d;
	wd.stop_session();
	// Json::Reader reader;
	// Json::Value val;
	// std::cout << reader.parse("{\"value\":null}",val) << std::endl;
	// std::cout << val << std::endl;
	return 0;
}
