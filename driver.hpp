#pragma once
#include <curl/curl.h>
#include <json/json.h>
#include <string>

class webdriver{
    CURL* curl;
    Json::Value session;
	std::string readBuffer;
    const std::string DRIVER_IP = "127.0.0.1:4444";

public:
    webdriver();
    ~webdriver();

    Json::Value start_session();
    Json::Value stop_session();
    Json::Value status();
    Json::Value get_timeouts();
    Json::Value set_timeouts(int implicit, int pageLoad, int script);
    Json::Value navigate_to(std::string url);
    Json::Value get_url();
    Json::Value go_back();
    Json::Value go_forward();
    Json::Value refresh();
    Json::Value title();
};